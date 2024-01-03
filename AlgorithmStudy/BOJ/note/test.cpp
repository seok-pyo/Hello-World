#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;
int ch[1001];
stack<int> S;
int main(){
    int n, i, j, num, pos=1;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        ch[i] = i;
    }
    for(i=0; i<n; i++){
        scanf("%d", &num);
        S.push(num);
        while(!S.empty()){
            if(S.top()==ch[pos]){
                S.pop();
                pos++;
            } else {
                break;
            }
        }
    }

    if(S.empty()) printf("Nice\n");
    else printf("Sad\n");
    return 0;
}
