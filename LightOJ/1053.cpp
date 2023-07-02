#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int cnt = 1;
    while (N--)
    {
        double a,b,c; cin>>a>>b>>c;
        double half_range= (a+b+c)/2.0;

        int maxx = max({a,b,c});
        int mn = min({a,b,c});

        int mx_sq = pow(maxx,2);
        int small_two = (a+b+c)-maxx;
        int middle_value = small_two - mn;

        if(mx_sq == pow(mn,2)+pow(middle_value,2)){
            cout<<"Case "<<cnt<<": "<<"yes"<<endl;
        }
        else cout<<"Case "<<cnt<<": "<<"no"<<endl;
        cnt++;

    }

    return 0;
}