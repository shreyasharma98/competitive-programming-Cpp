#include<iostream>
using namespace std;
typedef long long ll;

int* mindbendingProductArray(int *arr,int n)
{
    int *p = new int[n];
    for(int i = 0;i<n;i++)
    {
        p[i] = 1;
        if(i!=0)
        {
            p[i] = p[i-1]*arr[i-1];
        }
    }

    for(int i = n-2;i>=0;i++)
    {
        p[i] *= p[]
    }



    return p;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n];
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        int *out = mindbendingProductArray(arr,n);
        for(int i = 0;i<n;i++)
        {
            cout<<out[i]<<" ";
        }
        cout<<endl;
        delete[] out;
        delete[] arr;

    }
    return 0;
}

