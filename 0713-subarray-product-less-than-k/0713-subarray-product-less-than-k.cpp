class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int low=0;
        int high=0;
        int res=0;
        long long product=1;
        if(nums.size()==1)
        {
            if(nums[0]<k)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        while(high<nums.size())
        {
            product=product*nums[high];
            while(product>=k && low<=high)
            {
                product=product/nums[low];
                low++;
            }
            res+=high-low+1;
            high++;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna