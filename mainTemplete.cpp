#include<bits/stdc++.h>

using namespace std;

#define int long long

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef double dl;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define left(node) (node*2)
#define right(node) (node*2+1)
#define mx_int_prime 999999937

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define FastIO                      \
    ios::sync_with_stdio(false);    \
    cin.tie(0);                     \
    cout.tie(0);                    \



#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;


int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
//int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
//int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

bool cmp(int a, int b){
    if(a > b){
        return true;
    }
    else return false;
}



void sieve(int n);
bool isPrime(int num);
int modular(string str,int mod );
int digitSum(int n);
int GCD(int upper, int lower);
int fastPow(int n, int e);



int32_t main()
{
    FastIO;


    int result = GCD(60,13);

    cout<<result<<endl;

    return 0;
}





// Prime

#define M 100000000
int marked[M/64 + 2];

#define on(x) (marked[x/64] & (1<<((x%64)/2)))
#define mark(x)  marked[x/64] |= (1<<((x%64)/2))

void sieve(int n) {
  for (int i = 3; i * i < n; i += 2) {
    if (!on(i)) {
      for (int j = i * i; j <= n; j += i + i) {
        mark(j);
      }
    }
  }
}

bool isPrime(int num) {
  return num > 1 && (num == 2 || ((num & 1) && !on(num))); 
}

// int modular(string str,int mod ){
//   int N = 0,i;
//     for(i=0; i<str.length() ; i++){
//         N =( N*10 + (int(str[i]) - 48) ) % mod;
//     }

//     return N;
// }

int digitSum(int n){

  int sum = 0;
  while (n != 0)
  {
    int temp = n%10;
    sum += temp;
    n /= 10;
  }

  return sum;
  
}


int GCD(int upper, int lower){

  while (lower != 0)
  {
    int temp = upper%lower;
    upper = lower;
    lower = temp;
  }

  return upper;
  
}

#define mod 100000

int fastPow(int n, int e){                 // pow() function
    if(e==0)return 1 % mod;
    int l = fastPow(n,e/2);
    int ans=(l*l)%mod;
    if(e%2==0)return ans;
    return (ans*(n%mod))%mod;
}

int devisorSumCount(int n)  // 15
{
    int x=1;
    for(int i=2; i<=sqrt(n); i++)
    {
        int cnt=0;
        if (n%i==0)
        {
          while(n%i==0) n/=i , cnt++;
        }
        x*=(cnt+1);
    }
    if (n>1)x*=2;
    return x;
}

// Lucj=key Pair N = 5 ; all pair b%a == 0 count

void pre_cal(){
    for (int i=2;i<maxn;i++)
    {
        for (int j=i;j<maxn; j+=i)div_cnt[j]++;
    }
    for (int i=1;i<maxn;i++)ans[i]+=(ans[i-1]+div_cnt[i]);
}