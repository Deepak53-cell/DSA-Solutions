// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int n = arr.size();
        
        int mn = arr[0];
        int mx = arr[0];
        
        for(int i = 0 ; i<n ; i++){
            mn = min(mn ,arr[i]);
            mx = max(mx ,arr[i]);
        }
        
        return {mn, mx};
    }
};