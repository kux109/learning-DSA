#include <bits/stdc++.h>
using namespace std;

vector<int> arrange(vector<int> A) 
{
    vector<int> B;
    int x,y;
    for(int i=0; i < A.size(); i++)
    {
        x = A[i];
        y = A[x];
        B.push_back(y);
    }

    return B;
    
    /*
    A.clear();
    for(int i=0; i<B.size(); i++)
    {
        A.push_back(B[i]);
    }
    */
}

int main()
{
	vector<int> A;
	A.push_back(0);
	A.push_back(4);
	A.push_back(3);
	A.push_back(1);
	A.push_back(2);

	A = arrange(A);

	for(int i=0; i<A.size(); i++)
		cout<<A[i]<<" ";

}
