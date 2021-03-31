/*Program to check whether the entered number is odd using function
	input:5
	output:The entered number is odd
	*/
	#include<stdio.h>
	 //if the least significant bit is 1 the number is odd and 0 the number is even 
	int checkOdd(int n1)
	{   
	    return (n1 & 1);//The & operator does a bitwise and,
	}
	int main()
	{
	    int n1;
		printf("Input:");
	    scanf("%d",&n1);
	    // If checkOddEven() function returns 1 then the number is odd 
	    if(checkOdd(n1))
	    {
	        printf("the entered number is odd");
	        //enter the printf statement
	    }
	    else{
	      printf("dont copy this");
	    }
	    return 0;
	}
