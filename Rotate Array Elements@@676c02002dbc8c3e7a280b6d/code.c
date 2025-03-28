#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        for(int i=0;i<N;i++){
            int temp=arr[i];
            arr[i]=arr[N-1];
            arr[N-1]=temp;
        }
    }
    for(int i=0;i<N;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}