#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

int main(){
    freopen("input.txt", "rt", stdin);
    int k, i, num, length, j;
    scanf("%d", &k);
    vector<string> w(k);
    int res[k];
    for(i=0; i<k; i++){
        stack<int> S;
        cin >> w[i];
        for(j=0; j < w[i].length(); j++){
            if(w[i][j]=='(') S.push(w[i][j]);
            else if(w[i][j]==')') {
                if(S.empty() || S.top() != '('){
                    res[i] = 0;
                    break;
                }
                S.pop();
            }
        }
        if(S.empty() && res[i] != 0) res[i] = 1;
    }

    for(i=0; i<k; i++){
        if(res[i] == 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
