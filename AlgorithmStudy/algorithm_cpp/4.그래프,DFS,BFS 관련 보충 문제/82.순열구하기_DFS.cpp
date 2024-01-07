#include <stdio.h>

int ch[16], arr[16], R, N;
void DFS(int L, int s){
    int i;
    if(L==R){
        return;
    } else {
        printf("%d ", arr[s]);
        if(ch[s]==0){
            ch[s]=1;
            for(i=1; i<=N; i++){
                DFS(L+1, arr[L+1]);
            }
        }
    }
}
int main(){
    freopen("input.txt", "rt", stdin);
    int i , num;
    scanf("%d %d", &N, &R);
    for(i=1; i<=N; i++){
        scanf("%d", &num);
        arr[i] = num;
    }
    
    DFS(0,1);
    return 0;
}
