#include <bits/stdc++.h>
using namespace std;


#define FastIO                      \
    ios::sync_with_stdio(false);    \
    cin.tie(0);                     \
    cout.tie(0);                    \

int countPalindromes(string s)
{
    unordered_map<string, int> m;
    for (int i = 0; i < s.length(); i++) {

        for (int j = 0; j <= i; j++) {
 
            if (!s[i + j])
                break;
 
            if (s[i - j] == s[i + j]) {
 
                if ((i + j + 1) - (i - j) > 1)
                    m[s.substr(i - j,
                        (i + j + 1) - (i - j))]++;
 
            } else
                break;
        }
 
        for (int j = 0; j <= i; j++) {
            if (!s[i + j + 1])
                break;
            if (s[i - j] == s[i + j + 1]) {
 
                if ((i + j + 2) - (i - j) > 1)
                    m[s.substr(i - j,
                         (i + j + 2) - (i - j))]++;
 
            } else
                break;
        }
    }
    return m.size();
}

int main()
{

    FastIO;

    int n;
    cin>>n;

    int t = 1;

    while (n--)
    {
        
        string str;

        int N;
        cin>>N;

        
        
        int sub_N = N;
        int count = 0;
        if(N == 1) count = 1;

        cin.ignore();

        cin>>str;

        int x,y;

        for (int i = 0; i < sub_N-1; i++)
        {
            cin>>x>>y;

            int sub = (y-x) + 1;

            string sub_str = str.substr(x-1, sub);

            int result = countPalindromes(sub_str);

            if(result > 0 ){
                count++;
            }

        }

        cout<<"Case "<<t<<": " << count<<"/"<<sub_N<< endl;

        t++;
    }
    
	return 0;
}