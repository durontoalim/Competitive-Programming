#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int t = 1;
    
    while (N--)
    {
        int result = 0;
        /* code */
        int n;
        cin>>n;
        int sum = 0;
        for (int i = 0; i < n-1; i++)
        {
            int a,b;
            cin>>a>>b;

            sum += a;
            sum  -= b;

            if(result < sum){
                result = sum;
            }
            
        }

        if(n <= 2) cout<<"Case "<<t<<": "<<result<<endl;
        else if(n > 2) cout<<"Case "<<t<<": "<<result<<endl;


        t++;

        
        
    }
    

    return 0;
}