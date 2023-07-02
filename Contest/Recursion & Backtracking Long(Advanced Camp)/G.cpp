#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (cin>>n)
    {

       if((n>=0 && n<=7) || (n<0 && n%2==0)) printf("Underflow!\n");
        else if(n==8) cout<<"40320\n";
        else if(n==9) cout<<"362880\n";
        else if(n==10) cout<<"3628800\n";
        else if(n==11) cout<<"39916800\n";
        else if(n==12) cout<<"479001600\n";
        else if(n==13) cout<<"6227020800\n";
        else cout<<"Overflow!\n";
    }
    

    return 0;
}