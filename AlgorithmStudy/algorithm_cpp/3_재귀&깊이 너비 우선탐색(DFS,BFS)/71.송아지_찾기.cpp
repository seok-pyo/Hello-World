#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

queue<int> Q;

int main(){
    freopen("input.txt", "rt", stdin);
    int s, e, i, x, dis, cnt = 1, sum;
    int move[4] = {-1, 1, -5, 5};
    scanf("%d %d", &s, &e);
    dis = e - s;
    int ch[dis];
    ch[1] = 1;
    ch[5] = 1;
    Q.push(1);
    Q.push(5);
    while(!Q.empty()){
        if(x == dis){
            break;
        }
        x = Q.front();
        Q.pop();
        for(i=0; i<4; i++){
            sum = x + move[i];
            if(sum > 0 && ch[sum] == 0){
                ch[sum] = 1;
                Q.push(sum);
            }
        }
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
