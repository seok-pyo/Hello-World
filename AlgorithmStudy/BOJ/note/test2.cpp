#include <stdio.h>
#include <vector>
#include <deque>
using namespace std;
int main(){
    int n, i, j, t, num, m, c, res;

    scanf("%d", &n);

    vector<int> type(n);
    vector<deque<int> > list(n+1);

    for(i=0; i<n; i++){
        scanf("%d", &t);
        type[i] = t;
    }

    for(i=0; i<n; i++){
        scanf("%d", &num);
        list[i].push_back(num);
    }

    scanf("%d", &m);

    vector<int> input(m);

    for(i=0; i<m; i++){
        scanf("%d", &c);
        input[i] = c;
    }

    vector<int> ans;

    for(j=0; j<m; j++){
        int cnt = 0;
        list[cnt].push_back(input[j]);
        while(cnt != n){
            if(type[cnt] == 0) {
                res = list[cnt].front();
                list[cnt].pop_front();
            } else {
                res = list[cnt].back();
                list[cnt].pop_back();
            }
            cnt++;
            list[cnt].push_back(res);
        }
        printf("%d ", res);
    }
    return 0;
}

