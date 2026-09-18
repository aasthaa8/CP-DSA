class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int start=0;
        int end=0;
        int maxv=INT_MIN;
        int minv=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            maxv=max(maxv,nums[i]);
            if(nums[i]!=maxv)
            {
                end=i;
            }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            minv=min(minv,nums[i]);
            if(nums[i]!=minv)
            {
                start=i;
            }
        }
        cout<<start<<endl;
        cout<<end;
        if(start<end)
        {
            int ans=end-start+1;
            return ans;
        }
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna