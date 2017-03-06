#include<stdio.h>
int pallindrome(int num)
{
	int reversenum=0;
	while(num>0)
 	{
 		reversenum=(reversenum*10)+(num%10);
 		num=num/10;
 	}
	return reversenum;
}
int main()
{
	int givennum,reversenum;
	printf("enter the number:");
	scanf("%d",&givennum);
	reversenum=pallindrome(givennum);
	if(givennum==reversenum)
	{
		printf("%d is a pallindrome",givennum);
	}
	else
	{
		printf("%d is not a pallindrome",givennum);
	}
	return 0;
}
