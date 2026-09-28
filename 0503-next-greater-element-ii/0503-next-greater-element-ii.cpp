class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        int n=nums.size();
        if(nums.size()==1)
        {
            return {-1};
        }
        vector<int> res(n);
        res[n-1]=-1;
        stack<int> st;
        st.push(nums[n-1]);

        for(int i=2*n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=nums[i%n])
            {
                st.pop();
            }
            if(st.empty())
            {
                res[i%n]=-1;
                st.push(nums[i%n]);
                continue;
            }
            res[i%n]=st.top();
            st.push(nums[i%n]);
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna