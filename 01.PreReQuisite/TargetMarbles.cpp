#include<bits/stdc++.h>
using namespace std;
int main() {
 int n,k;
 cin>>n>>k;
 int *arr = new int[n];
 for(int i = 0;i<n;i++)
 {
     cin>>arr[i];
 }
  unordered_map<int,int> myMap;
  int sum = 0;int idx1=0,idx2=0;
  bool ans = false;
  for(int i = 0;i<n;i++)
  {
      sum+=arr[i];
      if(sum > k)
      {
          sum = arr[i];
          idx1 = i;
      }
      myMap[arr[i]] = sum;
      if(myMap[arr[i]] == k)
      {
          ans = true;
          idx2 = i;
          break;
      }
  }
  if(ans)
  {
      cout<<"true"<<endl;
      for(int i=idx1;i<=idx2;i++)
      {
          cout<<arr[i]<<" ";
      }
  }
  else
    cout<<"false"<<endl;
 return 0;
}
