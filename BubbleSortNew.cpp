#include<bits/stdc++.h>
using namespace std;

void BubbleSort(vector <int> & arr, bool(*comp)(int,int))
{
    int i,j,key;
    bool swapped = true;
    while(swapped)
    {
        swapped=false;
        for(i=0 ; i<arr.size()-1 ; i++ )
        {

            if((comp)(arr[i],arr[i+1]))
        {
                key=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=key;
                swapped=true;
            }
        }
    }

}
bool isMin(int a,int b)
{
    return a<b;
}
bool isMax(int a,int b)
{
    return a>b;
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

void sortGeneral(vector<int>&ar)
{
    clock_t start,end;
    int i, ans;
    start = clock();
    BubbleSort(ar,&isMax);
    end = clock();

    double time_taken = ((double)(end-start))/CLOCKS_PER_SEC;

    printf("\n\nGeneral Sort took %f seconds to execute \n", time_taken);
}

void sortBest(vector<int>&ar)
{
    clock_t start,end;
    int i, ans;
    start = clock();
    BubbleSort(ar,&isMax);
    end = clock();

    double time_taken = ((double)(end-start))/CLOCKS_PER_SEC;

    printf("\n\nBubble Sort on Sorted Data took %f seconds to execute \n", time_taken);
}


void sortWorst(vector<int>&ar)
{
    clock_t start,end;
    int i, ans;
    start = clock();
    BubbleSort(ar,&isMin);
    end = clock();

    double time_taken = ((double)(end-start))/CLOCKS_PER_SEC;

    printf("\n\nBubble Sort on Reversed Sorted Data took %f seconds to execute \n", time_taken);
}



int main()
{
    vector<int>arr;
    int i,j,n,a,b,temp,pos;
    while(printf("Enter Number of Data:") && scanf("%d",&n)==1)
    {
        generateData(arr,n);
         //print(arr);
        //print(arr);
        //selectionSort(arr,&isMax);
        sortGeneral(arr);
        // print(arr);
        sortBest(arr);
         //print(arr);
        sortWorst(arr);
        // print(arr);
        //print(arr);

    }


    return 0;
}
