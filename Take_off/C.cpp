#include <iostream>

using namespace std;

int main()
{


    int A,B,C,D,E;
    cin>>A>>B>>C>>D>>E;

    if(A>B && A>C && A>D && A>E){
        cout<<"NVOrder - "<<A*2000<<"$"<<endl;
    }else if(B>A && B>C && B>D && B>E){
        cout<<"NVParaboyyy6 - "<<B*2000<<"$"<<endl;
    }else if(C>A && C> B && C>D && C>E){
        cout<<"NRxFROZENXz - "<<C*2000<<"$"<<endl;
    }else if(D>A && D> B && D>C && D>E){
        cout<<"NAVIMATIC666 - "<<D*2000<<"$"<<endl;
    }else{
        cout<<"STEDaoShi - "<<E*2000<<"$"<<endl;
    }


    return 0;
}
