#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    double N;
    double pi = 3.1416;
    cin>>N;

    double r = N/2;
    double circle_half = (pi*(r*r))/2;
    double radius = (N*N);
    double area = (radius+ circle_half);

    cout<<fixed<<setprecision(2)<<area<<endl;


    return 0;

}