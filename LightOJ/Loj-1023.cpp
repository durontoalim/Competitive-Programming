#include <bits/stdc++.h>

using namespace std;

vector< vector<char> > subsets;

void subset_generate(vector<char> &subset, int i, vector<char> &nums){
    
    if(i == nums.size()){
        subsets.push_back(subset);
        return;
    }
    subset.push_back(nums[i]);
    subset_generate(subset,i+1, nums);
    
    subset.pop_back();
    subset_generate(subset,i+1,nums);
    

}
int main()
{
    int N; cin>>N;
    while (N--)
    {
        int n,k; cin>>n>>k;
        vector<char> nums;
        int t = 'A';
        for (int i = 0; i < n; i++)
        {
            char ch = t;
            nums.push_back(ch);
            t++;
        }
        vector<char>empty;

        subset_generate(empty, 0, nums);
        int cnt = 1;
        for(auto subset: subsets){
            for(auto element: subset){
                cout<<element;
            }
            if(cnt == k) break;
            cnt++;
            cout<<endl;
        }
        subsets.clear();
    }
    

    
    

    return 0;
}