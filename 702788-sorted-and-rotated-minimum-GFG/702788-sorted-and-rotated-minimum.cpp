class Solution {
  public:
    int findMin(vector<int>& arr) {
        // code here
        int start=0, end=arr.size()-1, mid, ans=arr[0];
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(arr[mid]>=arr[0])
            start=mid+1;
            
            else
            {
                end=mid-1;
                ans=arr[mid];
            }
            
            
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna