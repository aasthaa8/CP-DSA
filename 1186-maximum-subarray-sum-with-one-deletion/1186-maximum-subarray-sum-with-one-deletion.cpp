class Solution {
public:
    int maximumSum(vector<int>& arr) {
        if(arr.size()==1)
        {
            return arr[0];
        }
        int no_delete=arr[0];
        int one_delete=0;
        int res=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            int prev_no_delete=no_delete;
            int prev_one_delete=one_delete;
            no_delete=max(no_delete+arr[i], arr[i]);
            one_delete=max(one_delete+arr[i],prev_no_delete);
            res=max(res,max(no_delete,one_delete));
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna