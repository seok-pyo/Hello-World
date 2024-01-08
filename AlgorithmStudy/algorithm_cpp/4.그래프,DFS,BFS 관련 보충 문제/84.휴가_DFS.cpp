#include <stdio.h>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
int total=-2147000000, n;
vector<pair<int, int> > data;

void DFS(int L, int sum){
    if(L==n+1){
        if(sum > total) total = sum;
        // sum을 초기화하지 않아도 되는, 하지 않아야 하는 이유는 매번 최대값으로 갱신되기 때문이다.
    } else {
        // n+1까지만 확인할 수 있도록 조건을 제한하는 것!
        if(L+data[L].first <= n+1) DFS(L+data[L].first, sum+data[L].second);
        // 다음날의 페이를 더하지 않는 날은 그냥 sum으로 넘겨준다.
        DFS(L+1, sum);
    }
}
int main(){
    freopen("input.txt", "rt", stdin);
    scanf("%d", &n);
    int i, t, p;
    //data.resize(n+1);
    data.push_back(make_pair(0,0));
    for(i=1; i<=n; i++){
        scanf("%d %d", &t, &p);
        //data[i] = make_pair(t, p);
        data.push_back(make_pair(t, p));
    }
    DFS(1, 0);    
    printf("%d\n", total);
    return 0;
}
