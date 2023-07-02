#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin>>N;

    int t = 1;


    while(N--){

        int a,b,c;
        cin>>a>>b>>c;

        int sum = a+b+c;

        if(sum % 3 == 0){
            cout<<"Case "<<t<<": "<<"Peaceful"<<endl;
        }
        else cout<<"Case "<<t<<": "<<"Fight"<<endl;


        t++;
    }

    return 0;
}