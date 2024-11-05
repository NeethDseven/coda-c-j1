#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main()
{
	srand(time(NULL));
	int nombre = rand() % 100 + 1;
	int n = 0;

	while(n != nombre)
	{
		printf("Choisissez un nombre entre 1 et 100 : \n");
		scanf("%d", &n);

		if(nombre < n)
		{
			printf("C'est moins!\n");
		}
		else if(nombre > n)
		{
			printf("C'est plus!\n");
		}
		else
		{
			printf("Gagné, c'était bien %d\n", n);
		}
	}

	return(0);
}