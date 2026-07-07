class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int s=0,ans=0;
        int count=0;
        unordered_map <int,int> mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];

            if(mp.find(s-k)!=mp.end()){
            count+=mp[s-k];
            }
            mp[s]++;
        }
        return count;
    }
};