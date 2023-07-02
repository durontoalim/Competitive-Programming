#include <iostream>

using namespace std;

int main()
{

    int A,B,C,X,Y;
    cin>>A>>B>>C;

    X = (A/B)*5;
    Y = (A/C)*5;
    if(X>Y){
        cout<<Y<<" "<<X<<endl;
    }else{
        cout<<X<<" "<<Y<<endl;
    }

    return 0;
}
