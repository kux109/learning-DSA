#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool sum2(vector<int> arr, int X, int i)
{
	int j = arr.size()-1;
	while(i < j)
	{
		if(arr[i] + arr[j] < X)
			j--;
		else if(arr[i] + arr[j] > X)
			i++;
		else
			return true;
	}
	return false;
}


bool is_pytho(vector<int> arr)
{
	sort(arr.begin(),arr.end(),greater<int>());
	for(int i=0; i<arr.size(); i++)
		arr[i] = arr[i]*arr[i];

	for(int i=0; i<arr.size()-2; i++)
	{
		if(sum2(arr,arr[i],i+1))
			return true;
	}
	return false;
}

int main()
{
	vector<int> a = {2,4,3,7,5};
	cout<<is_pytho(a)<<endl;
	return 0;
}