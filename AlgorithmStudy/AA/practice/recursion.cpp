
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

//////////// 순열 구하기
// #include <iostream>
// #include <vector>
// using namespace std;

// void printV(vector<int> &v){
//     for(int i = 0; i<3; i++){
//         cout << v[i] << " ";
//     }
//     cout << "\n";
// }

// int main(){
//     int a[5] = {1,2,3,4,5};
//     vector<int> v;

//     for(int i = 0; i<5; i++) v.push_back(a[i]);

//     do{
//         printV(v);
//     }while(next_permutation(v.begin(), v.begin()+3));
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
//     for(int i = start; i<n; i++){
//         b.push_back(a[i]);
//         combi(i+1,b);
//         b.pop_back();
//     }
//     return;
// }

// int main(){
//     vector<int> b;
//     combi(0, b);
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// // 문자열로 표현된 두 정수를 더하는 함수
// string addStrings(string num1, string num2) {
//     reverse(num1.begin(), num1.end());
//     reverse(num2.begin(), num2.end());

//     int carry = 0;
//     string result = "";

//     int i = 0, j = 0;
//     while (i < num1.size() || j < num2.size() || carry) {
//         if (i < num1.size()) carry += num1[i++] - '0';
//         if (j < num2.size()) carry += num2[j++] - '0';
//         result.push_back(carry % 10 + '0');

//         cout << carry % 10 + '0' << '\n';
//         cout << result[0] << "-------" << '\n';

//         carry /= 10;
//     }

//     reverse(result.begin(), result.end());

//     return result;
// }

// int main() {
//     // string num1 = "123";
//     // string num2 = "9";

//     // string sum = addStrings(num1, num2);

//     // cout << "Sum: " << sum << endl;
//     string a = "";
//     a.push_back(50);
//     cout << a[0] << '\n';

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int a[20];
// int n, r;

// void DFS(int s, int L){
// 	if(L==r){
// 		for(int j = 0; j<r; j++){
// 			cout << a[j] << ' ';
// 		}
// 		cout << endl;
// 	}
// 	else {
// 		for(int i = s; i<n; i++){
// 			a[L] = i;
// 			DFS(i+1, L+1);
// 		}
// 	}
// }

// int main(){
// 	cin >> n >> r;
// 	DFS(0, 0);
// 	return 0;
// }


// #include <iostream>
// using namespace std;
// int n, r, cnt = 0;
// int a[20], res[20], ch[20];
// void DFS(int L){
// 	if(L==r){
// 		for(int j = 0; j < L; j++){
//             cout << res[j];
//         }
//         cnt++;
//         puts("");
// 	} 
// 	else {
// 		for(int i = 1; i<=n; i++){
// 			if(ch[i] == 0){
// 				res[L] = a[i];
// 				ch[i] = 1;
// 				DFS(L+1);
// 				ch[i] = 0;
// 			}
// 		}
// 	}
// }

// int main(){
// 	cin >> n >> r;
// 	for(int i = 1; i<=n; i++){
// 		cin >> a[i];
// 	}
// 	DFS(0);
// 	cout << cnt << '\n';
// 	return 0;
// }

// #include <iostream>
// using namespace std;
// int a[5] = {1,2,3,23,3};
// int n = 5, r = 3;
// void print(){
// 	for(int i = 0; i<r; i++){
// 		cout << a[i] << " ";
// 	}
// 	cout << endl;
// }
// void permu(int n, int r, int depth){
// 	if(r==depth){
// 		print();
// 		return;
// 	}
// 	for(int i = depth; i<n; i++){
// 		swap(a[i], a[depth]);
// 		permu(n, r, depth + 1);
// 		swap(a[i], a[depth]);
// 	}
// 	return;
// }
// int main(){
// 	permu(n,r,0);
// 	return 0;
// }

// #include <iostream>
// using namespace std;
// int a[3][3] = {{1,2,3}, {1,2,3}, {1,2,3}};

// void go(int a[][3]){
// 	a[2][2] = 100;
// }

// int main(){
// 	go(a); cout << a[2][2] <<'\n';
// 	return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<string> split(string input, string delimiter){
// 	vector<string> ret;
// 	long long pos = 0;
// 	string token = "";
// 	while((pos = input.find(delimiter)) != string::npos){
// 		token = input.substr(0, pos);
// 		ret.push_back(token);
// 		input.erase(0, pos + delimiter.length());
// 	}
// 	ret.push_back(input);
// 	return ret;
// }

// int main(){
// 	string s = "abcfabcfabc";
// 	string d = "f";
// 	vector<string> a = split(s, d);
// 	for(string b : a) cout << b << '\n';
// 	return 0;
// }


