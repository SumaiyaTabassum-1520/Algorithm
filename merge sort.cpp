#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr,int s,int m,int e)
{
    int i=s;
    int j=m+1;
    vector<int>temp;
    while(i<=m&&j<=e){
        if(arr[i]<arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=m)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=m)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for(i=0 ; i<temp.size() ;i++)
    {
        arr[i+s]=temp[i];
    }

}

void mergeSort(vector<int>&arr,int s, int e)
{
    if(s >= e)
    {
        return;
    }
    int mid;
    mid=(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,mid,e);

}
void generateData(vector<int>&ar, int n){
    time_t t;
    int i;
    ar.clear();
    srand((unsigned) time(&t));

    for(i = 0; i < n; i++){
        ar.push_back(rand()%100);
    }
}

void print(const vector<int>&ar){
    for(int i=0 ; i<ar.size(); i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");
}

int main()
{
    vector<int>arr;
    generateData(arr,100);
    print(arr);
    cout<<"After Merge Sort the array : "<<endl;
    mergeSort(arr,0,arr.size()-1);
    print(arr);

}
