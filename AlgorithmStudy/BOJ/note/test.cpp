#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;
vector<int> res;
queue<int> Q;
int main(){
    int n, k, cnt=0, f, i;
    scanf("%d %d", &n, &k);
    for(i = 1; i<=n; i++){
        Q.push(i);
    }
    while(!Q.empty()){
        cnt++;
        f = Q.front();
        if(cnt!=k){
            Q.push(f);
        } else {
            res.push_back(f);

            cnt = 0;
        }
        Q.pop();
    }
    printf("<");
    for(i = 0; i<n; i++){
        printf("%d", res[i]);
        if(i < res.size()-1){
            printf(", ");
        }
    }
    printf(">\n");
    return 0;
}
