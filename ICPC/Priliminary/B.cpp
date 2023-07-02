#include <iostream>

using namespace std;

#define FastIO                      \
    ios::sync_with_stdio(false);    \
    cin.tie(0);                     \
    cout.tie(0);                    \

int main()
{
    FastIO;

    int N;
    cin>>N;

    int t = 1;


    while(N--){

        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a < d) a = d;
        if(b < d) b = d;
        if(c < d) c = d;

        

        if((a+b+c) % 3 == 0){
            cout<<"Case "<<t<<": "<<"Peaceful"<<endl;
        }
        else cout<<"Case "<<t<<": "<<"Fight"<<endl;


        t++;
    }

    return 0;
}