class Solution {
  public:
    bool isIntersect(vector<vector<int>> intervals) {
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size()-1;i++)
        {
            if(intervals[i][1]>=intervals[i+1][0]){
                return true;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna