class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int left=0,right=0,num1=0;

        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            num1=nums[i];
            left=i+1;
            right=nums.size()-1;
            while(left<right)
            {
            int sum=nums[i]+nums[left]+nums[right];
            if(sum<0)
            {
                left++;
            }
            else if(sum>0)
            {
                right--;
            }
            else
            {
                ans.push_back({num1,nums[left],nums[right]});
                while(left<right && nums[left]==nums[left+1])
                left++;
                while(left<right && nums[right]==nums[right-1])
                right--;

            
            left++;
            right--;
            }
            }


        }
        return ans;
    }
};