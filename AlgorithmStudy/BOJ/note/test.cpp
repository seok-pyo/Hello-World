#include <stdio.h>
#include <vector>
#include <deque>
using namespace std;
vector<int> ball;
deque<int> order;
int main(){
    int n, i, a, f, b;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d", &a);
        ball.push_back(a);
        order.push_back(i);
    }
    int nf, nb;
    f = order.front();
    while(!order.empty()){
        if(ball[f-1]>0){
            for(i=0; i<ball[f-1]; i++){
                if(i==0) {
                    order.pop_front();
                } else {
                    nf = order.front();
                    order.pop_front();
                    order.push_back(nf);
                } 
            }
        } else {
            for(i=0; i<-ball[f-1]; i++){
                if(i==0){
                    order.pop_front();
                } 
                nb = order.back();
                order.pop_back();
                order.push_front(nb);
            }
        }
        printf("%d ", f);
        f = order.front();
    }
    return 0;
}

