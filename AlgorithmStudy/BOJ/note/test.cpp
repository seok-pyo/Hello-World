#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

int main(){
    string w;
    int small, i; 
    int large, ch;
    int flag;
    vector<int> res;
    while(1){
        stack<char> Q;
        getline(cin, w);
        if(w=="."){
            break;
        } else {
            flag = 0;
            for(i=0; w[i]!='\0'; i++){
                if(w[i]=='('){
                    Q.push(w[i]);
                } else if (w[i]=='['){
                    Q.push(w[i]);
                } else if (w[i]==')'){
                    if(Q.empty()) {
                        flag = 1;
                    } else {
                        if(Q.top()=='('){
                            Q.pop();
                        } else {
                            flag = 1;
                        }
                    }
                } else if (w[i] == ']'){
                    if(Q.empty()){
                        flag = 1;
                    } else {
                        if(Q.top()=='['){
                            Q.pop();
                        } else {
                            flag = 1;
                        }
                    }
                }
            }
            if(!Q.empty()) flag = 1;
            res.push_back(flag);
        }
    }  

    for(i=0; i<res.size(); i++){
        if(res[i]==1) printf("no\n");
        else printf("yes\n");
    }

    return 0;
}


