#include<bits/stdc++.h>
using namespace std;
int findMaxProfit(int *arr,int n)
{
    int min = arr[0];
    int max = 0;
    for(int i = 1;i<n;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            //max = arr[i];
        }
        int diff = arr[i] - min;
        if(diff > max)
        {
            max = diff;
        }
    }
    return max;
}
int main() {

    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<findMaxProfit(arr,n);

}

