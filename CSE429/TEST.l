%{
#include <stdio.h>
%}
%option noyywrap
DIGIT    [0-9]
ID       [a-zA-Z][a-zA-Z0-9]*
WHITESPACE	[ \n\t]
ANY 	[a-zA-Z0-9 \t_,]*
TYPE	[int|void|float|double|char]

%%

"#" printf("definition: %s\n",yytext);

if|else|while|main|include|goto|do|return        {
            printf( "keyword(Terminal token) : %s\n", yytext );
            }
			
{ID}"."h	printf("Header file: %s\n",yytext);
			
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
            printf( "integer (non-terminal token): %s\n", yytext);
            }

{DIGIT}+"."{DIGIT}*        {
            printf( "float (non-terminal token) : %s\n", yytext);
            }

{ID}|"_"+{ID}        printf( "identifier: %s\n", yytext );

"+"|"-"|"*"|"/"|"%"|"="   printf( " operator: %s\n", yytext );

"<"|">"|"<="|">="|"=="	printf("Comparison operator: %s\n",yytext);

"["|"{"|"}"|"]"|"("|")"	printf("Bracket: %s\n",yytext);

;	printf("End of an statement: %s\n",yytext);


"{"[^}\n]*"}"     

[ \t\n]+          

.           printf( "simple characters: %s\n", yytext );

%%

main()
{
yyin=fopen("input.c","r");

yylex();

}