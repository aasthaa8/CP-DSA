class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        vector<vector<int>> res;
        int i=0;
        while(i<n && intervals[i][0]<=newInterval[0])
        {
            res.push_back({intervals[i][0],intervals[i][1]});
            i++;
        }

        int start_merge=newInterval[0];
        int end_merge=newInterval[1];

        if(res.size()>0 && res.back()[1]>=start_merge)
        {
            start_merge=min(start_merge,res.back()[0]);
            end_merge=max(end_merge, res.back()[1]);
            res.pop_back();
        }

        while(i<n && intervals[i][0]<=end_merge)
        {
            start_merge=start_merge;
            end_merge=max(end_merge, intervals[i][1]);
            i++;
        }

        res.push_back({start_merge,end_merge});

        while(i<n)
        {
            res.push_back({intervals[i][0],intervals[i][1]});
            i++;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna