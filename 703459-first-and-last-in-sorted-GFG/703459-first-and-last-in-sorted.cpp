class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int start=0, end=arr.size()-1, first=-1, last=-1, mid;
        
        //Find first
        while(start<=end){
            mid=start+(end-start)/2;
            
            if(arr[mid]==x){
                first=mid;
                end=mid-1;
                
            }
            else if(arr[mid]<x)
            start = mid+1;
            else
            end = mid-1;
        }
        //Find Last
        start=0; end=arr.size()-1;
        while(start<=end){
            mid=start+(end-start)/2;
            
            if(arr[mid]==x){
                last=mid;
                start=mid+1;
                
            }
            else if(arr[mid]<x)
            start = mid+1;
            else
            end = mid-1;
        }
        
        vector<int>a(2);
        a[0]=first;
        a[1]=last;
        
        return a;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna