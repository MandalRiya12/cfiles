//NAME      : RIYA MANDAL
//ID        : 20201CSE0224
//qwerty
#include<stdio.h>
void main()
{
    int arr[100][100],m,n,org[100][100],p,q,i,j,finale[100][100];
    printf("ENTER THE NUMBER OF ROWS : ");
    scanf("%d",&p);
    printf("ENTER THE NUMBER OF COLUMNS : ");
    scanf("%d",&q);
    printf("ENTER THE ORIGINAL ELEMENTS : ");
    for (i=0;i<p;i++)
    {
        for(j=0;j<p;j++)
        {
            scanf("%d",&org[i][j]);
        }
    }
    printf("ORIGINAL PATTERN IS AS BELOW : \n");
    for (i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",org[i][j]);
        }
    printf("\n");

    }

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
    if(p==m && q==n)
    {
        printf("ADDITION IS POSSIBLE : \n");
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                finale[i][j]=(arr[i][j]+org[i][j]);

            }
        }
        printf("RESULT: \n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf(" %d ",finale[i][j]);

            }
            printf("\n");
        }



    }
    else
    {
        printf("ADDITION IS NOT POSSIBLE");
    }




}
