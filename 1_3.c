#include<stdio.h>
int main()
{
    int a[20];
    int n,count=0,temp=0;
    int i;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter %d value",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                temp=a[i];
                a[i]=a[n-1];
                a[n-1]=temp;
                n--;
            }
        }
    }
    printf("the array: \n",i);
    for(i=0;i<n;i++)
    {
        printf("%2d",a[i]);
    }
    return 0;
}