class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> res(n);
        res[n-1]=0;
        stack<int> st;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && temperatures[st.top()]<=temperatures[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                res[i]=0;
                st.push(i);
                continue;
            }
            res[i]=st.top()-i;
            st.push(i);
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna