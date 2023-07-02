#include <iostream>

using namespace std;

int main()
{
    int a,x,y,i,temp,sum,j,k;
    cin>>a;
    int array[a];

    for(i=0;i<a;i++){
        cin>>x>>y;
        if(x>y){
        temp = x;
        x = y;
        y = temp;
    }
    for(j=x;j<=y;j++){
        sum +=j;
    }
    cout<<sum<<" "<<x<<endl;
    
    }
    

    // for(i=0;i<a;i++){
        
    // }

    return 0;
}
