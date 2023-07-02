class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int index = max_element(arr.begin(),arr.end()) - arr.begin();
        return index;
    }
};