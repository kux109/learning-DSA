#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool sum2X(vector<int> arr, int x, int i) //works only for sorted array
{
	int j = arr.size()-1;
	while(i < j)
	{
		if(arr[i] + arr[j] > x)
			j--;
		else if(arr[i] + arr[j] < x)
			i++;
		else
			return true;
	}
	return false;
}

bool sum3Zero(vector<int> arr)
{
	sort(arr.begin(),arr.end());
	for(int i=0; i<arr.size()-2; i++)
	{
		if(sum2X(arr,(-1)*arr[i],i+1))
		{
			return true;
		}
	}
	return false;
}

int main()
{
	vector<int> arr = {3,-1,2,-5,4,6,-3,0};
	cout<<sum3Zero(arr);
}

