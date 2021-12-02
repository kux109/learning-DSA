#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target)     
{   
    if(target > nums[nums.size()-1])
        return nums.size();        
    if(target < nums[0])
        return 0;
    if(target == nums[nums.size()-1])
        return nums.size()-1;
    else
    {
        int i=0;
        while(i < nums.size()-1)
        {
            if(target == nums[i])
                return i;
            if(target > nums[i] && target < nums[i+1])
                return i+1;
            i++;
        }
    }
    return 0;
}

int main()
{
    vector<int> sol{1,2,3,4,5,6,7};
    int tar = 3;
    int ans = searchInsert(sol,tar);
    cout<<ans;
    return 0;
}