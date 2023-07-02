#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N; cin>>N;
    int t = 1;
    while (N--)
    {
        string str; cin>>str;
        if(str[4] == 's'){
            cout<<"Case "<<t<<": "<<str<<endl;
        }
        else{
            cout<<"Case "<<t<<": ";
            for (int i = 0; i < str.length(); i++)
            {
                if(i == 4) cout<<'s';
                cout<<str[i];
            }
            cout<<endl;
            
        }
        t++;
    }
    

    return 0;
}