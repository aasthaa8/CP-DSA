class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int f[5]={0};
        for(int i=0;i<text.size();i++)
        {
            if(text[i]=='b')
            {
                f[0]++;
            }
            else if(text[i]=='a')
            {
                f[1]++;
            }
            else if(text[i]=='l')
            {
                f[2]++;
            }
            else if(text[i]=='o')
            {
                f[3]++;
            }
            else if(text[i]=='n')
            {
                f[4]++;
            }
            else
            {
                continue;
            }
        }
        int ans=INT_MAX;
        f[2]=f[2]/2;
        f[3]=f[3]/2;
        for(int i=0;i<5;i++)
        {
            ans=min(ans,f[i]);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna