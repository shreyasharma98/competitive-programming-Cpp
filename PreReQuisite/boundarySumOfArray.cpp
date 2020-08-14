#include<climits>
#include<iostream>
using namespace std;
int totalSum(int **input, int n)
{
    int sum = 0;
   for(int i = 0;i<n;i++)
   {
       for(int  j = 0;j<n;j++)
       {
           if((i == 0 || i==n-1 || j ==n-1 || j == 0 || i == j || i+j == n-1) && input[i][j]!=INT_MAX)
           {
               sum +=input[i][j];
               input[i][j] = INT_MAX;
           }
       }
   }

    return sum;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int** arr = new int*[n];

		for (int i = 0; i < n; i++)
		{
			arr[i] = new int[n];
			for (int j = 0; j < n; j++)
			{
				cin >> arr[i][j];
			}
		}

        cout << totalSum(arr, n) << endl;
	}
}
