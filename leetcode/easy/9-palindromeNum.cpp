#include <iostream>
using namespace std;

bool isPalindrome(int x) 
{
    if(x<0)
        return false;
    vector<int> number;
    int a = 0;
    while(x != 0)
    {
        a = x % 10;
        number.push_back(a);
        x = x /10;
    }
    int i=0;
    int j = number.size()-1;
    while(i<=j)
    {
        if(number[i] != number[j])
            return false;
        else
            i++;
            j--;
    }
    return true;   
}

int main()
{
    int x;
    cin>>x;
    cout<<isPalindrome(x);
    return 0;
}