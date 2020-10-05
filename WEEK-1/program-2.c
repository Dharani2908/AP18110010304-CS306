#include<stdio.h>
void
main ()
{

  int state = 0, i = 0;
  char c, a[30];
  printf ("Enter the Input string :\n");
  scanf ("%s", a);
  while ((c = a[i++]) != '\0')
    {
      switch (state)
	{
	case 0:
	  if (c == 'a')
	    state = 1;
	  else if (c == 'b')
	    state = 3;
	  else
	    {
	      printf ('Invalid\n');
	      exit (0);
	    }
	  break;
	case 1:
	  if (c == 'a')
	    state = 2;
	  else if (c == 'b')
	    state = 3;
	  else
	    {
	      printf ("Invalid\n");
	      exit (0);
	    }
	  break;
	case 2:
	  if (c == 'a')
	    state = 2;
	  else if (c == 'b')
	    state = 3;
	  else
	    {
	      printf ("Invalid\n");
	      exit (0);
	    }
	  break;
	case 3:
	  if (c == 'a')
	    state = 1;
	  else if (c == 'b')
	    state = 4;
	  else
	    {
	      printf ("Invalid\n");
	      exit (0);
	    }
	  break;
	case 4:
	  if (c == 'a')
	    state = 1;
	  else if (c == 'b')
	    state = 4;
	  else
	    {
	      printf ("Invalid\n");
	      exit (0);
	    }
	  break;
	}
    }
  if (state == 2 || state == 4)
    {
      printf ("\nString is accepted\n");
    }
  else
    {
      printf ("\nString is not accepted\n");
    }
}
