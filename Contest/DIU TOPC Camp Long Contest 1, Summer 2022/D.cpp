#include<bits/stdc++.h>

using namespace std;

#define endl "\n" 


int gcd(int n1, int n2){
    int temp;
    while(n2 != 0){
        temp = n1%n2;
        n1 = n2;
        n2 = temp;
    }

    return n1;
}



int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    while(cin>>N && N != 0){

        int G=0;
        for(int i=1;i<N;i++){
            for(int j=i+1;j<=N;j++)
            {
                G+= gcd(i,j);
            }
        }

        cout<<G<<endl;

    }
    
    
    return 0;
}
