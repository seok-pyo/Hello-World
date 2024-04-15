// 재귀함수(recursion)는 정의 단계에서 자신을 재참조하는 함수
// include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// int fact_rec(int n){
//     if(n==1 || n == 0) return 1;
//     return n * fact_rec(n-1);
// }

// int n = 5;
// int main(){
//     cout << fact_rec(n) << '\n';
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

void printV(vector<int> &v){
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main(){
    int a[3] = {1,2,3};
    vector<int> v;

    for(int i = 0; i<3; i++) v.push_back(a[i]);

    do{
        printV(v);
    }while(next_permutation(v.begin(), v.end()));
    cout << "-----------" << "\n";


    return 0;
}


