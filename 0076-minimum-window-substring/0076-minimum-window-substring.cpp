class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size()<t.size()){
            return "";
        }
        int low=0;
        int high=t.size()-1;
        int res=INT_MAX;
        int ft[256]={0};
        int fs[256]={0};
        vector<int> v(2,0);
        for(auto a:t)
        {
            ft[a]++;
        }
        for(int i=low;i<high;i++)
        {
            fs[s[i]]++;
        }
        
        while(high<s.size()){
            fs[s[high]]++;
            bool exists=true;
            for(int i=0;i<256;i++){
                if(ft[i]>0){
                    if(fs[i]<ft[i]){
                        exists=false;
                    }
                }
            }
            while(exists){
                int len=high-low+1;
                if(len<=res){
                    v[0]=low;
                    v[1]=high;
                    res=len;
                }
                fs[s[low]]--;
                low++;
                for(int i=0;i<256;i++){
                    if(ft[i]>0){
                        if(fs[i]<ft[i]){
                            exists=false;
                        }
                    }
                }
            }
            high++;
        }
        string ans;
        if(res==INT_MAX){
            return "";
        }
        for(int i=v[0];i<=v[1];i++)
        {
            ans.push_back(s[i]);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna