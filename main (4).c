
#include <stdio.h>
int main()
{
    int i,j,n,var,a[100],temp,left,right,mid;
    printf("Enter the array limit: ");
    scanf("%d", &n);
    printf("Enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    do
    {
    printf("\n\nEnter the value to be searched: \n(Enter '0' to exit)\nvalue=");
    scanf("%d",&var);
    left=0;
    right=n-1;
    
    while(left<=right)
    {
        mid=(left+right)/2;
        if(a[mid]<var)
        {
            left=mid+1;
            
        }
        else if(a[mid]>var)
        {
            right=mid-1;
        }
        else
        {
           printf("the element is in the %dth position",mid+1);
           break;
           
        }
       if(left>right)
       printf("Element not found!!\n");
    }
    }while(var!=0);
}


