#include <iostream>
#include <vector>
using namespace std;


int H_D(int a, int b)
{
	int x = a ^ b; 
    int hd = 0; 
  
    while (x > 0) { 
        hd += x & 1; 
        x >>= 1; 
    } 
  
    return hd; 

}

int HD(vector<int> A)
{
	int ans = 0;
    for(int i=0; i<A.size(); i++)
    {
        ans = ans + H_D(A[i],A[i+1]);
    }
    ans = ans + H_D(A[0],A[A.size()-1]);
    ans = ans * 2;
    return ans;
}

int main()
{
	vector<int> A;
	A.push_back(1);
	A.push_back(2);
	A.push_back(3);
	A.push_back(4);

	int ans = HD(A);

	cout<<ans<<endl;

	return 0;
}