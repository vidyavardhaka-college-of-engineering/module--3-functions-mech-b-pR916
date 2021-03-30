/* Program to perform subtraction using function
	input: 10 7
	output: 3*/
	#include<stdio.h>
	int sub (int a,int b)
	//write the function prototype
	{
	     int c=a-b;
	     return c;
	}
	int main()
	{
	    int var1,var2,var3;
	    printf("enter two numbers");
	scanf("%d%d",&var1,&var2);
	    var3=sub(var1,var2);
	    printf("%d",var3);
	    //complete the missing data
	    return 0;
	}
