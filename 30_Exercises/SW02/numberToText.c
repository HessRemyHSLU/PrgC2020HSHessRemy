#include <stdio.h>

int main( int argc, char* argv[] ) 

{
	int readValue = 0;
	printf("Enter a number between (including) 0 and 9 to display the number as text. Enter 10 to stop the program: ");
	scanf ("%d", & readValue);

if (readValue == 10) 	
		{
		printf("Thank you. Good bye");
		return 0;
		}
	
else { 
		while (readValue !=10)
		{
		if (readValue > 10) 
		{printf("invalid->try again");
		scanf ("%d", & readValue);}
		else if (readValue < 0)
		{printf("infalid->try again");
		scanf ("%d", & readValue);}
		else {
			switch(readValue){
			case 0:
				printf("0 as text is 'zero'");
				break;
			case 1:
				printf("1 as text is 'one'");
				break;
			case 2:
				printf("2 as text is 'two'");
				break;	
			case 3:
				printf("3 as text is 'three'");
				break;
			case 4:
				printf("4 as text is 'four'");
				break;
			case 5:
				printf("5 as text is 'five'");
				break;
			case 6:
				printf("6 as text is 'six'");
				break;
			case 7:
				printf("7 as text is 'seven'");
				break;
			case 8:
				printf("8 as text is 'eight'");
				break;
			case 9:
				printf("9 as text is 'nine'");
				break;
		}
		printf("Enter a number between (including) 0 and 9 to display the number as text. Enter 10 to stop the program: ");
		scanf ("%d", & readValue);
		}
		}
	printf("Thank you. Good bye");
	}
return 0;
}
