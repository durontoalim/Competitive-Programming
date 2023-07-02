#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{

    int N,t=1;
    cin>>N;

    cin.ignore();

    while(N--){
        
        string str;
        
        getline(cin,str);

        int len  = str.length();

        int sum = 0;
        for (int i = 0; i < len; i++)
        {
            if(str[i] == 'a'){
                sum +=1;
            }
            else if(str[i] == 'b'){
                sum += 2;
            }else if(str[i] == 'c'){
                sum += 3;
            }else if(str[i] == 'd'){
                sum += 1;
            }else if(str[i] == 'e'){
                sum += 2;
            }else if(str[i] == 'f'){
                sum += 3;
            }else if(str[i] == 'g'){
                sum += 1;
            }else if(str[i] == 'h'){
                sum += 2;
            }else if(str[i] == 'i'){
                sum += 3;
            }else if(str[i] == 'j'){
                sum += 1;
            }else if(str[i] == 'k'){
                sum += 2;
            }else if(str[i] == 'l'){
                sum += 3;
            }else if(str[i] == 'm'){
                sum += 1;
            }else if(str[i] == 'n'){
                sum += 2;
            }else if(str[i] == 'o'){
                sum += 3;
            }else if(str[i] == 'p'){
                sum += 1;
            }else if(str[i] == 'q'){
                sum += 2;
            }else if(str[i] == 'r'){
                sum += 3;
            }else if(str[i] == 's'){
                sum += 4;
            }else if(str[i] == 't'){
                sum += 1;
            }else if(str[i] == 'u'){
                sum += 2;
            }else if(str[i] == 'v'){
                sum += 3;
            }else if(str[i] == 'w'){
                sum += 1;
            }else if(str[i] == 'x'){
                sum += 2;
            }else if(str[i] == 'y'){
                sum += 3;
            }else if(str[i] == 'z'){
                sum += 4;
            }else if(str[i] == ' '){
                sum += 1;
            }
        }

        cout<<"Case #"<<t<<": "<<sum<<endl;
        t++;
        
    }
    
    
    return 0;
}