//remove duplicates from a sorted array

#include <set>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        set<int> s;
        for(int i=0; i<nums.size(); i++)
        {
            s.insert(nums[i]);
            
        }
        int ans = s.size();
        int i=0;
        set<int>::iterator it;
        for(it=s.begin(); it!=s.end(); it++)
        {
            nums[i] = *it;
            i++;
        }
        return ans;
    }
};