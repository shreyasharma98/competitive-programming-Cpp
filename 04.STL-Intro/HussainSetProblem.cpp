#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
 ll n,m;
 cin>>n>>m;
 priority_queue <ll> pq;
 for(int i = 0;i<n;i++){
    int x;
    cin>>x;
    pq.push(x);
 }
 ll* arr = new ll[m];
 for(int i = 0;i<m;i++)
 {
     cin>>arr[i];
 }
  int ctr = 0;
  int i = 0;
  while(ctr!=arr[m-1])
  {
      int ans = pq.top();
      int x = pq.top()/2;
      pq.pop();
      pq.push(x);

      if(ctr+1 == arr[i])
      {
          cout<<ans<<endl;
          i++;
      }
      ctr++;
  }
return 0;

}
