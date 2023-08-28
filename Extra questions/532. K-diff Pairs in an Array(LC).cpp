// link:- https://leetcode.com/problems/k-diff-pairs-in-an-array/description/

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count=0;
        //sorting to resolve any duplicate case
        sort(nums.begin(),nums.end());
        set<pair<int,int>>s;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(i!=j&&(abs(nums[i]-nums[j])==k))
                {
                    
                    s.insert({nums[i],nums[j]});
                }
            }
        }
        count=s.size();
        return count;
        
    }
};

//Time complexity :O(n^2)
//Space complexity : O(n)