#include <stdio.h>


int main (void)
{
	int c = 0;
	int nb = 0;
	
	while ((c = getchar()) != EOF)
	{ 
		if (c != ' ')
		{ 
			nb = 0;
			putchar(c);
		}
		else
		{
			if (++nb <= 1)
				putchar(c);
		}
		
	}
	
	return 0;
}



