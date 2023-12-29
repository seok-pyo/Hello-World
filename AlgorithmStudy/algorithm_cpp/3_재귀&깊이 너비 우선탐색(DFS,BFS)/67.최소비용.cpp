#include <stdio.h>
int map[30][30], ch[30], min = 2147000000, n;
void DFS(int v, int sum){
    int i;
    if(v == n){
        min = min > sum ? sum : min;
    } else {
        for(i=1; i<=n; i++){
            if(map[v][i]!=0 && ch[i] == 0){
                ch[i] = 1;
                DFS(i, sum+map[v][i]); // 덧셈할당연산자를 사용하게 되면, sum이 for 
                // 반복문 안에서 계속 누적되어서 DFS를 실행했을 때 원하는 답을 구할 수 없다.
                ch[i] = 0;
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
    DFS(1, 0);
    printf("%d\n", min);
    return 0;
}
