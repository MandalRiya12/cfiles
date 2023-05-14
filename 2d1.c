//NAME      : RIYA MANDAL
//ID        : 20201CSE0224
#include<stdio.h>
void main()
{
    int arr[100][100],i,j,m,n,sum;
    printf("ENTER THE NUMBER OF ROWS : ");
    scanf("%d",&m);
    printf("ENTER THE NUMBER OF COLUMNS : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : ");
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("PATTERN IS AS BELOW : \n");
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
    printf("\n");

    }
    for (i=0;i<m;i++)
    {   sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+arr[i][j];

        }
    printf("SUM of row %d : %d \n",i+1,sum);


    }

}
