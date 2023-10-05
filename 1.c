#include<stdio.h>
int main()
{
	float num1,num2;
	int ch;
	
	printf("\t\t\t\t-------------Simple Calculator-------------");
	

	
	printf("\n\n\tPress 1 for Addition \n\n\tPress 2 for Substraction \n\n\tPress 3 for Multiplication \n\n\tPress 4 for Division");
	printf("\n\n\tEnter your Input : ");
	scanf(" %d", &ch);
	
	if (ch == 4 || ch == 3 || ch == 2 || ch == 1)
	{
		
		switch(ch)
	{
		case 1:
		{
			
			printf("\n\n\tAddition of %f + %f =  %.2f ",num1, num2, (num1+num2) );
			break;
		}
		
		case 2:
		{
			printf("\n\n\tSubstraction of %f - %f =  %.2f",num1, num2, (num1-num2) );
			break;
		}
		
		case 3:
		{
			printf("\n\n\tMultiplication of %f * %f =  %.2f",num1, num2, (num1 * num2) );
			break;
		}  
		
		case 4:
		{
			printf("\n\n\tDivision of %f / %f =  %.2f",num1, num2, (num1 / num2) );
			break;
		}  
		
		case 5:
			{
	printf("\n\n\tEnter a Number : 1 = ");
	scanf("%f", &num1);
	
	printf("\n\n\tEnter a Number : 2 = ");
	scanf("%f", &num2);
	continue;
			}
		
		default :
			{
				printf("\n\n\tYour input is not valid, please check your selected choice....");
			}
	}
	}
	else
	{
		printf("\n\n\tPlease enter valid Input, There are maximum 4 Inputs are available....");
		}
	
	
}

