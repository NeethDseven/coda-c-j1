#include <stdlib.h>
#include <stdio.h>



int add()
{
	char cara;
	int somme = 0;
	int num;
	int resutat;
	do {
		printf("Veuillez bien saisir le nombre\n");
		scanf("%d", &num);
		somme = somme + num;
		printf("La somme est %d, faites '=' pour sortir\n", somme);
		scanf("%c", &cara);
		}
	while (cara != '=');
}

int power()
{
	long int nombre1 = 0, nombre2 = 0;
	long long resultat = 1;
	long int count = 0;
	int puissance=1;
	printf("Choisissez la base\n");
	scanf("%ld", &nombre1);
	printf("Choisissez la puissance.\n");
	scanf("%ld", &nombre2);
	resultat = nombre1;
	while (nombre2 != puissance)
	{
		resultat = resultat * nombre1;
			puissance++;
	}
	printf("%ld ^ %ld = %.2lld", nombre1, nombre2, resultat);
}


int factorielle()
{

    long int n;
    long long resultat = 1;

    printf("Entrez la factorielle de ? :\n");
    scanf("%ld", &n);

    long int fact = n;

    if (n > 0)
    	{
    		while(fact != 1)
   			{
        		resultat = resultat * fact;
        		fact --;
        	}
     printf("le résultat est %lld\n", resultat);
 }
    else
    {
    	printf("Cette factorielle n'existe pas\n");
    }

   

    return (0);


}


int main(int argc, char const *argv[])
{
	int nombre1;
	int nombre2;
	double resultat;
	char operateur;
	printf("Bonjour, choisissez un opérateur parmi: +, -, *, /, %%, ^, !,s pour sinus:\n");
	scanf("%c", &operateur);
	
	if (operateur == '+')
	{
		add();
	}
	else if (operateur == '-')
	{
		printf("Choisissez maintenant un premier nombre\n");
		scanf("%d", &nombre1);
		printf("Choisissez un second nombre.\n");
		scanf("%d", &nombre2);
		printf("Soustraction\n");
		resultat = nombre1 - nombre2;
		printf("%d %c %d = %.2f\n", nombre1, operateur, nombre2, resultat);
	}
	else if (operateur == '*')
	{
		printf("Choisissez maintenant un premier nombre\n");
		scanf("%d", &nombre1);
		printf("Choisissez un second nombre.\n");
		scanf("%d", &nombre2);
		printf("Multiplication\n");
		resultat = nombre1 * nombre2;
		printf("%d %c %d = %.2f\n", nombre1, operateur, nombre2, resultat);
	}
	else if (operateur == '/')
	{
		printf("Choisissez maintenant un premier nombre\n");
		scanf("%d", &nombre1);
		printf("Choisissez un second nombre.\n");
		scanf("%d", &nombre2);
		printf("Division\n");
		if (nombre2 != 0)
		{
			resultat = (float)nombre1 / nombre2;
			printf("%d %c %d = %.2f\n", nombre1, operateur, nombre2, resultat);
		}
		else
		{
			printf("On ne peut pas diviser par 0.\n");
		}
		
	}
	else if (operateur == '%')
	{
		printf("Choisissez maintenant un premier nombre\n");
		scanf("%d", &nombre1);
		printf("Choisissez un second nombre.\n");
		scanf("%d", &nombre2);
		printf("Modulo\n");
		if (nombre2 != 0)
		{
			resultat = nombre1 % nombre2;
			printf("%d %c %d = %.2f\n", nombre1, operateur, nombre2, resultat);
		}
		else
		{
			printf("On ne peut pas diviser par 0.\n");
		}
	}
	else if (operateur == '^')
	{
		power();
	}
	else if (operateur == '!')
	{
		factorielle();

	}
	
	else
	{
		printf("L'operateur n'est pas reconnu.\n");
	}


	return 0;
		}