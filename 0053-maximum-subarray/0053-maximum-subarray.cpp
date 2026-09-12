class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        int best_end=nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int v1=best_end+nums[i];
            int v2=nums[i];
            best_end=max(v1,v2);
            res=max(res,best_end);
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna