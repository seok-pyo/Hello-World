#include <stdio.h>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;
int main(){
    stack<int> s;
    vector<int> res;
    int n, i, a, p;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a);
        if(a==1){
            scanf("%d", &p);
            s.push(p);
        } 
        if(a==2){
            if(!s.empty()) {
                res.push_back(s.top());
                //printf("%d\n", s.top());
                s.pop();
            } else {
                res.push_back(-1);
                //printf("-1\n");
            }
        } 
        if(a==3){
            //printf("%lu\n", s.size());
            res.push_back(s.size());
        } 
        if(a==4){
            if(s.empty()) {
                // printf("%d\n", 1);
                res.push_back(1);
            } else {
                res.push_back(0);
                // printf("%d\n", 0);
            }
        } 
        if(a==5){
            if(!s.empty()) {
                res.push_back(s.top());
                //printf("%d\n", s.top());
            }
            else {
                res.push_back(-1);
                //printf("%d\n", -1);
            }
        }

    } 
    for(i=0; i<res.size(); i++){
        printf("%d\n", res[i]);
    }
    return 0;
}


