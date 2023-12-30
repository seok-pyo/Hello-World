// 공주 구하기, 조세퍼스(시뮬레이션) 복습 🍎

#include <stdio.h>
#include <vector>
using namespace std;
int main(){
    freopen("r.txt", "rt", stdin);
    int n, k, pos=0, cnt=0, i, bp=0;
    scanf("%d %d", &n, &k);
    vector<int> ch(n+1);
    while(1){
        pos++;
        if(pos>n) pos = 1;
        if(ch[pos]==0){
            cnt++;
            if(cnt==k){
                ch[pos] = 1;
                cnt = 0;
                bp++;
            }
        }
        if(bp==n-1){
            break;
        }
    }
    for(i=1; i<=n; i++){
        if(ch[i]==0) {
            printf("%d\n", i);
        }
    }
    return 0;
}



