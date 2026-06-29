class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int s=0,ans=0;
        unordered_map <int,int> temp;
        temp[0]=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
            s--;
            else
            s++;

            if(temp.contains(s))
            {
                ans=max(ans,i-temp[s]);
            }
            else
            {
                temp[s]=i;
            }

        }
        return ans;
        
    }
};