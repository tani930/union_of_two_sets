#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],b[10],c[20];
    int n,m,i,j,flag=0;
    printf("Enter size of set A: ");
    scanf("%d",&n);
    printf("Enter set A \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter size of set B: ");
    scanf("%d",&m);
    printf("Enter set B \n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(i=0,j=n;i<m,j<n+m;i++,j++)
    {
        c[j]=a[i];
    }
    printf("Union of set A and B is : ");
    for(i=0;i<n+m;i++)
    {
        flag=0;
        for(j=0;j<i;j++)
        {
            if(c[j]==c[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",c[i]);
        }
    }
    getch();

}
