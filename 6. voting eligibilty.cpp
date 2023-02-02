#include<stdio.h>
int main()
{
int age ;
printf("Enter your age: ");
scanf("%d",&age);
if (age>=18)
{
printf("you are eligible to vote");
}
if (age<0)
{
	printf("the age is invalid");
}
else
{
printf("you are not eligible to vote\n");
printf("You will be eligible to vote after %d years.\n",18-age);
}
return 0;
}
