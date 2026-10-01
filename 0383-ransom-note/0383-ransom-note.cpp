class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26]={0};
        for(int i=0;i<magazine.size();i++)
        {
            arr[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.size();i++)
        {
            if(arr[ransomNote[i]-'a']<1)
            {
                return false;
            }
            arr[ransomNote[i]-'a']--;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna