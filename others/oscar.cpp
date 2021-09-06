#include <iostream>
#include <vector>
using namespace std;

vector<int> digiArr(int n)
{
	vector<int> arr;
	while(n!=0)
	{
		int a = n%10;
		arr.push_back(a);
		n = n/10;
	}
	return arr;
}

int printSum(vector<int> arr)
{
	int sum = 0;
	for(int i=0; i<arr.size()-1; i++)
	{
		sum = sum+arr[i];
	}
	return sum+1;

}

int func(int n)
{
	vector<int> arr = digiArr(n);
	for(int i=0; i<arr.size()-2; i++)
	{
		if(arr[i+1] > arr[i])
		{
			return arr[i];
			
		}
	}
	return printSum(arr);


}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ans = func(n);
		cout<<ans<<" ";
	}


}


