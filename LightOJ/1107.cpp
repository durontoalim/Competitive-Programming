#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N; cin>>N;
    int t = 1;
    while (N--)
    {
        cout<<"Case "<<t<<":"<<endl;
        int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
        int n; cin>>n;
        while (n--)
        {
            int x,y; cin>>x>>y;
            if( (x1 <= x && x <= x2) && (y1 <= y && y <= y2) ){
                cout<<"Yes"<<endl;
            }
            else cout<<"No\n";
        }
        t++;
    }
    

    return 0;
}