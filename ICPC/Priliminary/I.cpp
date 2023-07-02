#include <bits/stdc++.h>
using namespace std;
int main() {
   int x,y;
    while(cin>>x>>y && x!=0 && y!=0){
    float high=0,ch;
   float a=x,b=y;
    float c=a/2;
    high =a+b;
    for(float i=c;i<(c+a/2);i=i+0.1){
        ch=b-sqrt(i*i-(a-i)*(a-i))+2*i;
        if(ch<high)high=ch;
    }
   printf("%.2f",high);
   cout<< "00\n";
    }
    return 0;
}