#include <stdio.h>

int main()
{
    int r,c,row,i;
    printf("Enter the number of rows:");
    scanf("%d",&row);

    for(r=1; r<=row; r++)
    {for(i=1;i<=row-r;i++)
        	{
        		printf(" ");
				}
        for(c=r; c>=1; c--)
        {
        	
			
            printf("%d ",c);
        }
        printf("\n");
    }
    return 0;
}
