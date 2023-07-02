#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    string str;
    while (getline(cin,str))
    {
        string str2;
        for (int i = 0; i < str.length() ; i++)
        {
            if(str[i] == ' '){
                for (int i = str2.length()-1; i >= 0; i--)
                {
                    cout<<str2[i];
                }
                cout<<" ";
                str2.erase();
                
            }
            else{
                str2 += str[i];
            }
        }
        for (int i = str2.length()-1; i >= 0; i--)
        {
            cout<<str2[i];
        }
        cout<<endl;
        
    }
    
    

    return 0;
}