#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;

    cin>>a>>b>>c;

    int x = a+b*c;
    int y = a*(b+c);
    int z = a* b * c;
    int zz = (a+b) * c;

    int max = 0;

    if(x > y && x > z && x > zz ){
        cout<<x<<endl;
    }
    else if( y > x && y > z && y >> zz){
        cout<<y<<endl;
    }
    else if(z > x && z > y && z > zz){
        cout<<z<<endl;
    }
    else if(zz > x && zz> y && zz>z ){
        cout<<zz<<endl;
    }

    return 0;
}