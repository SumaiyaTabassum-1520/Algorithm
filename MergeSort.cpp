#include<bits/stdc++.h>
using namespace std;

int arr[100105];
int n;

void mergeSort(int arr[],int siz)
{
    if(siz==1)
    {
        return ;
    }
    int leftSize=siz/2;
    int rightSize=siz-leftSize;

    int left[leftSize];
    int right[rightSize];

    for(int i=0 ; i<leftSize ; i++)
    {
        left[i]=arr[i];
    }
    for(int i=leftSize ; i<siz ; i++)
    {
        right[i-leftSize]=arr[i];
    }
    mergeSort(left,leftSize);
    mergeSort(right,rightSize);

    int leftMarker=0;
    int rightMarker=0;

    int ind=0;
    while(leftMarker<leftSize && rightMarker<rightSize)
    {
        if(left[leftMarker]<right[rightMarker])
        {
            arr[ind]=left[leftMarker];
            ind++;
            leftMarker++;
        }
        else
        {
            arr[ind]=right[rightMarker];
            ind++;
            rightMarker++;
        }
    }
    while(leftMarker<leftSize)
    {
        arr[ind]=left[leftMarker];
        ind++;
        leftMarker++;
    }
    while(rightMarker<rightSize)
    {
        arr[ind]=right[rightMarker];
        ind++;
        rightMarker++;
    }
}
int main()
{

    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    mergeSort(arr,n);
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }
return 0;

}
