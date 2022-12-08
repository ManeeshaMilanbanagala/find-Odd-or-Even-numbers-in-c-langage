#include<stdio.h>
int main()
{
	int x;

	printf("Enter the your Number");
	scanf("d\n",&x);

	if(x%2==0)
	{
		printf("your number is odd\n");
		
	}
	else{
		printf("Your Number is even\n");
	}
	return 0;
	
}