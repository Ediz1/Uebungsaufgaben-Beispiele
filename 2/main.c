#include <stdio.h>
#include <stdlib.h>

/*Kleiner Rechner per Kommandozeilenargumente*/

main(int argc, char*argv[])
{
	double a, b;
	printf("gefundene Elemente: %d\n\n", argc);
	
	if (argc != 4)
	{
		printf("Fehler. %s erwartet:\n operator+operand1+operand2 \n");
	}

	a = atof(argv[2]);
	b = atof(argv[3]);

	switch (*argv[1])
	{
	case '+': printf("%f\n", a + b);
		break;
	case '-': printf("%f\n", a - b);
		break;
	case '*': printf("%f\n", a * b);
		break;
	case '/': if (b == 0.0)
		printf("Division durch NUll!\n");
			  else
				  printf("%f\n", a / b);
		break;

	default: printf("Ungueltiger Operator\n");

	}
}







