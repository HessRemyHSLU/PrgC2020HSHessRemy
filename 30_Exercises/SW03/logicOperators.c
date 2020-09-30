#include <stdio.h>
#include <stdlib.h>

int main( int argc, char* argv[] ) 
{
	int value1 = 0, value2 = 0, value3 = 0, minValue = 0, maxValue = 0;
	// make sure, we have exactely 3 arguments
		
	if( argc !=4)
	{
	// usage message
	printf("usage: logicOperators val1 val2 val3\n");
	}
			
	else
	{
		value1 = atoi(argv[1]);
		value2 = atoi(argv[2]);
		value3 = atoi(argv[3]);
			
		printf("Value1 %d, Value2 %d, Value3 %d\n", value1, value2, value3);
		
		if (value1 < 0 ||value2 < 0 || value3 < 0)
		{
			printf("The entered values are not all positive. Exiting.\n");
		}
		
		else
		{
			minValue = value1;
			if( minValue > value2 )
			minValue = value2;
			
			if( minValue > value3 )
			minValue = value3;
			
			printf("the smallest of the entered values is: %d\n", minValue);
			
			maxValue = value1;
			if( maxValue < value2 )
			maxValue = value2;
			
			if( maxValue < value3 )
			maxValue = value3;
			
			printf("the largest of the entered values is: %d\n", maxValue);
			printf("the sum of all values is: %d\n", value1 + value2 + value3);
			printf("the average of all values is: %f\n", (value1 + value2 + value3)/3.0);
			//average = durchschnitt
		}
	}
	return 0;
}
