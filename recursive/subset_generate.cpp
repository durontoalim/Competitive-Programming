#include <bits/stdc++.h>

using namespace std;

vector< vector<int> > subsets;

void subset_generate(vector<int> &subset, int i, vector<int> &nums){
    
    if(i == nums.size()){
        subsets.push_back(subset);
        return;
    }

    subset_generate(subset,i+1, nums);
    subset.push_back(nums[i]);

    subset_generate(subset,i+1,nums);
    subset.pop_back();

}
int main()
{
    int n; cin>>n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    vector<int>empty;

    subset_generate(empty, 0, nums);

    for(auto subset: subsets){
        for(auto element: subset){
            cout<<element<<" ";
        }
        cout<<endl;
    }
    
    

    return 0;
}