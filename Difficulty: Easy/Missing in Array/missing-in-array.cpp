class Solution {
  public:
    int missingNum(vector<int>& arr) {             // only arr provided
        int n = (int)arr.size();                   // n = size = N-1
        long long expected = 1LL * (n + 1) * (n + 2) / 2; // sum 1..(n+1)
        long long actual = 0;
        for (int x : arr) actual += x;
        return (int)(expected - actual);
    }
};