class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
                continue;
            }

            if(st.empty())
            {
                return false;
            }

            if(s[i]==')' && st.top()=='(')
            {
                st.pop();
                continue;
            }
            if(s[i]=='}' && st.top()=='{')
            {
                st.pop();
                continue;
            }
            if(s[i]==']' && st.top()=='[')
            {
                st.pop();
                continue;
            }

            return false;
        }

        if(!st.empty())
        {
            return false;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna