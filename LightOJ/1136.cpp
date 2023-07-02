#include <bits/stdc++.h>
#define case "Case "
#define case_dot ": "
using namespace std;

int main()
{
    int N; cin>>N;
    int cnt  = 1;
    while (N--)
    {
        int a,b; cin>>a>>b;
        int n;
        if(b%3 == 0){
            n = b/3;
        }
        else{
            n = (b/3)+1;
        }
        n = b-n;
            
        int first_prefix = (a-1);
        int first_suffix;
        if(first_prefix%3 == 0){
            first_suffix = first_prefix/3;
        }
        else{
            first_suffix = (first_prefix/3)+1;
        }

        int first_prefix_true = first_prefix - first_suffix;
        cout<<case<<cnt<<case_dot<<(int)n-first_prefix_true<<endl;
        
        cnt++;
    }
    

    return 0;
}