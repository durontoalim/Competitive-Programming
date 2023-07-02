#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

#define PI acos(-1)

int main()
{

    int N,n;
    double r,q,circle_area,green_area;
    
    cin>>N;

    while(N--){
        
        cin>>n;

        r = n*2/10.0;

        circle_area = PI * pow(r,2);
        q = 6.0*n/10;
        green_area = (n*q) - circle_area;


        cout<<fixed<<setprecision(2)<<circle_area<<" "<<green_area<<endl;
    }
    
    
    return 0;
}