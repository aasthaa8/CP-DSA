class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        int max_end=nums[0];
        int min_end=nums[0];
        int res=nums[0];
        for(int i=1;i<n;i++)
        {
            int v1=min_end*nums[i];
            int v2=max_end*nums[i];
            int v3=nums[i];
            min_end=min(v1,min(v2,v3));
            max_end=max(v1,max(v2,v3));
            res=max(max(res,v3),max(min_end,max_end));
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna