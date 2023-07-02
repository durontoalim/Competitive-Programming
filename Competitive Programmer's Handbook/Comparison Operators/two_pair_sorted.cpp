#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<pair<int,int>>v;
    vector<pair<int,int>>::iterator i;

    v.push_back({1,2});
    v.push_back({2,3});
    v.push_back({1,3});
    
    sort(v.begin(), v.end());
    
    for(int i=0; i<v.size(); i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
    return 0;
}