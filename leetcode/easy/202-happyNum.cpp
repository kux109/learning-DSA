#include <iostream>
using namespace std;


int helper(int a)
{
        int x = 0;
        int sum = 0;
        while(a != 0)
        {
            x = a % 10;
            sum = sum + (x*x);
            a = a / 10;
        }
        return sum;
}
    
bool isHappy(int n)
{
        int slow = n;
        int fast = n;
        while(true)
        {
            slow = helper(slow);
            fast = helper(helper(fast));
            if(slow==fast)
                break;
        }
        if(slow == 1)
            return true;
        else
            return false;
}

int main()
{
        int n;
        cin>>n;
        cout<<isHappy(n);
        return 0;
}