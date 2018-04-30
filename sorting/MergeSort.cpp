#include <stdio.h>
void _merge(int a[],int left,int mid,int right){
    int i = left;
    int j = mid + 1;
    int t = left; // index temp
    int temp[right];

    while(i <= mid && j <= right)
        temp[t++] = (a[i] < a[j] ? a[i++] : a[j++]) ;
    while(i <= mid)
        temp[t++] = a[i++];
    while(j <= right)
        temp[t++] = a[j++];

    for(i=left; i<=right; ++i)
        a[i] = temp[i];
    
    return;
}
void mergeSort(int a[],int left,int right){
    if(left >= right)return;
    int mid = (left+right)/2;
    mergeSort(a,left,mid);
    mergeSort(a,mid+1,right);
    _merge(a,left,mid,right);
}
int main(){
    int n;
    scanf("%d",&n);
    int *a = new int[n];
    int i;

    //Input
    for(i=0; i<n; ++i){
        scanf("%d",&a[i]);
    }

    //Sort
    mergeSort(a,0,n-1);

    //Output
    for(i=0; i<n; ++i){
        printf("%d\n",a[i]);
    }
}
