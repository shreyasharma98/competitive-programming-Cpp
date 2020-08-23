
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 cin>>n;
 unordered_map<char,int> charMap;
 for(int i = 0;i<n;i++)
 {
     char ch;
     cin>>ch;
     charMap[ch]++;
 }
 cout<<charMap['a']<<" "<<charMap['s']<<" "<<charMap['p'];
return 0;

}
