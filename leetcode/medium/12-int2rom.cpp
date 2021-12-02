#include <iostream>
#include <string>

using namespace std;

string intTOroman(int num)
{
	string I[10] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    string X[10] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string C[10] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string M[5] = {"","M","MM","MMM"};
    string ans = M[num / 1000]+C[(num%1000)/100]+X[(num%100)/10]+I[num % 10];
    return ans;
}

int main()
{
	int n;
	cout<<"Enter a number between 0 and 3999"<<endl;
	cin>>n;
	cout<<intTOroman(n);
	return 0;
}