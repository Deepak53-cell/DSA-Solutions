#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
    //   int minVal = *min_element(arr.begin(), arr.end());
int maxVal = *max_element(arr.begin(), arr.end());
        return maxVal;
    }
};
