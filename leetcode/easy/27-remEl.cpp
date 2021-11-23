#include <iostream>
#include <vector>
using namespace std;


int removeElement(vector<int>& nums, int val) 
{
    if(nums.size() ==0)
        return 0;
    vector<int>::iterator it = nums.begin();
    while(it!=nums.end())
    {
        if(*it == val)
            nums.erase(it);
        else
            advance(it,1);
    }

    return nums.size();
}

int main()
{
    vector<int> nums{1};
    for(int i=0; i<nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int ans = removeElement(nums,2);
    for(int i=0; i<nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    return ans;
}


