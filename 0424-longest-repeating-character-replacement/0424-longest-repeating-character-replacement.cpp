class Solution {
public:
    int characterReplacement(string s, int k) {
        int low=0;
        int high=0;
        int res=INT_MIN;
        int hsh[256]={0};
        while(high<s.size())
        {
            hsh[s[high]]++;
            int len=high-low+1;
            int maxc=0;
            for(auto a:hsh)
            {
                maxc=max(maxc,a);
            }
            int diff=len-maxc;
            while(diff>k)
            {
                hsh[s[low]]--;
                low++;
                len=high-low+1;
                for(auto a:hsh)
                {
                    maxc=max(maxc,a);
                }
                diff=len-maxc;
            }
            len=high-low+1;
            res=max(res,len);
            high++;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna