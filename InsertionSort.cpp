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
    for(i=1 ; i<arr.size() ; i++ )
    {
        j=i;
        while(j > 0 && arr[j] > arr[j-1])
        {
            key=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=key;
            j--;
        }
    }
    for(i=0 ; i<arr.size(); i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}








/*key=arr[i];
        j=i-1;
        //key=arr[j];
        while(key<=arr[j])
        {
            if(key <arr[j])
            {
                arr[j+1]=arr[j];
                j--;
            }
            else
            {
                break;
            }
        }
        arr[j+1]=key;

*/
