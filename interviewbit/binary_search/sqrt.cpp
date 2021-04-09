//Find square root using binary search

#include <iostream>
using namespace std;


int bin_sqrt(int A)
{
	int l = 1;
	int r = A;
	int res = 0;
	while(l <= r)
	{
		int mid = l + (r-l)/2;
		if(mid*mid < A)
		{
			res = mid;
			l = mid+1;
		}
		else if(mid*mid > A)
		{
			r = mid-1;
		}
		else
		{
			return mid;
		}
	}
	return res;
}

int main()
{
	cout<<"enter a number";
	int n;
	cin>>n;

	cout<<bin_sqrt(n)<<endl;
}