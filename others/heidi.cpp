#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;


int func(int n,vector<int> arr, int it)
{
	while(it--)
	{
		sort(arr.begin(),arr.end(),greater<int>());
		arr[0] = sqrt(arr[0]);
	}


	int sum = 0;
	for(int i=0; i<n; i++)
	{
		sum = sum+arr[i];
	}

	return sum;
}

int main()
{
	int n;
	cin>>n;
	int in;
	vector<int> arr;
	for(int i=0; i<n; i++)
	{
		cin>>in;
		arr.push_back(in);

	}
	int it;
	cin>>it;
	int ans = func(n,arr,it);
	cout<<ans<<" ";
}