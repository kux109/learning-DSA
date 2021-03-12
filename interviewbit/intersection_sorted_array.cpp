#include <iostream>
#include <vector>
using namespace std;


vector<int> I_S_A(vector<int>A,vector<int> B)
{
	vector<int> sol;
    int i=0,j=0;
    int m = A.size();
    int n = B.size();
    while(i<m && j<n)
    {
        if(A[i]>B[j])
            j++;
        if(A[i]<B[j])
            i++;
        if(A[i] == B[j])
        {
            sol.push_back(A[i]);
            i++;
            j++;
        }
    }
    return sol;
}

int main()
{
	vector<int> A;
	vector<int> B;

	//adding elements in A

	A.push_back(1);
	A.push_back(2);
	A.push_back(3);
	A.push_back(4);
	A.push_back(5);
	A.push_back(6);


	//adding elements in B

	B.push_back(0);
	B.push_back(2);
	B.push_back(3);
	B.push_back(4);


	vector<int> C = I_S_A(A,B);

	//printing solution

	for(int i=0; i<C.size(); i++)
		cout<<C[i]<<endl;
}