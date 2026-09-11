class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=0;
        int fast=0;
        while(true)
        {
            slow=nums[slow];
            fast=nums[fast];
            fast=nums[fast];
            if(slow==fast)
            {
                slow=0;
                while(slow!=fast)
                {
                    slow=nums[slow];
                    fast=nums[fast];
                }
                break;
            }
        }
        return slow;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna