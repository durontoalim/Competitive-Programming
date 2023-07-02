#include <bits/stdc++.h>


#define FastIO                      \
    ios::sync_with_stdio(false);    \
    cin.tie(0);                     \
    cout.tie(0);                    \

const int NN = 1e8;

using namespace std;


#define M 100000000
bool marked[M];

bool isPrime(int n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  return marked[n] == false;
}

void sieve(int n) {
  for (int i = 3; i * i <= n; i += 2) {
    if (marked[i] == false) { // i is a prime
      for (int j = i * i; j <= n; j += i + i) {
        marked[j] = true;
      }
    }
  }
}

int main()
{

    vector<int>v;

    int N;
    cin>>N;


    sieve(NN);

            for (int i = 2; i < NN; i++)
            {
                if(isPrime(i) == true){
                    v.push_back(i);
                }
            }


    while (N--)
    {

        int n;
        cin>>n;

        int flag = 0;
        for (int i = 0; i < n/5 ; i++)
        {
            if(v[i] > n) break;

            for (int j = 0; j < n/5 ; j++)
            {
                long long int sum = v[i]+v[j];
                if(sum == n){
                    flag = 1;
                    break;
                }
            }

        }

        if(flag == 1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }



    return 0;
}
