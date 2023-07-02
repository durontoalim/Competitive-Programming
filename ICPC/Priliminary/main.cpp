#include<iostream>

using namespace std;

#define FastIO                      \
    ios::sync_with_stdio(false);    \
    cin.tie(0);                     \
    cout.tie(0);                    \


int main()
{
    FastIO;

    int t,cs=1;
    cin >> t;
    while(t--){
        int a,b,c,n,k,p,q,r;
        cin >> a >> b >> c >> k;

        n=a+b+c;
        int x=n/3;
        if(n%3!=0){
            cout << "Case " << cs << ": " << "Fight" << endl;
        }
        else{
                p=abs(x-a);
                q=abs(x-b);
                r=abs(x-c);
            if(p%k==0 && q%k==0 && r%k==0){
                cout << "Case " << cs << ": " << "Peaceful" << endl;
            }
            else{
                cout << "Case " << cs << ": " << "Fight" << endl;
            }
        }
        cs++;
    }
    return 0;
}