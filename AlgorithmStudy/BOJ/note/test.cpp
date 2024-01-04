#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;
int ch[1001];
queue<int> Q;
int main(){
    int n, tmp;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        Q.push(i);
    }
    while(1){
        if(Q.size()==1){
            break;
        }
        Q.pop();
        tmp = Q.front();
        Q.pop();
        Q.push(tmp);
    }
    printf("%d\n", Q.front());
    return 0;
}
