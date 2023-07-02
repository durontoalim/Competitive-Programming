#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    int N,t=1;
    cin>>N;

    getchar();
    getchar();

    while (N--)
    {

        int DD,MM, YY;
        int DD2,MM2, YY2;
        char ch,ch2;
        char ch3,ch4;

        cin>>DD>>ch>>MM>>ch2>>YY;
        cin>>DD2>>ch3>>MM2>>ch4>>YY2;

        int year,day,month;

        year = YY - YY2;

        if(MM >= MM2){
            month = MM - MM2;
        }
        else if(MM < MM2){
            year = year - 1;
            MM = MM + 12;

            month = MM - MM2;
        }

        if(DD >= DD2){
            day = DD - DD2;
        }
        else if(DD < DD2){
            month = month - 1;
            DD = DD + 30;
            day = DD - DD2;
        }

        if(month < 0){
            year -= 1;
        }

        if(year < 0){
            cout<<"Case #"<<t<<": "<<"Invalid birth date\n";
        }
        else if(year > 130){
            cout<<"Case #"<<t<<": "<<"Check birth date\n";
        }
        else{
            cout<<"Case #"<<t<<": "<<year<<endl;
        }

        t++;
    }
    
    
    return 0;
}