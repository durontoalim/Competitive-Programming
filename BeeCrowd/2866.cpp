#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N; cin>>N;
    while (N--)
    {
        string str; cin>>str;
        for (int i = str.size()-1; i >= 0 ; --i)
        {
            if('a' <= str[i] &&  str[i] <= 'z') cout<<str[i];
        }
        cout<<endl;
        
    }
    
    return 0;
}