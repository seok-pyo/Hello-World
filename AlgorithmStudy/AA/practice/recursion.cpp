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

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<string> split(const string& input, string delimiter){
//     vector<string> result;
//     auto start = 0;
//     auto end = input.find(delimiter);
//     cout << end << "this is end" << '\n';
//     while(end != string::npos){
//         result.push_back(input.substr(start, end - start));
//         start = end + delimiter.size();
//         end = input.find(delimiter, start);
//     }
//     result.push_back(input.substr(start));
//     return result;
// }

// int main(){
//     string a = "hellophello", d = "p";
//     vector<string> an = split(a, d);
//     for(string b : an) cout << b << '\n';
// }


// 문자열로 표현된 두 정수를 더하는 함수
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// string addStrings(string num1, string num2) {
//     reverse(num1.begin(), num1.end());
//     reverse(num2.begin(), num2.end());

//     int carry = 0;
//     string result = "";

//     int i = 0, j = 0;
//     while (i < num1.size() || j < num2.size() || carry) {
//         cout << 0 + '0' << " this is minus" << '\n';
//         if (i < num1.size()) carry += num1[i++] - '0';
//         if (j < num2.size()) carry += num2[j++] - '0';
//         cout << carry << " : this is carry " << '\n';
//         result.push_back(carry % 10 + '0');
//         cout << result << " : this is result " << '\n';
//         carry /= 10;
//         cout << carry << " this is last-carry" << '\n';
//     }

//     reverse(result.begin(), result.end());

//     return result;
// }

// string binomialCoefficient(int n, int m) {
//     vector<string> c(n + 1, "0");
//     c[0] = "1";

//     for (int i = 1; i <= n; i++) {
//         for (int j = min(i, m); j > 0; j--) {
//             c[j] = addStrings(c[j], c[j - 1]);
//         }
//     }

//     return c[m];
// }

// int main() {
//     int n, m;
//     cin >> n >> m;
//     //cout << binomialCoefficient(n, m) << '\n';
//     cout << addStrings("12", "8");

//     // string t = "";
//     // t.push_back(0);
//     // t.push_back(0);
//     // t.push_back(0);
//     // t.push_back(48);
//     // cout << t << " this is t" << '\n';
//     return 0;
// }

// 4/24
//순열이란 
//순서가 부여된 임의의 집합을 다른 순서로 뒤섞는 연산

// #include <iostream>
// using namespace std;
// int n = 5, r = 3, cnt = 0, cnt2 = 0;
// int a[5] = {1,2,3,4,5}, chk[20], res[20];

// void DFS(int L){
//     if(L==r){
//         for(int i = 0; i<r; i++){
//             cout << res[i] << " ";
//         }
//         puts("");
//         cnt++;
//     }
//     else {
//         for(int j = 0; j<n; j++){
//             if(chk[j] == 0){
//                 chk[j]=1;
//                 res[L] = a[j];
//                 DFS(L+1);
//                 chk[j] = 0;
//             }
//             // swap(a[j], a[L]);
//             // DFS(L+1);
//             // swap(a[j], a[L]);
//         }
//     }
// }

// 조합이란
// 집합에서 주어진 수만큼의 원소들을 고르는 방법

// void combi(int s, int L){
//     if(L==r){
//         for(int i = 0; i<r; i++){
//             cout << a[i] << " ";
//         }
//         puts("");
//         cnt2++;
//     } else {
//         for(int j = s; j<n; j++){
//             swap(a[j], a[L]);
//             combi(j+1, L+1);
//             swap(a[j], a[L]);
//         }
//     }
// }

// int main(){
//     DFS(0);
//     cout << cnt << '\n';
//     cout << "--------------" << '\n';
//     combi(0, 0);
//     cout << cnt2 << '\n';
//     return 0;
// }

// 이항계수 - 파스칼의 삼각형 - 조합의 수 구하기
// binomial coefficient

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// string addStrings(string num1, string num2){
//     reverse(num1.begin(), num1.end());
//     reverse(num2.begin(), num2.end());

//     int carry = 0;
//     string result = "";

//     int i = 0, j=0;
//     while(i < num1.size() || j < num2.size() || carry){
//         if(i < num1.size()) carry += num1[i++] - '0';
//         if(j < num2.size()) carry += num2[j++] - '0';
//         cout << carry % 10 + '0' << " this is ";
//         puts("");
//         result.push_back(carry % 10 + '0');
//         carry /= 10;
//     }

//     reverse(result.begin(), result.end());

//     return result;
// }

// string binomialCoefficient(int n, int m) {
//     vector<string> c(n+1, "0");
//     c[0] = "1";

//     for(int i = 1; i<=n; i++){
//         for(int j = min(i,m); j>0; j--){
//             c[j] = addStrings(c[j], c[j-1]);
//         }
//     }

//     return c[m];
// }

// int main() {
//     // cout << addStrings("12", "8") << '\n';
//     string t = "";
//     t.push_back(50);
//     cout << t << '\n';
//     return 0;
// }

// 0425
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<string> split(const string& input, string delimiter){
//     vector<string> result;
//     auto start = 0;
//     auto end = input.find(delimiter);
//     while(end != string::npos){
//         result.push_back(input.substr(start, end-start));
//         start = end + delimiter.size();
//         end = input.find(delimiter, start);
//     }
//     result.push_back(input.substr(start));
//     return result;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int sum(vector<int> &v){
//     sort(v.begin(), v.end());
//     return v[v.size()-1] + v[v.size()-2];   
// }

// int main(){
//     int a[] = {1,2,5,9,8};
//     int arr_size = sizeof(a) / sizeof(a[0]);
 
//     vector<int> v;
//     for(int i = 0; i < arr_size; i++){
//         v.push_back(a[i]);
//     }
//     cout << sum(v) << "\n";
 
//     return 0;
// }

// #include <iostream>
// using namespace std;

// long long factorial(int n){
//     if(n <= 0) return 0;
//     if(n==1) return 1;
//     else return n * factorial(n-1);
// }

// int main(){
//     int n;
//     cin >> n;
//     cout << factorial(n) << "\n";
//     return 0;
// }

// 한글 펠린드롬?
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main(){
//     string a = "";
//     cin >> a;

//     string b = a;
//     reverse(b.begin(), b.end());

//     int flag = 0;

//     for(int i = 0; i<a.size(); i++){
//         if(a[i] == b[i]) continue;
//         flag = 1;
//     }

//     if(flag) cout << "\"" << a << "\"" << "는 회문이 아닙니다."<<"\n";
//     else cout << "\"" << a << "\"" << "는 회문입니다." <<"\n";

//     return 0;
// }

// 0426
// #include <iostream> 
// #include <vector>
// using namespace std;

// vector<string> split(const string& input, string delimiter){
//     vector<string> result;
//     auto start = 0;
//     auto end = input.find(delimiter);
//     while(end != string::npos){
//         result.push_back(input.substr(start, end-start));
//         start = end + delimiter.size();
//         end = input.find(delimiter, start);
//     }
//     result.push_back(input.substr(start));
//     return result;
// }

// int main(){
//     string a = "hellophello", d = "p";
//     vector<string> res = split(a, d);
//     for(string b : res) cout << b << " ";
//     return 0; 
// }

// 다음 코드의 시간복잡도는?
// #include <iostream>
// using namespace std;
// int n;
// int main(){
//     cin >> n;
//     int a = 0;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < i; j++){
//             a += i + j;
//         }
//     }
//     cout << a << '\n';
//     return 0;
// }

// 다음 코드의 시간복잡도는? 2

// #include <iostream>
// using namespace std;
// int n, a[1004], cnt;
// int go(int l, int r){
//     if(l==r) return a[l];
//     int mid = (l + r) / 2;
//     int sum = go(l, mid) + go(mid + 1, r);
//     return sum;
// }

// int main(){
//     cin >> n;
//     for(int i = 1; i <= n; i++){
//         a[i-1] = i;
//     }
//     int sum = go(0, n-1);
//     cout << sum << '\n';
//     return 0;
// }

// 0427
// #include <iostream>
// using namespace std;
// int N, cnt;
// void solve(int N){
//     cnt++;
//     cout << cnt << '\n';
//     if(N==0) return;
//     for(int i = 0; i<3; i++){
//         solve(N-1);
//     }
//     return;
// }
// int main(){
//     cin >> N;
//     solve(N);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// const int n = 3;
// int a[3][3] = {
//     {10,20,30},
//     {40,50,60},
//     {70,80,90}
// };
// int xd[4] = {-1, 0, 1, 0};
// int yd[4] = {0, 1, 0, -1};
// int c[3][3];


// void DFS(int x, int y, vector<int> v){
//     if(x == n-1 && y == n-1){
//         int sum = 0;
//         for(int i = 0; i<v.size(); i++){
//             cout << v[i] << " ";
//             sum += v[i];
//         }
//         cout << "<< " <<sum << '\n';
//         //puts("");
//     } else {
//         for(int i = 0; i < 4; i++){
//             int nx = x + xd[i];
//             int ny = y + yd[i];
//             if(c[nx][ny]==0 && nx >= 0 && nx < 3 && ny >= 0 && ny < 3){
//                 c[nx][ny] = 1;
//                 v.push_back(a[nx][ny]);

//                 DFS(nx, ny, v);

//                 c[nx][ny] = 0;
//                 v.pop_back();
//             }
//         }
//     }
// }

// int main(){
//     vector<int> v;
//     c[0][0] = 1;
//     v.push_back(a[0][0]);
//     DFS(0,0, v);
//     return 0;
// }

// int main() {
//     int chk = 1;
//     string in, rin;
//     cin >> in;
//     rin = in;
//     reverse(rin.begin(), rin.end());
//     for(int i = 0; i < in.size(); i++){
//         if(in[i] != rin[i]) {
//             chk = 0;
//             cout << chk << '\n';
//             break;
//         }
//     }
//     if(chk) cout << chk << '\n';
//     return 0;
// }

// int al[30];
// int main(){
//     bool chk = false;
//     string in;
//     string ret;
//     int num;
//     cin >> num;
//     for(int i = 1; i <= num; i++){
//         cin >> in;
//         al[in[0] - 'a']++;
//     }
//     for(int i = 0; i<26; i++){
//         if(al[i] >= 5) {
//             ret.push_back('a' + i);
//             chk = true;
//         }
//     }

//     if(chk) {
//         cout << ret << '\n';
//     } else {
//         cout << "PREDAJA" << '\n';
//     }
//     return 0;
// }

// int main(){
//     string in;
//     string ret = "";

//     getline(cin, in);

//     for(int i = 0; i < in.size(); i++){
//         if(in[i] >= 65 && in[i] <= 90) {
//             ret.push_back(((in[i] + 13 - 'A') % 26) + 'A');
//         }
//         else if(in[i] >= 97 && in[i] <= 122) {
//             ret.push_back(((in[i] + 13 - 'a') % 26) + 'a');
//         } else {
//             ret.push_back(in[i]);
//         }
//     }
//     cout << ret << '\n';
//     return 0;
//     // A = 65
//     // Z = 90
//     // a = 97
//     // z = 122
// }

// #include <iostream>
// using namespace std;

// int n, k, temp, psum[100001], ret = -2147000000;
// int main(){
//     cin >> n >> k;
//     for(int i = 1; i<=n; i++){
//         cin >> temp;
//         psum[i] = psum[i - 1] + temp;
//     }
//     for(int i = k; i <= n; i++){
//         ret = max(ret, psum[i] - psum[i-k]);
//     }
//     cout << ret << '\n';
//     return 0;
// }

// int main(){
//     int n, k;
//     vector<int> a(n);
//     int sum = 0;
//     int ret = -2147000000;
//     cin >> n >> k;
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     for(int i = 0; i < k; i++){
//         sum += a[i];
//     }
//     for(int i = k; i < n; i++){
//         sum = sum + (a[i] - a[i - k]);
//         if(sum > ret) ret = sum;
//     }
//     cout << ret << '\n';

//     return 0;
// }

// int a[100005];
// int main(){
//     int n, k;
//     int sum = 0;
//     int ret = -2147000000;
//     cin >> n >> k;
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     for(int i = 0; i < k; i++){
//         sum += a[i];
//     }
//     for(int i = 0; i < n - k; i++){
//         sum = sum - a[i] + a[i + k];
//         if(sum >= ret) ret = sum;
//     }
//     cout << ret << '\n';

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int n;
// string s, ori_s, pre, suf;
// int main(){
//     cin >> n;
//     cin >> ori_s;
//     int pos = ori_s.find('*');
//     pre = ori_s.substr(0, pos);
//     suf = ori_s.substr(pos+1);
//     for(int i = 0; i < n; i++){
//         cin >> s;
//         if(pre.size() + suf.size() > s.size()){
//             cout << "NE\n";
//         } else {
//             if(pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size())){
//                 cout << "DA\n";
//             } else {
//                 cout << "NE\n";
//             }
//         }
//     }
//     return 0;
// }

// #include <iostream>
// #include <cstdlib>
// #include <map>
// using namespace std;
// int n, m;
// string s;
// map<string, int> mp;
// string a[100001];
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL); cout.tie(NULL);
//     cin >> n >> m;
//     for(int i = 0; i < n; i++){
//         cin >> s;
//         mp[s] = i+1;
//         a[i+1] = s;
//     }

//     for(int i = 0; i<m; i++){
//         cin >> s;
//         if(atoi(s.c_str())==0){
//             cout << mp[s] << '\n';
//         } else {
//             cout << a[atoi(s.c_str())] << '\n';
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <map>
using namespace std;

string o, t;
int main(){
    int n, m;
    cin >> n;
    for(int i = 0; i < n; i++){
        map<string, int> clo;
        cin >> m;
       
        for(int j = 0; j < m; j++){
            cin >> o >> t;
            clo[t] += 1;
        }
        long long ret = 1;
        for(auto& it : clo){
            ret *= (long long)it.second + 1;
        }
       
        cout << ret - 1 << '\n';
    }
    return 0;
}
