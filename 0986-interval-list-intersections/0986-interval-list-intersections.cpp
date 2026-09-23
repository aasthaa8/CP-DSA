class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        
        vector<vector<int>> res;
        int a=0;
        int b=0;
        while(a<firstList.size() && b<secondList.size())
        {
            int start=max(firstList[a][0],secondList[b][0]);
            int end=min(firstList[a][1],secondList[b][1]);
            if(start<=end)
            {
                res.push_back({start,end});
            }
            if(firstList[a][1]<=secondList[b][1])
            {
                a++;
                continue;
            }
            b++;
            continue;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna