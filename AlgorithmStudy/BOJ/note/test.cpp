#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

int main(){
    int k, sum = 0, i, num, length;
    stack<int> S;
    scanf("%d", &k);
    for(i=0; i<k; i++){
        scanf("%d", &num);
        if(num == 0){
            S.pop();
        } else {
            S.push(num);
        }
    }
    while(!S.empty()){
        sum += S.top();
        S.pop();
    }
    printf("%d\n", sum);
    return 0;
}
