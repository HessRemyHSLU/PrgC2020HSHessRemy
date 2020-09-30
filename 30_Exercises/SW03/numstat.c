#include <stdio.h>
#include <stdlib.h>

int main( int argc, char* argv[] ) 
{

	float value1 = 0, value2 = 0, minValue = 0, maxValue = 0;
	// make sure, we have exactely 2 arguments
		
	if( argc !=3)
	{
	// usage message
	printf("usage: logicOperators val1 val2 \n");
	}
			
	else
	{
		value1 = atof(argv[1]);
		value2 = atof(argv[2]);
		
		minValue = value1;
		maxValue = value2;
		
		if( minValue > value2 )
		minValue = value2, maxValue = value1;
	
		printf("Value1 %.3f, Value2 %0.3f\n", minValue, maxValue);
		printf("the sum of the values is: %.3f\n", maxValue + minValue);
		printf("the absolute differens of the values is: %0.3f\n", maxValue - minValue);
		printf("the product of the values is: %0.3f\n", value1 * value2);
		printf("the Ratio of the values is: %0.3f\n", value2 / value1);
	}

	return 0;
}
