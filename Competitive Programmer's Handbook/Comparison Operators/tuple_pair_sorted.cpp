#include <iostream>
#include<tuple>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<tuple<int,int,int>>v;

    v.push_back({1,2,3});
    v.push_back({3,2,1});
    v.push_back({2,3,1});
    sort(v.begin(),v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout<<get<0>(v[i])<<" ";
        cout<<get<1>(v[i])<<" ";
        cout<<get<2>(v[i])<<" "<<endl;
    }
    

    return 0;
}