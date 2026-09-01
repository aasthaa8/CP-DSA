class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low=0;
        int high=0;
        int res=INT_MIN;
        vector<int> hsh(2,0);
        while(high<nums.size())
        {
            hsh[nums[high]]++;
            while(hsh[0]>k)
            {
                hsh[nums[low]]--;
                low++;
            }
            int len=high-low+1;
            res=max(res,len);
            high++;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna