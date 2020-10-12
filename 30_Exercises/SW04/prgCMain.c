#include <stdio.h>
#include <stdlib.h>

typedef enum {
	MAIN_MENU = 1,
	NUMSTAT,
	CUBIC,
	FACTORIAL,
	NCHOOSEK,
	PRINTBINARY,
	EXIT = 99
} MenuItem; 					//Datentyp "MenuItem" kann benutzt werden


// function declarations	
MenuItem PrintMainMenu( void ); 		//Funktion vom Programm MenuItem deklarieren
long int ComputeCubic( long int x );		//Funktion vom Programm Cubic deklarieren
long Factorial( long n );			//Funktion vom Programm Factorial deklarieren
long NchooseK(int n, int k);			//Funktion vom Programm Nchoosek deklarieren	
void PrintBinary( void );			//Funktion vom Programm PrintBinary deklarieren

int main( int argc, char* argv[] )
{

	MenuItem menuSelected = MAIN_MENU;	//Zuweisung von menuSelected
	int run = 1;					
	int n = 0;				// NchooseK Input n
	int k = 0;				// NchooseK Input k
	long int input = 0;			//ComputeCubic & Factorial input
	
	
	while(run)
	{
		switch(menuSelected){		//abfrage von menuSelected
			case MAIN_MENU:
				menuSelected = PrintMainMenu();
				break;
	
			case NUMSTAT:
				menuSelected = MAIN_MENU;
				break;

			case CUBIC:
				printf("Enter a 'long int' number: ");
				scanf("%ld", &input);
				printf("%ld cubed is %ld\n\n", input, ComputeCubic(input));
				menuSelected = MAIN_MENU;
				break;
			
			case FACTORIAL:
				printf("Enter a 'long int' number: ");
				scanf("%ld", &input);
				printf("Factorial of %ld is %ld \n", input, Factorial(input));
				menuSelected = MAIN_MENU;
				break;
			
			case NCHOOSEK:
				printf("Enter two Integer n ank k >= 0, with k <= n:\n");
				scanf("%d %d", &n, &k);
				printf("%d tief %d = %ld\n", n, k, NchooseK(n, k));
				menuSelected = MAIN_MENU;
				break;
				
			case PRINTBINARY:
				PrintBinary();
				menuSelected = MAIN_MENU;
				break;

			case EXIT:	
				run = 0;
				break;

			default:		
				printf("invalid menu selection\n");
				break;
		}
	}

 	return 0;
}


// function implementations:

//Funktion vom Programm MenuItem
MenuItem PrintMainMenu( void )  				
{
	MenuItem selection = MAIN_MENU;
	printf("***********************************\n");
	printf("Main Menu\n");
	printf("***********************************\n\n");
	printf("Select from the following options:\n");
	printf("%d - NumStat\n", NUMSTAT);
	printf("%d - Cubic\n", CUBIC);
	printf("%d - Factorial\n", FACTORIAL);
	printf("%d - NchooseK\n", NCHOOSEK);
	printf("%d - PrintBinary\n", PRINTBINARY);
	printf("%d - Exit\n", EXIT);
	printf("--> ");
	scanf("%d", (int*)&selection);
	return selection;	
}	

//Funktion vom Programm Cubic
long int ComputeCubic( long int x )
{  
	return x*x*x;
}

//Funktion vom Programm Factorial
long Factorial( long n )
{
	long result = 0;
	if ( n>=1)
	{
		result = n*Factorial(n-1);
	}
	else
	{
		result = 1;
	}
	return result;
}

//Funktion vom Programm Nchoosek

long NchooseK(int n, int k)

{
	long result = 0;
	result = Factorial(n)/(Factorial(k)*Factorial(n-k));
	return result;
}	
	
//Funktion vom Programm PrintBinary

void PrintBinary( void )

{
	int a[32];
	int n;
	int i;
	
	printf("Enter a number to print in binary:");
	scanf("%d",&n);
	
	for(i=0; n>0;i++)
	{
	a[i]=n%2;
	n = n/2;
	}
	
	printf("\n Printet in binary is:");
	
	for(i=i-1; i>=0; i--)	
	{
	printf("%d", a[i]);
	}
}
