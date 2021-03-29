/* Program to show the working of the increment operator, complete the code wherever needed
	input: Enter num1:20
	Output:
	num2 value is:21
	*/
	
	#include<stdio.h>
	int increment(int var)
	{
	    var=var+1;
	    return var;
	}
	int main()
	{
	 //Declare the variables
	   printf("Enter num1:");
	   scanf("%d",&num1);
	   num2=increment(num1);
	   printf(“num2 value is:",num2);//enter the missing data
	   return 0;
	}
