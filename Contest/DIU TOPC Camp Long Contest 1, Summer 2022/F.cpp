#include<bits/stdc++.h>

using namespace std;

#define endl "\n" 


int main()
{

    

    int a,b,c,max;

    while(cin>>a>>b>>c && a!=0 && b != 0 && c != 0){
        
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        
        if(a>b && a > c){
            
            max = a;
        }
        else if(b>a && b > c){
            max = b;
            
        }
        else{
            max = c;
        }

        if(max == a){
            int result = pow(b,2) + pow(c,2);
            if(result == pow(a,2) ){
                cout<<"right"<<endl;
            }
            else{
                cout<<"wrong"<<endl;
            }
        }
        else if(max == b){
            int result = pow(a,2) + pow(c,2);
            if(result == pow(b,2) ){
                cout<<"right"<<endl;
            }
            else{
                cout<<"wrong"<<endl;
            }
        }
        else if(max == c){
            int result = pow(a,2) + pow(b,2);
            if(result == pow(c,2) ){
                cout<<"right"<<endl;
            }
            else{
                cout<<"wrong"<<endl;
            }
        }


    }

    
    
    return 0;
}
