#include<bits/stdc++.h>
using namespace std;
struct Interval
{
    int st;
    int et;
};
bool compare(Interval i1,Interval i2)
{
    return i1.st <i2.st;
}
int main()
{
//    int arr[] = {2,7,1,3,6,5,4};
//    sort(arr,arr+7,greater<int>());
//    for(int i = 0;i<7;i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    int arrr[] = {2,7,1,3,6,5,4};
//    sort(arrr+2,arrr+7);
//    for(int i = 0;i<7;i++){
//        cout<<arrr[i]<<" ";
//    }

    Interval arr[] = {{6,4},{2,4},{4,6},{2,3},{7,19}};
    sort(arr,arr+5,compare);
    for(int i = 0;i<5;i++){
       cout<<arr[i].st<<" "<<arr[i].et<<endl;
  }


    return 0;
}

#include<iostream>
#include<algorithm>
#include<cmath>
#include<utility>


using namespace std;

struct Interval{
	int st;
	int et;
};

bool compare(Interval i1,Interval i2){
	return i1.st > i2.st;
}
int main(){	//Interval arr[] = {{6,4} , {3,4}, {4,6} , {8,13}};
	//sort(arr,arr+4,compare);
	int arr[] = {1,3,2,5,7,6};
	sort(arr,arr+6);
	for(int i=0;i<6;i++){
		cout<<arr[i] << " ";
	}

	cout<<endl;
	cout << binary_search(arr,arr+6,2);
	cout<<endl;

	cout<<lower_bound(arr,arr+6,3) - arr;
	cout<<endl;

	cout<<upper_bound(arr,arr+6,3) - arr;
	cout<<endl;

	cout<<endl;

	cout<<__gcd(10,6)<<endl;

	cout<<pow(2.2,5)<<endl;

	int x= 10;
	int y=12;
	swap(x,y);
	cout<<x<<endl;
	cout<<y<<endl;

	cout<<min(14,18)<<endl;
		// for(int i=0;i<4;i++){
	// 	cout << arr[i].st << " : " << arr[i].et << endl;
	// }
	return 0;
}
