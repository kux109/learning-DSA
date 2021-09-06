#include <iostream>
#include <vector>
using namespace std;

vector<int> func(vector<int> arr)
{
	vector<int> ans;
	for(int i=0; i<arr.size(); i++)
	{
		int j;
		for(j=i-1; j>-1; j--)
		{
			if(arr[j] < arr[i])
			{
				ans.push_back(arr[j]);
				break;

			}
		}
		if(j==-1)
		{
			ans.push_back(-1);
		}		

	}
	return ans;

}




int main()
{
	vector<int> arr;
	arr.push_back(3);
	arr.push_back(5);
	arr.push_back(2);
	arr.push_back(6);
	arr.push_back(5);


	arr = func(arr);


	for(int i=0; i<arr.size(); i++)
	{
		cout<<arr[i]<<" ";
	}



}