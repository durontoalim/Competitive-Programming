#include <iostream>

using namespace std;

int main(){

    int N,i,j;
    int temp=0;
    cin>>N;

    int count[N];

    int array[N][4];

    for(i=0;i<N;i++){

        cin>>array[i][0]>>array[i][1]>>array[i][2]>>array[i][3];

        count[i] =( array[i][0]*array[i][1] ) / ( array[i][2]*array[i][3] );
    }

    for(i=0; i<N; i++){
        cout<<count[i]<<endl;
    }


    return 0;

}