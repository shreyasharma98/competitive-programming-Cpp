#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
 int a,b,c;
 cin>>a>>b>>c;
 int n = a+b+c;
unordered_map<int,int> votersMap;
 for(int i = 0;i<n;i++)
 {
     int x;
     cin>>x;
     votersMap[x]++;
 }
 vector<int> v;
 unordered_map<int,int>::iterator it;
 for(it = votersMap.begin();it!=votersMap.end();it++)
 {
     if(it->second >= 2)
        v.push_back(it->first);
 }
 sort(v.begin(),v.end());

 cout<<v.size()<<endl;
 for(int i = 0;i<v.size();i++)
 {
     cout<<v[i]<<endl;
 }
return 0;

}
