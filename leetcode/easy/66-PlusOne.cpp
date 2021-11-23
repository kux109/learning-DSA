#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) 
{
    int last = digits.size()-1;   
    while(last >= 0)
    {
        if(digits[last]<9)
        {
            digits[last]++;
            return digits;
        }
        else
        {
            digits[last]=0;
            last--;
        }
    }
    if(digits[0] == 0)
    {
        digits.insert(digits.begin(),1);
    }
    return digits;
}

int main()
{
    vector<int> q{9,9,9};
    q = plusOne(q);
    for(int i=0; i<q.size(); i++)
    {
        cout<<q[i];
    }
    return 0;
}     
