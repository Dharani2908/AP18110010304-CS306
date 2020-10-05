#include<stdio.h>
void
main ()
{
  
int state = 0, i = 0;
  

char c, S[30];
  
printf ("Enter An Input string \t :");
  
scanf ("%s",S);
  
while ((c = S[i++]) != '\0')
    {
      
switch (state)
	
	{
	
case 0:
	  if (c == 'a')
	    
state = 1;
	  
	  else if (c == 'b')
	    
state = 2;
	  
	  else
	    
	    {
	      
printf ("Invalid token");
	      
exit (0);
	    
}
	  
break;
	
case 1:
	  if (c == 'a')
	    
state = 0;
	  
	  else if (c == 'b')
	    
state = 3;
	  
	  else
	    
	    {
	      
printf ("Invalid token");
	      
exit (0);
	    
}
	  
break;
	
case 2:
	  if (c == 'a')
	    
state = 3;
	  
	  else if (c == 'b')
	    
state = 0;
	  
	  else
	    
	    {
	      
printf ("Invalid token");
	      
exit (0);
	    
}
	  
break;
	
case 3:
	  if (c == 'a')
	    
state = 2;
	  
	  else if (c == 'b')
	    
state = 1;
	  
	  else
	    
	    {
	      
printf ("Invalid token");
	      
exit (0);
	    
}
	  
break;
	
}
    
}
  
if (state == 0)
    
printf ("\n\nString accepted\n\n");
  
  else
    
printf ("\n\nString not accepted\n\n");

}
