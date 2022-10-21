#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,key,temp;
    vector<int>arr;
    while(scanf("%d",&temp)==1)
    {
        arr.push_back(temp);
    }
    bool swapped=true;

    while(swapped)
    {
        swapped=false;
        for(i=0 ; i<arr.size()-1 ; i++ )
        {

            if(arr[i]>arr[i+1])
            {
                key=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=key;
                swapped=true;
            }
        }
    }
    for(i=0 ; i<arr.size(); i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}







