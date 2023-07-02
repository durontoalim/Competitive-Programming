while True:
    try:
        N = int(input())
        
        arr = { 0: 0, 1: 1}
        
        for i in range(2,N+1):
            arr[i] = arr[i-1] + arr[i-2]
            
        print(arr[N-1] % 1000000007)
        
    except EOFError:
        break