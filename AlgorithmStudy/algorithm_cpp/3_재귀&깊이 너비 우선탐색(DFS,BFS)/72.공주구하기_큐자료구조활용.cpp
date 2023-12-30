#include <stdio.h>
#include <queue>
using namespace std;

int main(){
    freopen("input.txt", "rt", stdin);
    queue<int> Q;
    int n, k, cnt=0, ans;
    scanf("%d %d", &n, &k);
    for(int i=1; i<=n; i++){
        Q.push(i);
    }
    while(!Q.empty()){
        cnt++;
        if(cnt==k){
            Q.pop();
            cnt = 0;
        } else {
            ans = Q.front();
            Q.pop();
            Q.push(ans);
        }
    }
    printf("%d\n", ans);
    return 0;
}
