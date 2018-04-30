#include <stdio.h>
int partition(int a[],int left,int right)
{
    int i = left-1;
    int j = right+1;
    int p = a[left];
    int temp;
    while(i < j)
    {
        while(a[--j] > p);
        while(a[++i] < p);
        if(i < j)
        { // Swap
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    return j;
}
void qs(int a[],int left,int right)
{
    if(left >= right)return;
    int j = partition(a,left,right);
    qs(a,left,j);
    qs(a,j+1,right);
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n != 0)
    {
        int a[n];
        //Input
        for (int i=0; i<n; ++i)
            scanf("%d",&a[i]);

        //Sort
        qs(a,0,n-1);

        //Output
        for (int i=0; i<n; ++i)
            printf("%d\n",a[i]);
    }
}
