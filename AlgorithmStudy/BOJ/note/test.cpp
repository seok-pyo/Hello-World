#include <stdio.h>
#include <vector>
using namespace std;
// int main(){
//     printf("|\\_/|\n");
//     printf("|q p|   /}\n");
//     printf("( 0 )\"\"\"\\\n");
//     printf("|\"^\"`    |\n");
//     printf("||_/=\\\\__|\n");
//     return 0;
// }

int main(){
    int a, b, i;
    vector<int> ch;
    while(1){
        scanf("%d %d", &a, &b);
        if(a==0 && b==0) break;
        if(b%a==0){
            ch.push_back(1);
        } else if(a%b==0){
            ch.push_back(2);
        } else {
             ch.push_back(3);
           
        }
    }

    for(i=0; i<ch.size(); i++){
        if(ch[i]==1){
            printf("factor\n");
        } else if(ch[i]==2) {
            printf("multiple\n");
        } else if(ch[i]==3) {
            printf("neither\n");
        }
    }
    return 0;
}
