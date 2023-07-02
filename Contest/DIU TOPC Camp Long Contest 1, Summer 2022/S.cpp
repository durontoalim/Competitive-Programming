#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    int N;

    while(cin>>N && N != 0){

        int num,mod,sum = 0;
        num = N;

        int t = 1;

        if(num < 10){
            sum = num;
        }
        else{

            while(t){

                mod = num%10;

                sum += mod;

                num /= 10;
                if(num == 0 && sum > 9){
                    num = sum;
                    sum = 0;
                }
                if(num == 0 && sum < 10){
                    break;
                }
            }

        }
        cout<<sum<<endl;
    }
    
    return 0;
}