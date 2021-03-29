/* Program to find the squares of number using functions
	input:20
	output:
	The square of 20 is:400*/
	
	#include<stdio.h>
	//Write the function for calculating square of a given number
	int main()
	{
	    int num;
	    int n;
	    printf("Input any number for square:");
	    scanf("%d",&num);
	    n=square(num);
	    printf("The square of %d is:%d",num,n); 
	    return 0;
	}
