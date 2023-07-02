#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    cin.ignore();
    while (N--)
    {
        stack <char> stack_two;

        string str;
        getline(cin,str);

        int len = str.length();
        
        stack<char>stack;

        for (int i = 0; i < len; i++)
        {

            if(str[i] == '(' ){
                stack.push(str[i]);
            }
            
            if(str[i] == '['){
                stack.push(str[i]);
            }

            if(str[i] == ')' ){
                stack_two.push(str[i]);

                if ( stack.empty() ) break;

                char ch = stack.top();

                if( ch == '(' ){

                    stack_two.pop();
                    
                    stack.pop();
                    
                }

            }

            if(str[i] == ']'){
                
                stack_two.push(str[i]);

                if(stack.empty() ) break;
                
                char ch = stack.top();

                if( ch == '[' ){
                   
                    stack_two.pop();
                    
                    stack.pop();
                }

            }
            
        }

        if(stack.empty() && stack_two.empty() ){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No\n";
        }
    }

    return 0;
}