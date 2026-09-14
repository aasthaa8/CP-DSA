class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        int max_end=nums[0];
        int min_end=nums[0];
        int res_max=nums[0];
        int res_min=nums[0];
        int total_sum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            max_end=max(max_end+nums[i],nums[i]);
            min_end=min(min_end+nums[i],nums[i]);
            res_max=max(res_max,max_end);
            res_min=min(res_min,min_end);
            total_sum+=nums[i];
        }
        int max_end_cir=total_sum-res_min;
        int res=max(res_max,max_end_cir);
        if(res==0)
        {
            return res_max;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna