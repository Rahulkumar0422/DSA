class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        int start = 0;
        int end = arr.size() - 1;
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] < arr[mid + 1]) {
                start = mid + 1;
                
            }
            else {
                end = mid;
                
            }
            
        }
        return start;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna