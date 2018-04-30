#include <stdio.h>
void bubbleSort(int *a,int n);

int main()
{
    int arr[5],i;
    for(i=0;i<5;i++)
        scanf("%d" ,&arr[i]);

    bubbleSort(arr,5);

    for(i=0;i<5;i++)
        printf("%d ",arr[i]);

    return 0;
}

void bubbleSort(int *a,int n)
{
    int j,k,temp;
    for(k=1;k<=n-1;k++)
    {
        for(j=0;j<=n-k-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
