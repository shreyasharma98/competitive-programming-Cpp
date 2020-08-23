
#include<bits/stdc++.h>
using namespace std;
int MaxChair(int arr[],int dep[],int n)
{
    sort(arr,arr+n);
    sort(dep,dep+n);
    int ans = 1,chair=1;
    int i=1,j=0;
    while(i<n && j<n)
    {
        if(arr[i]<=dep[j])
        {
            chair++;
            i++;
            if(chair>ans)
            {
                ans= chair;
            }
        }
        else
        {
            chair--;
            j++;
        }
    }

    return ans;

}
int main() {

	int n;
    cin>>n;
    int arrival[n];
    int exit[n];

    for(int i = 0;i<n;i++)
    {cin>>arrival[i];}
    for(int i = 0;i<n;i++)
    {cin>>exit[i];}

    cout<<MaxChair(arrival,exit,n)<<endl;


}
