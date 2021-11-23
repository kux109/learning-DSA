#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int> output;
    for(int i=0; i<nums.size(); i++)
    {
        for(int j=i+1; j<nums.size(); j++)
        {
            if(nums[i]+nums[j] == target)
            {
                output.push_back(i);
                output.push_back(j);
            }
        }
    }
    return output;
}

int main()
{
    vector<int> input{2,7,11,15};
    vector<int> ans = twoSum(input,9);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}