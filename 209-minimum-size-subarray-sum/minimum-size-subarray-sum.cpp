class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int maxs=0,left=0,ans=INT_MAX;
        for(int right=0;right<nums.size();right++)
        {
            maxs+=nums[right];

            while(maxs>=target)
            {
                ans=min(ans,right-left+1);
                maxs-=nums[left];
                left++;
            }
        }
        return ans==INT_MAX?0:ans;
        
    }
};