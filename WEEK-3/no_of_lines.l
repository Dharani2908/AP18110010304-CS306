%{ #include<studio.h>

int no_oflines=0;

%}

%%

\n {++no_oflines;}

%%

int main(int argc[],char *argv[])
{
 yyin=fopen("abc.txt", "r"); 
 yylex();
 printf("number of lines: %d",no_oflines);
 printf("\n"); 
 return 0;
}

int yywrap()
{
  return 1;
}