#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
    cin>>n;
    int *p = new int[n];
    for(int  i = 0;i<n;i++)
    {
        cin>>p[i];
    }
    int i = 0;
    int  j = n-1;
    while(i<j)
    {
        int sum = p[i]+p[j];
        int rem = sum % 10;
        cout<<(sum-rem)/10<<" "<<rem<<endl;
        i++;j--;
    }
    delete []p;
	return 0;
}
