#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n1,n2,result;
	char operation;
	
	printf("Enter first number: ");
	scanf("%d",&n1);
	printf("Enter second number: ");
	scanf("%d",&n2);
	
	printf("Enter the operation (+,-,*,/) what you want: ");
	scanf(" %c",&operation);
	
	switch(operation)
	{
		case '+':
			result=n1+n2;
			printf("Result: %d",result);
			break;
		case'-':
			result=n1-n2;
			printf("Result: %d",result);
			break;
		case '*':
			result=n1*n2;
			printf("Result: %d",result);
			break;
		case '/':
			result=n1/n2;
			printf("Result: %d",result);
			break;
		default: printf("ERROR!#!#");
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
