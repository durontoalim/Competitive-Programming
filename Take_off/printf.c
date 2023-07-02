#include <stdio.h>


int main()
{
    int a,b,c,O,E,N,i,j;

    int count =0;
    int counter =0;
    int countscan;

    scanf("%d",&N);

    int array[N];

    for(i=0;i<N;i++){

        scanf("%d",&array[i]);
    }

    for(i=0; i<N;i++){
        // printf("%d ", array[i]);

        if(array[i]%2 == 0){
            count += 1;

            printf("%d ",array[i]);
        }
        printf("\n");
    }
    printf("%d", count);
    




    return 0;
}
