class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> f;
        for(int i=0;i<s.size();i++)
        {
            f[s[i]]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(f[s[i]]==1)
            {
                return i;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna