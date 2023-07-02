#include <bits/stdc++.h>

using namespace std;


int prime(int n){
    
    int ck = 0;

    for (int i = 2; i < n; i++)
    {
        if(n%i == 0){
            ck++;
            break;
        }
    }

    if(ck > 0){
        return ck;
    }

    return ck;
    

}

int main()
{
    int N;
    cin>>N;

    while (N--)
    {
        int begin = 1;
        int br = 0;

        for (int i = 2; i <= N ; i++)
        {
            int sum = begin+i;

            int ck = prime(sum);

            if(ck == 1){
                cout<<i<<" ";
                br = 1;            
            }

            begin = sum;
        }
        
    }
    
    

    return 0;
}