#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    int N;
    while(cin>>N && N != 0){

        int arr[N],temp,count = 0,count2=0, index_min;

        for (int i = 0; i < N; i++)
        {
            cin>>arr[i];
        }
      
        for (int i = 1; i < N; i++)
        {
            for (int j = 0; j < N-1; j++)
            {
                if( arr[j] > arr[j + 1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    count++;
                }
            }
        }

        cout<<"Minimum exchange operations : "<<count<<endl;
    }
    
    
    return 0;
}