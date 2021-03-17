//number of paths to reach from top left cell to the bottom right cell of an MxN matrix;

#include <bits/stdc++.h>
using namespace std;

int numofpaths(int m,int n)
{
	if(m==1 || n==1)
		return 1;
	return numofpaths(m-1,n)+numofpaths(m,n-1);
}


int main()
{
	int m=3;
	int n=3;

	cout<<numofpaths(m,n);

	return 0;
}
