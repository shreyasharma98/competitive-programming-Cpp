#include<bits/stdc++.h>
using namespace std;
int firstIndex(int input[], int size, int x) {
 if(size==0)
 {
     return -1;
 }
if(input[0] == x)
{
    return 0;
}
    int idx= firstIndex(input+1,size-1,x);
    if(idx!=-1)
    {
        return idx+1;
    }
    return idx;

}
int main(){
    int n;
    cin >> n;

    int *input = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int x;

    cin >> x;

    cout << firstIndex(input, n, x) << endl;

}



