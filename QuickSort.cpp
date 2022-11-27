#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int Partition(vector<int>&arr,int s,int e)
{
    int pivot=arr[s];
    int i=s+1;
    int j=e;

    while(true)
    {
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(&arr[i],&arr[j]);
        }
        else
        {
            swap(&arr[j],&arr[s]);
            return j;

        }

    }


}
void quickSort(vector<int>&ara,int s,int e)
{
    if(s<e)
    {
        int p=Partition(ara,s,e);
        quickSort(ara,s,p-1);
        quickSort(ara,p+1,e);
    }
}
void generateData(vector<int>&ar, int n)
{
    time_t t;
    int i;
    ar.clear();
    srand((unsigned) time(&t));

    for(i = 0; i < n; i++)
    {
        ar.push_back(rand()%100);
    }
}
void print(const vector<int>&ar)
{
    for(int i=0 ; i<ar.size(); i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");
}
int main()
{

    vector<int>arr;
    generateData(arr,25);
    print(arr);
    cout<<"After Quick Sort the array : "<<endl;
    quickSort(arr,0,arr.size()-1);
    print(arr);
}
