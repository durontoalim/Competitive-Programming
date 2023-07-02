#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int cnt = 0;

    int t; cin>>t;

    while(t--){
        cnt++;

        int n; cin>>n;

        vector<int>v;
        vector<int>v2;
        vector<int>v3;
        vector<int>v4;
        vector<int>v5;
        vector<int>v6;

        for (int i = 0; i < n; i++)
        {
            int x1,y1,z1,x2,y2,z2; cin>>x1>>y1>>z1>>x2>>y2>>z2;
            
            v.push_back(x1);
            v2.push_back(y1);
            v3.push_back(z1);

            v4.push_back(x2);
            v5.push_back(y2);
            v6.push_back(z2);
        }
  
        int xMin = *max_element(v.begin(), v.end());
        int yMin = *max_element(v2.begin(), v2.end());
        int zMin = *max_element(v3.begin(), v3.end());

        // cout<<xMin<<" "<<yMin<<" "<<zMin<<endl;

        int xMax = *min_element(v4.begin(),v4.end());
        int yMax = *min_element(v5.begin(),v5.end());
        int zMax = *min_element(v6.begin(),v6.end());

        // cout<<xMax<<" "<<yMax<<" "<<zMax<<endl;

        if(xMin > xMax || yMin > yMax || zMin > zMax){
            cout<<"Case "<<cnt<<": "<<0<<endl;
            continue;
        }

        int result = (xMax-xMin)*(yMax-yMin)*(zMax-zMin);

        cout<<"Case "<<cnt<<": "<<result<<endl;
        
    }

    return 0;
}