#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    multimap<int, string, greater<int>> rank;
    string name;
    int m1, m2, m3;
    for(int i=0; i<n; i++){
        cin>>name>>m1>>m2>>m3;
        int total= m1+m2+m3;
        rank.insert(make_pair(total, name));
    }
    int pos=1;
	multimap<int, string>:: iterator it;
    for(it= rank.begin(); it!= rank.end(); it++){
        cout<<pos<<" "<<it->second<<endl;
        pos++;
    }
	return 0;
}
