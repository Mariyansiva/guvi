
#include <stdio.h>
#include<conio.h>
void main()
{
  int a[5] = { 55, 22, 66, 88, 5 };
  int i, j,temp;
  for (i = 0; i < 5; i++)
    {
      for (j = 0; i < 5; j++)
	{
	  if (a[i] < a[j])
	    {
	      temp = a[i];
	      a[i] = a[j];
	      a[j] = temp;

	    }

	}

    }
  for (i = 0; i < 5; i++)
    {
     
	  printf ("\n %d", a[i]);
            
    }
getch();
}
