#include <stdio.h>
int map[30][30], ch[30], min = 2147000000, n, sum=0;
void DFS(int v){
    int i;
    if(v == n){
        min = min > sum ? sum : min;
    } else {
        for(i=1; i<=n; i++){
            if(map[v][i]!=0 && ch[i] == 0){
                ch[i] = 1;
                sum += map[v][i];
                DFS(i);
                ch[i] = 0;
                sum -= map[v][i];
            }
        }
    }
}
int main(){
    freopen("input.txt", "rt", stdin);
    int m, i, a, b, c;
    scanf("%d %d", &n, &m);
    for(i=1; i<=m; i++){
        scanf("%d %d %d", &a, &b, &c);
        map[a][b] = c;
    }
    ch[1] = 1;
    DFS(1);
    printf("%d\n", min);
    return 0;
}
