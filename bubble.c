#include<stdio.h>
void bubble(int*,int);
int main()
{
    int n,arr[30],i;
    printf("please enter the number\n");
    scanf("%d",&n);
    printf("please enter the numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble(arr,n);
        printf("arranged numbers are:\t");
    for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    return 0;
}
void bubble(int arr[],int x)
{
    int i,temp,rou;
    for(rou=0;rou<x-1;rou++)
    {
        for(i=0;i<x-1-rou;i++)
        {
            if(arr[i]>arr[i+1])
            {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            }
        }
    }

}
