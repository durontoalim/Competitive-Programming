class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        set<int>s;
        for(int i=1; i<arr.size(); i++){
            int n = arr[i] - arr[i-1];
            s.insert(n);
        }
        
        if(s.size() == 1){
            return true;
        }
        
        return false;
    }
};