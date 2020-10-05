%{

int count_vow=0,count_cons=0;

%}

vowel [aeiou]+

consonant [^aeiou]

eol \n

%%

{eol} return 0;

[\t]+ ;

{vowel} {count_vow++;}

{consonant} {count_cons++;}


%%

int main()

{

printf("\n Enter the input string:\n");

yylex();

printf("Vowels=%d and consonants=%d\n",count_vow,count_cons);

return 0;

}

int yywrap()

{


return 1;

}
