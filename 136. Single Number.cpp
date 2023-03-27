class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len=nums.size();
        for(int i=0;i<len;i++)
        {
            int c= count(nums.begin(),nums.end(),nums[i]);
            if(c==1)
            {
                return nums[i];
            }
        }
        return 0;
    }
};
