class Solution {
  public:
    int minMeetingRooms(vector<int> &start, vector<int> &end) {
        int res=0;
        int room=0;
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        
        int i=0;
        int j=0;
        int n=start.size();
        
        while(i<n && j<n)
        {
            if(start[i]<end[j])
            {
                room++;
                i++;
            }
            else
            {
                room--;
                j++;
            }
            res=max(res,room);
        }
        
        return res;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna