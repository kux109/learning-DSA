#include <iostream>
#include <vector>
using namespace std;

vector<int> sortbycolor(vector<int> A)
{
	int n0=0,n1=0,n2=0;
    for(int i=0; i<A.size(); i++)
    {
        if(A[i] == 0)
            n0++;
        if(A[i] == 1)
            n1++;
        if(A[i] == 2)
            n2++;
    }
    A.clear();
    for(int i=0; i<n0; i++)
        A.push_back(0);
    for(int i=n0; i<n1+n0; i++)
        A.push_back(1);
    for(int i=n1+n0; i<n2+n1+n0; i++)
        A.push_back(2);
    return A;

}

int main()
{
	vector<int> A;

	//only put input as 0, 1 or 2

	A.push_back(1);
	A.push_back(0);
	A.push_back(2);
	A.push_back(0);
	A.push_back(0);
	A.push_back(1);
	A.push_back(2);
	A.push_back(1);
	A.push_back(0);

	A = sortbycolor(A);

	for(int i=0; i<A.size(); i++)
		cout<<A[i]<<endl;
}
