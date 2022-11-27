//coin change problem
#include<bits/stdc++.h>>
using namespace std;

int main()
{
      int n;
    vector<int>arr;

    while(scanf("%d",&n)==1)
    {
        arr.push_back(n);
    }
    sort(arr.begin(),arr.end(),greater<int>());
    for(int i=0 ;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    int taka;
    printf("\ntaka=");
    scanf("%d",&taka);
    for(int i=0 ;i<arr.size();i++)
    {
        if(taka>=arr[i])
        {
            printf("%d=%d\n",arr[i],taka/arr[i]);
            taka=taka%arr[i];
        }
    }
    return 0;
}
//1 5 2 10 50 20 100 500
//500 100 50 20 10 5 2 1
