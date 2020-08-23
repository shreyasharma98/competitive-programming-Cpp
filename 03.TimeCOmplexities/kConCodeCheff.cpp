#include<iostream>
using namespace std;
typedef long long ll;
ll kadnaesAlgo(int *p,int n)
{
    ll currSum = 0;
    ll maxSoFar = INT_MIN;
    for(int i = 0;i<n;i++)
    {
        currSum+=p[i];
        if(currSum > maxSoFar)
        {
            maxSoFar = currSum;
        }
        if(currSum < 0)
        {
            currSum = 0;
        }
    }

    return maxSoFar;
}
int kCON(int *arr,int n,int x)
{
    ll kadnesSum = kadnaesAlgo(arr,n);

    if(x == 1)
    {
        return kadnesSum;
    }

    ll curr_prefix_sum = 0,max_prefix_sum = INT_MIN;
    ll curr_sufix_sum = 0,max_sufix_sum = INT_MIN;

    for(int i = 0;i<n;i++)
    {
        curr_prefix_sum+=arr[i];
        max_prefix_sum = max(curr_prefix_sum,max_prefix_sum);
    }
    ll totalAns = curr_prefix_sum;
    for(int i = n-1;i>=0;i--)
    {
        curr_sufix_sum+=arr[i];
        max_sufix_sum = max(curr_sufix_sum,max_sufix_sum);
    }
    ll ans;
    if(totalAns<0)
    {
        ans = max(max_sufix_sum+max_prefix_sum,kadnesSum);
    }
    else
    {
        ans = max(max_prefix_sum+max_sufix_sum+(totalAns*(x-2)),kadnesSum);
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int *arr = new int[n];
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<kCON(arr,n,x)<<endl;
        delete[] arr;

    }
    return 0;
}
