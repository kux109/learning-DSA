#include <iostream>
#include <climits>
using namespace std;
int reverese(int x)
{
	if(x >= INT_MAX || x <= INT_MIN)
        return 0;
    bool flagNeg = false;
    if(x < 0)
    {
        flagNeg = true;
        x = x * -1;        
    }
    long int ans = 0;        
    while(x != 0)
    {
        ans = ans * 10;
        if(ans >= INT_MAX || ans <= INT_MIN)
            return 0;
        ans = ans + x % 10;
        x = x / 10;
    }
    if(flagNeg)
    {
        ans = ans * -1;
    }
    return (int)ans;
}
int main()
{
	int x;
	cout<<"Enter a Number"<<endl;
	cin>>x;
	cout<<reverse(x);
	return 0;
}