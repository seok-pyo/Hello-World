// 그래프 최단거리 복습(BFS) 🍎🍎🍎🍎🍎

#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

vector<int> map[30];
queue<int> Q;
int dis[30], ch[30];

int main(){
    freopen("r.txt", "rt", stdin);
    int n, m, a, b, x, i;
    scanf("%d %d", &n, &m);
    for(i=1; i<=m; i++){
        scanf("%d %d", &a, &b);
        map[a].push_back(b);
    }
    ch[1] = 1;
    Q.push(1);
    while(!Q.empty()){
        x = Q.front();
        Q.pop();
        for(i=0; i<map[x].size(); i++){
            if(ch[map[x][i]]==0){
                ch[map[x][i]] = 1;
                Q.push(map[x][i]);
                dis[map[x][i]] = dis[x] + 1;
            }
        }
    }
    for(i=2; i<=n; i++){
        printf("%d : %d\n", i, dis[i]);
    }
    return 0;
    }

