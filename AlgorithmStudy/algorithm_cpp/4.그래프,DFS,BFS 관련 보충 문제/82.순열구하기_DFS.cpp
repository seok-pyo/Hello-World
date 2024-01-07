#include <stdio.h>

int ch[16], arr[16], res[16], R, N, cnt=0;
void DFS(int L){
    if(L==R){
        for(int j=0; j<R; j++){
            printf("%d ", res[j]);
        }
        puts("");
        cnt++;
    } else {
        for(int i=1; i<=N; i++){
            if(ch[i]==0){
                ch[i]=1;
                res[L] = arr[i];
                DFS(L+1);
                ch[i]=0;
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
    
    DFS(0);
    printf("%d\n", cnt);
    return 0;
}
