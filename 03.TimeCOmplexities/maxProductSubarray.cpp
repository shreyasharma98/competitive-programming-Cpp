#include<iostream>
using namespace std;
int maxProductSubarray(int *arr,int n)
{
    int max_product = 1,min_product = 1,curr_max=0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i] == 0)
        {
            min_product = 0;
            max_product = 1;
        }
        else if(arr[i] < 0)
        {
            int temp = max_product;
            max_product = max(1,min_product*arr[i]);
            min_product = temp * arr[i];
        }
        else
        {
            max_product *= arr[i];
            min_product = min(1,min_product*arr[i]);
        }

        curr_max = max(curr_max,max_product);
    }


    return curr_max;
}
int main()
{
    int n;
    cin>>n;
    int *p = new int[n];
    for(int i = 0;i<n;i++)
    {
        cin>>p[i];
    }
    cout<<maxProductSubarray(p,n);
    return 0;
}
