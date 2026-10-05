class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int i=n-1;
        string res;
        while(i>=0)
        {
            if(s[i]==' ' && res.size()>0)
            {
                break;
            }
            if(s[i]==' ')
            {
                i--;
                continue;
            }
            res.push_back(s[i]);
            i--;
        }
        return res.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna