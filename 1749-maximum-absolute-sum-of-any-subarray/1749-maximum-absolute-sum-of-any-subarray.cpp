class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        if(nums.size()==1)
        {
            return abs(nums[0]);
        }
        int max_end=nums[0];
        int min_end=nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            max_end=max(max_end +nums[i],nums[i]);
            min_end=min(min_end+ nums[i],nums[i]);
            res=max(abs(res),max(abs(max_end), abs(min_end)));
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna