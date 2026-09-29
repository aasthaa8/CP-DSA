class Solution {
public:
    string removeDuplicates(string s, int k) {
        string res;
        stack<pair<char,int>> st;

        for(int i=0;i<s.size();i++)
        {
            if(st.empty())
            {
                st.push({s[i],1});
                continue;
            }
            if(!st.empty() && st.top().first==s[i])
            {
                if(st.top().second==k-1)
                {
                    st.pop();
                    continue;
                }
                st.top().second++;
                continue;
            }

            st.push({s[i],1});
        }

        while(!st.empty())
        {
            for(int i=st.top().second;i>0;i--)
            {
                res.push_back(st.top().first);
            }
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna