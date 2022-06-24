%{
#include <stdio.h>
#include <stdlib.h>
	
%}


digit		[0-9]
digits		[0-9]+ 


signed		[+|-]{digits}
eE 		[e]|[E]
scientific 	({signed}{eE}{signed}*{digits}*)


decimal 	{digits}({point}{digits})+


%%










{signed} 		{printf("A signed number: %s\n",yytext);}




{digit}+"."{digit}+	{printf("A decimal number: %s\n", yytext);}


{scientific} 		{printf("A scientific number: %s\n",yytext);}





			



{digit}			{printf( "An integer: %s\n", yytext );}

			


.			 { printf("Unknown character %s\n",yytext);}
                      

%%

int main(void)
{
  yylex();
  return 0;
}

int yywrap(void) { 
  return 0; 
} 

