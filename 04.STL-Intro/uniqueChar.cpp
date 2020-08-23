
#include<bits/stdc++.h>
using namespace std;

char* uniqueChar(char *str){
   int x = 0;
   char *ans = new char[1000];
   unordered_map<char,bool> charMap;
   int len = strlen(str);
   for(int i = 0;i<len;i++)
   {
       if(charMap.count(str[i]) == 0)
       {
           charMap[str[i]] = true;
           ans[x++] = str[i];
       }
   }
   ans[x] = '\0';
   return ans;
}
int main() {

	char input[1000000];
	cin >> input;
	cout << uniqueChar(input) << endl;
}
