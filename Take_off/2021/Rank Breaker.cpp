#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while (N--)
    {
        vector<long long int>v;
        int n;
        cin>>n;
        
        
        int a,b;
        cin>>a>>b;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }


        long long int max = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i != j){
                    long long int frmla = abs( a*v[i] - b*v[j] );
                    if(frmla > max){
                        max = frmla;
                    }
                }
            }
            
        }

        cout<<max<<endl;
        

        // sort(v.begin(), v.end() );

        // int a,b;
        // cin>>a>>b;
        // int frmla;

        // frmla =abs( (a * v.back() ) - ( b * v.front() ) ) ;

        // cout<<frmla<<endl;
        
    }
    

    return 0;
}