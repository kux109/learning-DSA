// XOR karne se saare double wale cut jayenge bas single reh jayega
// c = a ^ b
// also b = a ^ c


#include <iostream>
#include <vector>
using namespace std;

int singNUM(vector<int> num)
{
	int n=num.size();
	int res = 0;
	for(int i=0; i<n; i++)
	{
		res = res ^ num[i];
	}
	return res;
}

int main() 
{
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(2);
	arr.push_back(3);

	int ans = singNUM(arr);
	cout<<ans<<endl;

}