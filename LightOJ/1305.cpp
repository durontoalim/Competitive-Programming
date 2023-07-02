#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int cnt;
int test_case;

int hello()
{
    int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;
    cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
    Dx = Cx-(Bx-Ax);
    Dy = (Cy-By) + Ay;

    cout<<Dx<<" "<<Dy<<" ";
   
    int area = 0.5*abs( ((Ax*By)+(Bx*Cy)+(Cx*Dy)+(Dx*Ay)) - ((Ay * Bx)+ (By*Cx)+(Cy*Dx)+(Dy*Ax)) );
    cout<<area<<endl;

    return 0;
}


int32_t main()
{
    
    FastIO();
    int cnt = 1;
    cin>>test_case;
    while (test_case--)
    {
        cout<<"Case "<<cnt<<": ";
        hello();
        cnt++;
    }

    return 0;
}