#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


bool vis[200];
vector<int>v[200];

void dfs(int vertex){
    vis[vertex] = true;
    for(auto it: v[vertex]){
        if(!vis[it]){
            dfs(it);
        }
    }
}


int32_t main()
{
    FastIO();
    int node,edge; cin>>node>>edge;
    for (int i = 1; i <= edge; i++)
    {
        int x,y; cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int cnt = 0;

    for (int i = 1; i <= node; i++)
    {
        if(!vis[i]){
            dfs(i);
            cnt++;
        }
    }
    cout<<cnt<<endl;
    
    

    return 0;
}