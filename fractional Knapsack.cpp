#include<bits/stdc++.h>
using namespace std;

struct fractionalKnapsack
{
    int itemsWeight;
    int itemBenefit;

    fractionalKnapsack(int Weight,int Benefit)
    {
        itemsWeight=Weight;
        itemBenefit=Benefit;
    }
    float getUnitPrice(){
        return (float)itemBenefit/(float)itemsWeight;
    }
};

bool comp(fractionalKnapsack a, fractionalKnapsack b)
{
    return a.getUnitPrice() > b.getUnitPrice();
}

int main()
{
   //vector<fractionalKnapsack> arr = vector<fractionalKnapsack();

    int n,remainingKnapsackSize,knapsackPrice,unitPrice=0;
    vector<fractionalKnapsack>arr = vector<fractionalKnapsack> ({fractionalKnapsack(10,40),fractionalKnapsack(5,30),fractionalKnapsack(22,77),fractionalKnapsack(25,90),fractionalKnapsack(15,50)});
    for(int i=0 ; i<arr.size();i++)
    {

        cout<<arr[i].itemsWeight<<" ";
        cout<<arr[i].itemBenefit<<" ";
        cout<<arr[i].getUnitPrice()<<endl;
    }
    cout<<"\nbefore sorting\n";
    sort(arr.begin(),arr.end(),comp);
     for(int i=0 ; i<arr.size();i++)
    {
        cout<<arr[i].itemsWeight<<" ";
        cout<<arr[i].itemBenefit<<" ";
        cout<<arr[i].getUnitPrice()<<endl;
    }

    scanf("%d",&remainingKnapsackSize);
    knapsackPrice=0;
    for(int i=0 ; i<arr.size()&&remainingKnapsackSize; i++)
    {
        if(arr[i].itemsWeight<=remainingKnapsackSize)
        {
            cout<<"picking item: "<<arr[i].itemsWeight<<" benefit: "<<arr[i].itemBenefit<<endl;
            remainingKnapsackSize -= arr[i].itemsWeight;
            knapsackPrice += arr[i].itemBenefit;
        }
        else
        {

            cout<<"picking item: "<<remainingKnapsackSize<<" benefit: "<<remainingKnapsackSize*arr[i].getUnitPrice()<<endl;
            knapsackPrice += remainingKnapsackSize*arr[i].getUnitPrice();
            remainingKnapsackSize=0;
        }
    }

    cout<<"Maximum Benefit we can get: "<<knapsackPrice<<endl;
    return 0;
}
