//Selection Sort
#include<bits/stdc++.h>
using namespace std;

void selectionSort(int n, vector<int> & arr)
{
    int temp;
    for(int i=0 ; i<arr.size() ; i++)
    {
        int mark=i;
        for(int j=i+1 ; j<arr.size() ; j++)
        {
            if(arr[j]<arr[mark])
            {
                mark=j;
            }
        }
        if(mark!=i)
        {
            temp=arr[i];
            arr[i]=arr[mark];
            arr[mark]=temp;
        }
    }
}

int main()
{
    int n;
    vector<int>arr;

    while(scanf("%d",&n)==1)
    {
        arr.push_back(n);
    }

    selectionSort(n,arr);
    for(int i=0 ; i<arr.size() ; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

