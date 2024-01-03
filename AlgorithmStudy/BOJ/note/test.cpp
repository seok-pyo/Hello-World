#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

int main(){
    int k, i, j;
    cin >> k;
    vector<string> w(k);
    vector<int> res(k);
    for(i=0; i<k; i++){
        bool isBal = true;
        stack<char> S;
        cin >> w[i];
        for(j=0; j < w[i].length(); j++){
            if(w[i][j]=='(') S.push(w[i][j]);
            else if(w[i][j]==')') {
                if(S.empty() || S.top() != '('){
                    isBal = false;
                    break;
                }
                S.pop();
            }
        }
        if(S.empty() && isBal) {
            res[i] = 1;
        } else {
            res[i] = 0;
        }
    }

    for(i=0; i<k; i++){
        if(res[i] == 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
