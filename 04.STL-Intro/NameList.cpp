
#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string,int> nameMap;
     string s;
     getline(cin,s);
     int start = 0;
     for(int i = 0;i<=s.size();i++)
     {
         if(s[i] == ' ' || s[i] == '\0')
         {
             int end = i;
             string name = s.substr(start,end-start);
             nameMap[name]++;
             start = i+1;
         }

     }

    unordered_map<string,int>::iterator it;
    bool flag = false;
     for(it = nameMap.begin();it!=nameMap.end();it++)
     {
         if(it->second >= 2)
            {
                flag = true;
                cout<<it->first<<" "<<it->second<<endl;
            }
     }
     if(!flag)
     {
         cout<<-1;
     }

}

node *merge2LLs(node *head1, node *head2) {
    node *newHead = NULL;
     node *newTail = NULL;
   //  node *h1 = head1,*h2 = head2; // to store the values of orignal head1 and head2
     if(head1->data < head2->data)
    {
        newHead = head1;
        newTail = head1;
        head1=head1->next;
    }
    else
    {
        newHead = head2;
        newTail = head2;
        head2 = head2->next;
    }

    while(head1 != NULL && head2 != NULL) {
         if(head1->data<head2->data) {
           newTail->next = head1;
           newTail = head1;
           head1 = head1->next;
         }
         else {
           newTail->next = head2;
           newTail = head2;
           head2 = head2->next;
         }
     }
     if(head1 == NULL) {
         newTail->next = head2;
     }
     else
        newTail->next = head1;

     return newHead;
 }

