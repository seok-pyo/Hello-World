#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;
int main(){
    queue<int> q;
    vector<int> res;
    int n, i, p, num;
    string a;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        cin >> a;
        if(a=="push"){
            scanf("%d", &num);
            q.push(num);
        }
        if(a=="pop"){
            if(q.empty()){
                res.push_back(-1);
            } else {
                res.push_back(q.front());
                q.pop();
            }
        }
        if(a=="size"){
            res.push_back(q.size());
        }
        if(a=="empty"){
            if(q.empty()){
                res.push_back(1);
            } else {
                res.push_back(0);
            }
        }
        if(a=="front"){
            if(q.empty()){
                res.push_back(-1);
            } else {
                res.push_back(q.front());
            }
        }
        if(a=="back"){
            if(q.empty()){
                res.push_back(-1);
            } else {
                res.push_back(q.back());
            }
        }       
    }
    
    for(i=0; i<res.size(); i++){
        printf("%d\n", res[i]);
    }
    return 0;
}


