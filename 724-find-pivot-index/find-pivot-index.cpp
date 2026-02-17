#include<numeric>
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int start=0;
        while(start<nums.size())
        {
            int r1=accumulate(nums.begin(),nums.begin()+start,0);
            int r2=accumulate(nums.begin()+start+1,nums.end(),0);
            if(r1==r2)
            return start;
            start++;
        }
        return -1;
    }
};