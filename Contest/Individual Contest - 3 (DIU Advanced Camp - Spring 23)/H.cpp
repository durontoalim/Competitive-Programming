#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t; cin>>t;
    int cnt = 1;
    while (t--)
    {
        cout<<"Case "<<cnt<<": "<<endl;
        int n,k; cin>>n>>k;

        deque<int>q;

        for (int i = 0; i < k; i++)
        {
            string str; cin>>str;
            int x; 
            if(str != "popLeft" && str != "popRight") cin>>x;
            

            if(str == "pushLeft"){
                if(q.size() >= n){
                    cout<<"The queue is full"<<endl;
                    continue;
                }
                q.push_front(x);
                cout<<"Pushed in left: "<<x<<endl;
            }

            if(str == "pushRight"){
                if(q.size() >= n){
                    cout<<"The queue is full"<<endl;
                    continue;
                }
                q.push_back(x);
                cout<<"Pushed in right: "<<x<<endl;
            }
            if(str == "popLeft"){
                if(q.empty()){
                    cout<<"The queue is empty"<<endl;
                    continue;
                }
                
                cout<<"Popped from left: "<<*q.begin()<<endl;
                q.pop_front();
            }

            if(str == "popRight"){
                if(q.empty()){
                    cout<<"The queue is empty"<<endl;
                    continue;
                }
               
                cout<<"Popped from right: "<<q.back()<<endl;
                q.pop_back();
            }
        }

        cnt++;
        
    }
    

    return 0;
}