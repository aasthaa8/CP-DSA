class Solution {
public:
    int longestPalindrome(string s) {
        bool odd=false;
        int ans=0;
        unordered_map<char,int> f;
        for(int i=0;i<s.size();i++)
        {
            f[s[i]]++;
        }
        int max_odd=0;
        for(auto i:f)
        {
            if(i.second%2==0)
            {
                ans+=i.second;
            }
            else
            {
                odd=true;
                ans+=i.second-1;
            }
        }
        if(odd)
        {
            ans++;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna