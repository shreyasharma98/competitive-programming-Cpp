#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int even = 0,odd = 0;
    for(int i = 0;i<n;i++)
    {
       if(arr[i]%2 == 0 && i%2 == 0)
       {
           even+=arr[i];
       }
        if(arr[i]%2 == 1 && i%2 == 1)
        {
            odd+=arr[i];
        }
    }
    cout<<even<<" "<<odd;
	return 0;
}

