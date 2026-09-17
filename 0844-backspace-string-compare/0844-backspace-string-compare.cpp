class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int a=s.size()-1;
        int b=t.size()-1;
        int skips=0;
        int skipt=0;
        while(a>=0 || b>=0)
        {
            while(a>=0){
                if(s[a]=='#')
                {
                    skips++;
                    a--;
                }
                else if(skips>0)
                {
                    skips--;
                    a--;
                }
                else
                {
                    break;
                }
            }

            while(b>=0){
                if(t[b]=='#')
                {
                    skipt++;
                    b--;
                }
                else if(skipt>0)
                {
                    skipt--;
                    b--;
                }
                else
                {
                    break;
                }
            }

            if(a>=0 && b>=0)
            {
                if(s[a]!=t[b])
                {
                    return false;
                }
            }

            if(a<0 && b>=0)
            {
                return false;
            }

            if(b<0 && a>=0)
            {
                return false;
            }
            a--;
            b--;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna