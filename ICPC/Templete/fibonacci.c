#include <stdio.h>

int main()
{
    long long int N;
    scanf("%lld",&N);

    long long int arr[N];
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < N; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    long long int result = arr[N-1] % 1000000007;

    printf("%lld\n",result);
    

    return 0;
}