#include <iostream>
#include <cmath>

using namespace std;

int main(void){

    int N;
    cin>>N;

    if(0<=N && N<=15){
        cout<<"Troposphere"<<endl;
    }else if(16<=N && N<=50){
        cout<<"Stratosphere"<<endl;
    }else if(51<=N && N<=85){
        cout<<"Mesosphere"<<endl;
    }else if(86<=N && N<=500){
        cout<<"Thermosphere"<<endl;
    }else if(501<=N && N<=1000){
        cout<<"Exosphere"<<endl;
    }

    return 0;
}