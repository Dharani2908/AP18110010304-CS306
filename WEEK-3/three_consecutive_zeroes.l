%{ 
%} 

%s P Q R bin 

%% 
<INITIAL>1 BEGIN INITIAL; 
<INITIAL>0 BEGIN P; 
<INITIAL>[^01\n] BEGIN bin; 
<INITIAL>\n BEGIN INITIAL; {printf("Not Accepted\n");} 

<P>1 BEGIN INITIAL; 
<P>0 BEGIN Q; 
<P>[^01\n] BEGIN bin; 
<P>\n BEGIN INITIAL; {printf("Not Accepted\n");} 

<Q>1 BEGIN INITIAL; 
<Q>0 BEGIN R; 
<Q>[^01\n] BEGIN bin; 
<Q>\n BEGIN INITIAL; {printf("Not Accepted\n");} 

<R>1 BEGIN R; 
<R>0 BEGIN R; 
<R>[^01\n] BEGIN bin; 
<R>\n BEGIN INITIAL; {printf("Accepted\n");} 

<bin>[^\n] BEGIN bin; 
<bin>\n BEGIN INITIAL; {printf("Invalid\n");} 

%% 

int main() 
{ 
	printf("Enter String\n"); 
	yylex(); 
return 0; 
} 

int yywrap()
{
	return 1;
}
