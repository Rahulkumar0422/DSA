class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int ans=0;
        int size=arr.size();
        
        for(int i=0;i<size;i++){
            ans=ans^arr[i]^(i+1);
            
        }
        ans=ans^(size+1);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna