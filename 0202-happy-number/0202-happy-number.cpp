class Solution {
private: 
int res(int n)
{
    int sum=0;
    while (n>0)
    {
        int d= n%10;
        n=n/10;
        sum+=d*d;
    }
    return sum;
}
public:
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        while(fast!=1){
            slow=res(slow);
            fast=res(fast);
            fast=res(fast);
            if(slow==fast && slow!=1)
            {
                return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna