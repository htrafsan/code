id1	"if(){}"
id2	"else{}"
id3	"for(){}"
%%
({id1}{id2})	{printf("if-else valid");}
{id3}		{printf("for loop valid");}
.*		{printf("invalid");}

%%

main()
{
yylex();

}
int yywrap()
{

}