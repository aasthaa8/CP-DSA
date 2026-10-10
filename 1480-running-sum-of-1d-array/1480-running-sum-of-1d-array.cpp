class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        long long sum=0;
        for(auto i:nums)
        {
            sum+=i;
            res.push_back(sum);
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna