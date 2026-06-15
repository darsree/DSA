class Solution 
{
    public int[] twoSum(int[] nums, int target) 
    {
        int temp[]= new int[2];
        int l=nums.length;
        for(int i=0;i<l;i++)
        {
            for(int j=i+1;j<l;j++)
            {
                if((nums[i]+nums[j])==target)
                {
                    temp[0]=i;
                    temp[1]=j;
                    return temp;
                }
            }
        }  
        return temp;     
    }
}