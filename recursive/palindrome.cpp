#include <bits/stdc++.h>

using namespace std;

int isPali(string str, int left, int right){

    return ( (left >= right) || (str[left] == str[right] && isPali(str, left+1, right-1)));
}

int main()
{
    string str; cin>>str;

    if(isPali(str,0,str.length()-1)){
        cout<<"Palindrome"<<endl;
    }
    else cout<<"Not Palindrome"<<endl;

    return 0;
}