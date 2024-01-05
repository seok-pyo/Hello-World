#include <stdio.h>
#include <vector>
#include <deque>
using namespace std;
vector<int> res;
deque<int> ball;
deque<int> order;
int main(){
    int n, i, a, f, b;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d", &a);
        ball.push_back(a);
    }
    for(i=1; i<=n; i++){
        order.push_back(i);
    }
    int nf, nb;
    f = order.front();
    while(order.size()!=0){
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
        res.push_back(f);
        f = order.front();
    }
    
    for(i=0; i<n; i++){
        printf("%d ", res[i]);
    }
    return 0;
}

