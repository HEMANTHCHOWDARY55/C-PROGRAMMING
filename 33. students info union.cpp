#include<stdio.h>

#include<conio.h>
typedef union Student
{

  int Roll_No;

  char Name[15];

  int Sub[3];

  int Total;
};
void main()
{

     Student s[100];

     int i,j,n,st[10],gt=0;

     printf("\nHow Many Students Details Are You Enter :- ");

     scanf("%d",&n);

     for(i=0;i<n;i++)

     {

          clrscr();

          printf("\nEnter %d Student Roll No. :- ",i+1);

          scanf("%d",&s[i].Roll_No);

          printf("Enter %d Student Name :- ",i+1);

          scanf("%s",s[i].Name);

          for(j=0;j<3;j++)

          {

          printf("\tEnter Subject %d Mark :- ",j+1);

          scanf("%d",&s[i].Sub[j]);

          }

     }

     for(i=0;i<n;i++)

     {

          s[i].Total = 0;

          for(j=0;j<3;j++)

          {

          s[i].Total = s[i].Total + s[i].Sub[j];

          }

     }

     for(j=0;j<3;j++)

     {

          st[j] = 0;

          for(i=0;i<n;i++)

          {

          st[j] = st[j] + s[i].Sub[j];

          }

          gt = gt + st[j];

     }

     clrscr();

     printf("\n\t\t|---------------------------|");

     printf("\n\t\t|   Your Inserted Data :-   |");

     printf("\n\t\t|---------------------------|\n");

     printf("\n|Roll No|  Name \t|  Sub1\t|  Sub2\t|  Sub3\t| Total |");

     printf("\n|=======================================================|\n");

     for(i=0;i<n;i++)

     {

          printf("\n|-------------------------------------------------------|");

          printf("\n|  %d\t|  %s \t",s[i].Roll_No,s[i].Name);

          for(j=0;j<3;j++)

          {

               printf("|  %d\t",s[i].Sub[j]);

          }

          printf("|  %d   |",s[i].Total);

     }

     printf("\n|-------------------------------------------------------|");

     printf("\n\n|=======================================================|");

     printf("\n   Subject Total\t");

     for(j=0;j<3;j++)

     {

          printf("| %d\t",st[j]);

     }

     printf("| %d\t|",gt);

     getch();

}
