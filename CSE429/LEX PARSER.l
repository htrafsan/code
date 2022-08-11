/* scanner for a toy Pascal-like language */
 
%{
/* need this for the call to atof() below */
#include <math.h>
#include <stdio.h>
%}
%option noyywrap
DIGIT    [0-9]
ID       [a-z][a-z0-9]*
WHITESPACE      [ \n\t]
ANY     [a-zA-Z0-9 \t_,]*
TYPE    [int|void|float|double|char]
%%
 
if|else|while|main|include        {
            printf( "A keyword: %s\n", yytext );
            }
{TYPE}+{WHITESPACE}+{ID}+"("+{ANY}+")" {
                printf("function definition: %s\n",yytext);
        }
"\""+{ANY}+"\"" {
                printf("String : %s\n",yytext);
}
int|float|double|char        {
            printf( "A datatype: %s\n", yytext );
            }
 
 
{DIGIT}+    {
            printf( "An integer: %s (%d)\n", yytext,
                    atoi( yytext ) );
            }
 
{DIGIT}+"."{DIGIT}*        {
            printf( "A float: %s (%g)\n", yytext,
                    atof( yytext ) );
            }
 
{ID}|"_"+{ID}        printf( "An identifier: %s\n", yytext );
 
"+"|"-"|"*"|"/"   printf( "An operator: %s\n", yytext );
 
"{"[^}\n]*"}"     /* eat up one-line comments */
 
[ \t\n]+          /* eat up whitespace */
 
.           printf( "Unrecognized character: %s\n", yytext );
 
%%
 
int main()
    {
    yylex();
        return 0;
    }