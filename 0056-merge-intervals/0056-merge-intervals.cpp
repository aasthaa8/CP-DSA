class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        if(n<=1)
        {
            return intervals;
        }
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>res;
        int start1=intervals[0][0];
        int end1= intervals[0][1];
        for(int i=1;i<n;i++)
        {
            int start2=intervals[i][0];
            int end2=intervals[i][1];
            if(end1>=start2)
            {
                start1=start1;
                end1=max(end1,end2);
                continue;
            }
            res.push_back({start1,end1});
            start1=start2;
            end1=end2;
        }
        res.push_back({start1,end1});
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna