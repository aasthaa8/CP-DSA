class Solution {
  public:
    int minSubarraySum(vector<int> &arr) {
        if(arr.size()==1)
        {
            return arr[0];
        }
        int best_end=arr[0];
        int res=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            int v1= best_end+arr[i];
            int v2=arr[i];
            best_end=min(v1,v2);
            res=min(res,best_end);
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna