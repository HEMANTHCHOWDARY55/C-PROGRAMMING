#include <stdio.h>

int main()
{
	int a=1,n,f=1;
	printf("Enter the range to print the factorial:");
	scanf("%d",&n);
	while(a<=n){
		f=f*a;
		a++;
	}
	printf("%d",f);
}
