#include <iostream>
#include <vector>
using namespace std;

void rev_str(vector<char> input)
{
	int i = 0;
	int j = input.size()-1;
	while(i<j)
	{
		char temp;
		temp = input[i];
		input[i] = input[j];
		intput[j] = temp;
		j--;
		i++;
	}
}
int main()
{
	vector<char> input{"h","e","l","l","o"};
	rev_str(input);
	for(int i=0; i<5; i++)
	{
		cout<<input[i]<<endl;
	}
}