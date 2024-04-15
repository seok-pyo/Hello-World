
////////////// 재귀함수(recursion)는 정의 단계에서 자신을 재참조하는 함수
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

////////////// 순열 구하기
// #include <iostream>
// #include <vector>
// using namespace std;

// void printV(vector<int> &v){
//     for(int i = 0; i<v.size(); i++){
//         cout << v[i] << " ";
//     }
//     cout << "\n";
// }

// int main(){
//     int a[3] = {1,2,3};
//     vector<int> v;

//     for(int i = 0; i<3; i++) v.push_back(a[i]);

//     do{
//         printV(v);
//     }while(next_permutation(v.begin(), v.end()));
//     cout << "-----------" << "\n";

//     return 0;
// }


////////////// 조합 구하기
// #include <iostream>
// #include <vector>
// using namespace std;
// int n, r;
// // int ch[20];
// // vector<int> ch(20, 0);
// vector<int> ch;

// void DFS(int s, int L){
//     if(L==r){
//         for(int j = 0; j<L; j++){
//             cout << ch[j] << " ";
//         }
//         cout << endl;
//     } else {
//         for(int i = s; i<n; i++){
//             //ch[L] = i;
//             ch.push_back(i);
//             DFS(i+1, L+1);
//             ch.pop_back();
//         }
//     }
// }

// int main(){
//     cin >> n >> r;
//     DFS(0, 0);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int n = 5, k = 3, a[5] = {1,2,3,4,5};

// void print(vector<int> b){
//     for(int i : b) cout << i << " ";
//     cout << '\n';
// }

// void combi(int start, vector<int> b){
//     if(b.size() == k){
//         print(b);
//         return;
//     }
//     for(int i = start + 1; i<n; i++){
//         b.push_back(i);
//         combi(i,b);
//         b.pop_back();
//     }
//     return;
// }

// int main(){
//     vector<int> b;
//     combi(-1, b);
//     return 0;
// }

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// 문자열로 표현된 두 정수를 더하는 함수
string addStrings(string num1, string num2) {
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    int carry = 0;
    string result = "";

    int i = 0, j = 0;
    while (i < num1.size() || j < num2.size() || carry) {
        if (i < num1.size()) carry += num1[i++] - '0';
        if (j < num2.size()) carry += num2[j++] - '0';
        result.push_back(carry % 10 + '0');

        cout << carry % 10 + '0' << '\n';
        cout << result[0] << "-------" << '\n';

        carry /= 10;
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    // string num1 = "123";
    // string num2 = "9";

    // string sum = addStrings(num1, num2);

    // cout << "Sum: " << sum << endl;
    string a = "";
    a.push_back(50);
    cout << a[0] << '\n';

    return 0;
}








