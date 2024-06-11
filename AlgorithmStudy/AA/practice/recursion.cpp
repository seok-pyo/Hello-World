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
// 순열이란
// 순서가 부여된 임의의 집합을 다른 순서로 뒤섞는 연산

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

// #include <iostream>
// #include <map>
// using namespace std;

// string o, t;
// int main(){
//     int n, m;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         map<string, int> clo;
//         cin >> m;

//         for(int j = 0; j < m; j++){
//             cin >> o >> t;
//             clo[t] += 1;
//         }
//         long long ret = 1; // 경우의 수인 경우 long long 사용을 추천
//         for(auto& it : clo){
//             ret *= (long long)it.second + 1;
//         }

//         cout << ret - 1 << '\n';
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int a[15001];
// int n, m;
// int ret;
// int main(){
//     cin >> n >> m;
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     for(int i = 0; i < n-1; i++){
//         for(int j = i+1; j<n; j++){
//             if(a[i] + a[j] == m){
//                 ret++;
//             }
//         }
//     }

//     cout << ret << '\n';
//     return 0;
// }

// #include <iostream>
// #include <stack>
// using namespace std;

// int main(){
//     int n;
//     int cnt = 0;

//     cin >> n;
//     for(int i = 0; i < n; i++){
//         string input;
//         cin >> input;

//         stack<char> s;
//         s.push(input[0]);

//         for(int j = 1; j < input.size(); j++){
//             if(s.empty() || s.top() != input[j]){
//                 s.push(input[j]);
//             } else {
//                 s.pop();
//             }
//         }
//         if(s.empty()) cnt++;
//     }
//     cout << cnt << '\n';
//     return 0;
// }

// #include <iostream>
// using namespace std;

// long long a, b, c;

// long long DFS(long long a, long long b){
//     if(b == 1){
//         return a % c;
//     } else {
//         long long ret = DFS(a, b/2);
//         ret = (ret * ret) % c;
//         if(b % 2) ret = (ret * a) % c;
//         return ret;
//     }
// }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> a >> b >> c;
//     cout << DFS(a, b) << '\n';

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     long long ret = 0;
//     int n;
//     while(cin >> n){
//         for(int i = 1;; i++){
//             ret = (ret * 10 + 1) % n;
//             if(ret % n == 0){
//                 cout << i << '\n';
//                 break;
//             }
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// long long a, b ,c;

// int DFS(long long ret, long long b){
//     if(b == 1){
//         return (a) % c;
//     } else {
//         ret = DFS(ret, b / 2);
//         ret = ( ret * ret ) % c;
//         if(b % 2) ret = ( ret * a ) % c;
//         return ret;
//     }
// }

// int main(){
//     cin >> a >> b >> c;
//     cout << DFS(0, b) << '\n';
//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool mat[4][4] = {
//     {0,1,1,1},
//     {1,0,1,0},
//     {1,1,0,0},
//     {1,0,0,0},
// };

// bool visited[4];

// void go(int from){
//     visited[from] = 1;
//     cout << from << '\n';
//     for(int i = 0; i < 4; i++){
//         if(visited[i]) continue;
//         if(mat[from][i]){
//             go(i);
//         }
//     }
// }

// int main(){
//     for(int i = 0; i < 4; i++){
//         for(int j = 0; j < 4; j++){
//             if(mat[i][j] && visited[i] == 0){
//                 go(i);
//             }
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int map[30][30], ch[30], cnt=0, n, path[30];

// void DFS(int v, int L){
//     int i, j;
//     if(v==n){
//         cnt++;
//         for(j = 0; j<L; j++){
//             cout << path[j] << ' ';
//         }
//         puts("");
//     } else {
//         for(i=1; i<=n; i++){
//             if(map[v][i]==1 && ch[i]==0){
//                 ch[i] = 1;
//                 path[L] = i;
//                 DFS(i, L+1);
//                 ch[i]=0;
//             }
//         }
//     }
// }

// int main(){
//     int m, i, j, a, b, c;
//     cin >> n >> m;
//     for(int i=1; i<=m; i++){
//         cin >> a >> b;
//         map[a][b] = 1;
//     }
//     ch[1]=1;
//     path[0]=1;
//     DFS(1, 1);
//     cout << cnt << '\n';
//     return 0;
// }

// #include <iostream>
// using namespace std;

// const int V = 10;
// bool ma[V][V], chk[V];

// void DFS(int v){
//     cout << v << '\n';
//     chk[v] = 1;
//     for(int i = 0; i<V; i++){
//         if(chk[i]) continue;
//         if(ma[v][i]) DFS(i);
//     }
//     return;
// }

// int main(){
//     ma[1][2] = 1, ma[1][3] = 1, ma[3][4] = 1, ma[6][7] = 1;
//     ma[2][1] = 1, ma[3][1] = 1, ma[4][3] = 1;
//     for(int i = 0; i < V; i++){
//         for(int j = 0; j < V; j++){
//             if(chk[i]==0 && ma[i][j]){
//                 DFS(i);
//             }
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int n, r;
// int cnt = 0;
// int arr[10], chk[10], ans[10];

// void DFS(int L, int s){
//     if(L==r){
//         for(int i = 0; i < r; i++){
//             cout << ans[i] << ' ';
//         }
//         cnt++;
//         puts("");
//     } else {
//         for(int i = s; i < n; i++){
//             //if(chk[i]==0){
//             //chk[i] = 1;
//             ans[L] = arr[i];
//             DFS(L + 1, s + 1); // s를 넣느냐, i를 넣느냐. 어느쪽이 조합일까.
//             //chk[i] = 0;
//             //}
//         }
//     }
// }

// int main(){
//     cin >> n >> r;
//     for(int i = 0; i < n; i++){
//         arr[i] = i + 1;
//     }
//     DFS(0, 0);
//     cout << cnt << '\n';
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// const int V = 10;

// vector<int> adj[V];
// int chk[V];

// void DFS(int v){
//     cout << v << ' ';
//     chk[v] = 1;
//     for(int next = 0; next < adj[v].size(); next++){
//         if(chk[next]) continue;
//         if(adj[next].size()) DFS(next);
//     }
//     return;
// }

// int main(){
//     adj[1].push_back(2);
//     adj[2].push_back(1);

//     adj[1].push_back(3);
//     adj[3].push_back(1);

//     adj[3].push_back(4);
//     adj[4].push_back(3);

//     for(int i = 0; i < V; i++){
//         if(adj[i].size() && chk[i] == 0) DFS(i);
//     }

// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int n;
// vector<int> adj[30];
// int ch[30], cnt =0;

// void DFS(int v){
//     if(v == n){
//         cnt++;
//     } else {
//         for(int j = 0; j < adj[v].size(); j++){
//             if(ch[adj[v][j]] == 0) {
//                 ch[adj[v][j]] = 1;
//                 DFS(adj[v][j]);
//                 ch[adj[v][j]] = 0;
//             }
//         }
//     }
// }

// int main() {
//     int m, i, a, b;
//     cin >> n >> m;
//     for(i = 1; i <= m; i++){
//         cin >> a >> b;
//         adj[a].push_back(b);
//         // adj[b].push_back(a);
//     }
//     ch[1] = 1;
//     DFS(1);
//     cout << cnt << '\n';
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #define x first
// #define y second
// using namespace std;
// int ch[30], cnt = 0, n, cost = 2147000000;
// vector<pair<int, int> > map[30];

// void DFS(int v, int sum){
//     if(v == n){
//         if(sum < cost) cost = sum;
//     } else {
//         for(int i = 0; i < map[v].size(); i++){
//             if(ch[map[v][i].x]==0){
//                 ch[map[v][i].x] = 1;
//                 DFS(map[v][i].x, sum + map[v][i].y);
//                 ch[map[v][i].x] = 0;
//             }
//         }

//     }
// }

// int main(){
//     int m, i, a, b, c;
//     cin >> n >> m;
//     for(i = 1; i <= m; i++){
//         cin >> a >> b >> c;
//         map[a].push_back(make_pair(b,c));
//     }
//     ch[1] = 1;
//     DFS(1, 0);
//     cout << cost << '\n';
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int adj[30][30], n, ch[30];
// int cost = 2147000000;

// void DFS(int v, int sum){
//     if(n == v){
//         if(sum < cost) cost = sum;
//     } else {
//         for(int i=1; i<=n; i++){
//             if(ch[i] == 0 && adj[v][i]){ // i가 다음 노드이다. adj[v][i]는 가중치값이다.
//                 ch[i] = 1;
//                 DFS(i, sum + adj[v][i]);
//                 ch[i] = 0;
//             }
//         }
//     }
// }

// int main(){
//     int m, a, b, c;
//     cin >> n >> m;
//     for(int i = 0; i<m; i++){
//         cin >> a >> b >> c;
//         adj[a][b] = c;
//     }

//     ch[1] = 1;
//     DFS(1, 0);
//     cout << cost << '\n';
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> m;
// vector<int> r;

// int main(){
//     m.push_back(1);
//     m.push_back(2);
//     m.push_back(1);

//     for(int i = 0; i<m.size(); i++){
//         for(int j = -1; j<m.size(); j++){
//             r[i] = m[i] + m[j];
//         }
//     }

//     for(int i = 0; i<r.size(); i++){
//         cout << r[i] << '\n';
//     }

//     return 0;
// }

// 이항계수 값 찾기 - 이분검색 / c++
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;

// long long bino(int n, int k){
//     if(k > n - k) k = n - k;
//     long long res = 1;
//     for(int i = 0; i < k; ++i){
//         res *= (n - i);
//         if(res > LLONG_MAX) return LLONG_MAX;
//         res /= (i + 1);
//     }
//     return res;
// }

// int main(){
//     long long m;
//     cin >> m;

//     vector<pair<int, int> > results;

//     for(int r = 1; r <= 30; ++r){
//         int lo = r * 2, hi = m + 1;
//         while(lo + 1 < hi) {
//             int mid = (lo + hi) / 2;
//             if(bino(mid, r) <= m) lo = mid;
//             else hi = mid;
//         }
//         if(bino(lo, r) == m) {
//             results.push_back(make_pair(lo, r));
//             if(r < lo - r) results.push_back(make_pair(lo, lo - r));
//         }
//     }

//     sort(results.begin(), results.end());

//     cout << results.size() << '\n';
//     for(int i = 0; i < results.size(); i++){
//         cout << results[i].first << " " << results[i].second << '\n';
//     }

//     return 0;
// }

// 이항계수 값 찾기 - 파이썬 코드
// n = int(input())
// v = []

// def nCr(n, r):
//     ret = 1
//     for i in range(r): ret *= n - i
//     for i in range(r): ret //= r - i
//     return ret

// for r in range(1, 31):
//     lo, hi = r << 1, n + 1
//     while lo + 1 < hi:
//         mid = lo + hi >> 1
//         if nCr(mid, r) <= n: lo = mid
//         else: hi = mid
//     if nCr(lo, r) == n:
//         v.append((lo, r))
//         if r < lo - r: v.append((lo, lo - r))

// v.sort(key = lambda x : (x[0], x[1]))

// print(len(v))
// for [a, b] in v:
//     print(f"{a} {b}")

// 트리순회: 일반적으로 이진 트리를 예시로 들지만, 모든 트리에서 적용이 가능하다.
// #include <iostream>
// #include <vector>
// using namespace std;
// int visited[1004];
// vector<int> adj[1004];

// void postOrder(int here){
//     if(visited[here] == 0){
//         if(adj[here].size() == 1) postOrder(adj[here][0]);
//         if(adj[here].size() == 2){
//             postOrder(adj[here][0]);
//             postOrder(adj[here][1]);
//         }
//         visited[here] = 1;
//         cout << here << ' ';
//     }
// }

// void preOrder(int here){
//     if(visited[here] == 0){
//         visited[here] = 1;
//         cout << here << ' ';
//         if(adj[here].size() == 1) preOrder(adj[here][0]);
//         if(adj[here].size() == 2){
//             preOrder(adj[here][0]);
//             preOrder(adj[here][1]);
//         }
//     }
// }

// void inOrder(int here){
//     if(visited[here] == 0){
//         if(adj[here].size() == 1){
//             inOrder(adj[here][0]);
//             visited[here] = 1;
//             cout << here << ' ';
//         } else if(adj[here].size() == 2){
//             inOrder(adj[here][0]);

//             visited[here] = 1;
//             cout << here << ' ';

//             inOrder(adj[here][1]);
//         } else {
//             visited[here] = 1;
//             cout << here << ' ';
//         }
//     }
// }

// int main(){
//     adj[1].push_back(2);
//     adj[1].push_back(3);
//     adj[2].push_back(4);
//     adj[2].push_back(5);
//     int root = 1;
//     cout << "\n 트리순회 : postOrder \n";
//     postOrder(root); memset(visited, 0, sizeof(visited));
//     cout << "\n 트리순회 : preOrder \n";
//     preOrder(root); memset(visited, 0, sizeof(visited));
//     cout << "\n 트리순회 : inOrder \n";
//     inOrder(root);
//     return 0;
// }

// 너비 우선 탐색

// BFS(G, u)
//     u.visited = 1
//     q.push(u)
//     while(q.size())
//         u=q.front()
//         q.pop()
//             for each v in G[u] // G.Adj.[u] 코드를 수정
//                 if v.visited == false
//                     v.visited = u.visited + 1
//                     q.push(v)

// <<< BFS로 최단 거리 찾기 >>>
// 토끼 찬우는 가장 좋아하는 음식인 당근을 찾아 모험을 떠났다. 찬우는 거대한 숲을 지나야만 당근 농장에 도착할 수 있다.
// 이 숲은 여러 칸으로 이루어져 있으며, 일부 칸은 숲의 길이 있고, 일부 칸은 깊은 웅덩이로 가로막혀 있다.
// 찬우는 웅덩이를 건널 수 없고, 숲의 길(1)만을 따라 이동할 수 있다. 찬우는 상하좌우로만 이동할 수 있다.

// 찬우는 가능한 한 빨리 당근 농장에 도착하고 싶다. 찬우가 한 칸 움직일 때마다 체력을 1씩 소모한다.
// 최단 거리로 이동했을 때, 찬우가 당근 농장에 도착하기 위해 소모해야 하는 최소 체력을 구해보자.

// 지도에서 1은 찬우가 이동할 수 있는 숲의 길을, 0은 찬우가 이동할 수 없는 웅덩이를 나타낸다.

// 입렵
// 지도에서 세로길이와 가로길이 N*M이 주어진다. 그 다음 줄에 찬우의 위치 (y, x)와 숲의 출구 (y, x)가
// 주어진다. 이 때 찬우의 시작위치(y, x)에서 체력 1이 이미 소모된 상태로 본다.

// 출력
// 숲을 건너기 위해 필요한 최소 체력

// 범위
// 1 <= N <= 100
// 1 <= M <= 100

// 예제 입력
// 5 5
// 0 0
// 4 4
// 1 0 1 0 1
// 1 1 1 0 1
// 0 0 1 1 1
// 0 0 1 1 1
// 0 0 1 1 1

// 예제 출력
// 9

// // 정답 코드
// #include <iostream>
// #include <queue>
// using namespace std;
// const int max_n = 104;
// int dy[4] = {-1, 0, 1, 0};
// int dx[4] = {0, 1, 0, -1};
// int n, m, a[max_n][max_n], visited[max_n][max_n], y, x, sy, sx, ey, ex;
// int main(){
//     cin >> n >> m;
//     cin >> sy >> sx;
//     cin >> ey >> ex;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cin >> a[i][j];
//         }
//     }
//     queue<pair<int, int> > q;
//     visited[sy][sx] = 1;
//     q.push({sy, sx});
//     while(q.size()){
//         tie(y, x) = q.front(); q.pop();
//         for(int i = 0; i < 4; i++){
//             int ny = y + dy[i];
//             int nx = x + dx[i];
//             if(ny < 0 || ny >= n || nx >= m || a[ny][nx] == 0) continue;
//             if(visited[ny][nx]) continue;
//             visited[ny][nx] = visited[y][x] + 1;
//             q.push({ny, nx});
//         }
//     }
//     cout << visited[ey][ex];
//     // 최단거리 디버깅
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cout << visited[i][j] << ' ';
//         }
//         cout << '\n';
//     }
//     return 0;
// }

// 입력을 받고
// 배열에 저장한 후에
// 너비우선탐색으로 최단거리를 찾는다.
// // #2178
// #include <iostream>
// #include <queue>

// using namespace std;

// const int max_n = 104;
// int dy[4] = {-1, 0, 1, 0};
// int dx[4] = {0, 1, 0, -1};
// int n, m, a[max_n][max_n], visited[max_n][max_n], y, x;
// int main(){
//     cin >> n >> m;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             // cin으로 숫자 하나씩 입력받기
//             char c;
//             cin >> c;
//             a[i][j] = c - '0';
//             //scanf("%1d", &a[i][j]);
//         }
//     }
//     queue<pair<int, int> > q;
//     visited[0][0] = 1;
//     q.push(make_pair(0,0));
//     while(q.size()){
//         // tie(y, x) = q.front(); q.pop();
//         pair<int, int> f = q.front();
//         q.pop();
//         int y = f.first;
//         int x = f.second;

//         for(int i = 0; i < 4; i++){
//             int ny = y + dy[i];
//             int nx = x + dx[i];
//             if(ny < 0 || ny >=n || nx < 0 || nx >= m || a[ny][nx]==0) continue;
//             if(visited[ny][nx]) continue;
//             visited[ny][nx] = visited[y][x] + 1;
//             q.push(make_pair(ny, nx));
//         }
//     }
//     cout << visited[n - 1][m - 1] << '\n';
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// int n, m;
// queue<int> q;
// vector<int> g[21];
// int visited[21];
// int dis[21];

// int main(){
//     cin >> n >> m;
//     int a, b;
//     for(int i = 1; i <=m; i++){
//         cin >> a >> b;
//         g[a].push_back(b);
//     }
//     visited[1] = 1;
//     q.push(1);
//     while(q.size()){
//         int f = q.front();
//         q.pop();
//         for(int j = 0; j < g[f].size(); j++){
//             if(visited[g[f][j]] == 0){
//                 visited[g[f][j]] = 1;
//                 q.push(g[f][j]);
//                 dis[g[f][j]] = dis[f] + 1; // 한 단계씩 이동하는게 최단거리를 만들기 때문에
//                 // visited 배열로 체크를 하고, dis의 1씩 더해주면, 최단 거리가 된다.
//                 // 다시 돌아오는 경우는 이 문제의 경우에는 발생하지 않는다.
//             }
//         }
//     }

//     for(int i = 2; i <= n; i++){
//         cout << i << " : " << dis[i] << '\n';
//     }
//     return 0;
// }

// 선택 정렬
// #include <iostream>
// using namespace std;
// int n;
// int a[101];

// int main(){
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     int tmp = 0;
//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//             if(a[i] > a[j]) {
//                 tmp = a[j];
//                 a[j] = a[i];
//                 a[i] = tmp;
//             }
//         }
//     }

//     for(int k = 0; k < n; k++){
//         cout << a[k] << ' ';
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int dy[4] = {-1, 0, 1, 0};
// int dx[4] = {0, 1, 0, -1};
// int m, n, k, y, x, ret, ny, nx, t;
// int a[51][51];
// bool visited[51][51];
// void dfs(int y, int x){
//     visited[y][x] = 1;
//     for(int i = 0; i < 4; i++){
//         ny = y + dy[i];
//         nx = x + dx[i];
//         if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
//         if(a[ny][nx] == 1 && !visited[ny][nx]){
//             dfs(ny, nx);
//         }
//     }
//     return;
// }

// int main(){
//     cin >> t;
//     while(t--){
//         fill(&a[0][0], &a[0][0] + 51 * 51, 0);
//         fill(&visited[0][0], &visited[0][0] + 51 * 51, 0);
//         ret = 0;
//         cin >> m >> n >> k;
//         for(int i = 0; i < k; i++){
//             cin >> x >> y;
//             a[y][x] = 1;
//         }
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < m; j++){
//                 if(a[i][j] == 1 && !visited[i][j]){
//                     dfs(i, j);
//                     ret++;
//                 }
//             }
//         }
//         cout << ret << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;
// int map[101][101];
// int chk[101][101];
// int n, h, maxH = -2147000000, num = -2147000000;
// int dy[4] = {-1, 0, 1, 0};
// int dx[4] = {0, 1, 0, -1};

// void DFS(int y, int x, int max){
//     chk[y][x] = 1;
//     for(int i = 0; i < 4; i++){
//         int ny = y + dy[i];
//         int nx = x + dx[i];
//         if(ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
//         if(chk[ny][nx] == 0 && map[ny][nx] > max){
//             DFS(ny, nx, max);
//         }
//     }
//     return;
// }

// int main(){
//     // 큰 입출력 처리
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     cin >> n;

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin >> map[i][j];
//         }
//     }

//     int res = 1;
//     for(int k = 1; k < 101; k++){
//         // 배열 초기화
//         // fill(&chk[0][0], &chk[0][0] + 101 * 101, 0);
//         memset(chk, 0, sizeof(chk)); // cstring 라이브러리가 포함해야 한다.
//         int cnt = 0;
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < n; j++){
//                 if(chk[i][j] == 0 && map[i][j] > k){
//                     DFS(i, j, k);
//                     cnt++;
//                 }
//             }
//         }
//         if(cnt > res) res = cnt;
//     }

//     cout << res << '\n';

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int map[101][101];
// int chk[101][101];
// int ny[4] = {-1, 0, 1, 0};
// int nx[4] = {0, 1, 0, -1};
// vector<int> res;
// int n, m, k;

// void DFS(int y, int x, int &c){
//     chk[y][x] = 1;
//     c++;
//     for(int i = 0; i < 4; i++){
//         int dx = x + nx[i];
//         int dy = y + ny[i];
//         if(dx < 0 || dy < 0 || dx >= n || dy >= m) continue;
//         if(chk[dy][dx] == 0 && map[dy][dx] == 0){
//             DFS(dy, dx, c);
//         }
//     }
// }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> m >> n >> k;

//     int lx, ly, rx, ry;

//     for(int i = 0; i < k; i++){
//         cin >> lx >> ly >> rx >> ry;
//         for(int j = lx; j < rx; j++){
//             for(int l = ly; l < ry; l++){
//                 map[l][j] = 1;
//             }
//         }
//     }

//     for(int i = 0; i < m; i++){
//         for(int j = 0; j < n; j++){
//             if(chk[i][j] == 0 && map[i][j] == 0){
//                 int count = 0;
//                 DFS(i, j, count);
//                 res.push_back(count);
//             }
//         }
//     }

//     sort(res.begin(), res.end());
//     cout << res.size() << '\n';
//     for(int i = 0; i < res.size(); i++){
//         cout << res[i] << ' ';
//     }

//     return 0;
// }

// 2828번 정답코드

// #include <iostream>
// #include <queue>
// using namespace std;

// int main(){
//     int n,m,j,p,step;
//     queue<int> q;

//     cin >> n >> m;
//     cin >> j;

//     for(int i = 0; i < j; i++){
//         cin >> p;
//         q.push(p);
//     }

//     int lp = 1;
//     int rp = m;
//     int ms = 0;
//     int dis1 = 0, dis2 = 0;

//     while(!q.empty()){
//         int po = q.front();
//         q.pop();

//         if(lp <= po && po <= rp) {
//             continue;
//         } else if(po < lp){
//             int mL = lp - po;
//             lp -= mL;
//             rp -= mL;
//             ms += mL;
//         } else if (po > rp){
//             int mR = po - rp;
//             lp += mR;
//             rp += mR;
//             ms += mR;
//         }
//     }

//     cout << ms << '\n';

//     return 0;
// }

// 2828번 오답 코드

// #include <iostream>
// #include <cmath>
// #include <queue>
// using namespace std;

// int main(){
//     int n,m,j,p,step;
//     queue<int> q;

//     cin >> n >> m;
//     cin >> j;

//     for(int i = 0; i < j; i++){
//         cin >> p;
//         q.push(p);
//     }

//     int lp = 1;
//     int rp = m;
//     int ms = 0;
//     int dis1 = 0, dis2 = 0;

//     while(!q.empty()){
//         int po = q.front();
//         q.pop();

//         if(lp <= po && po <= rp) continue;

//         dis1 = po - lp;
//         dis2 = po - rp;

//         if(dis1 < 0 && dis2 < 0){
//             step = min(abs(dis1), abs(dis2));
//             ms += step;
//         } else if (dis1 > 0 && dis2 > 0) {
//             step = min(dis1, dis2);
//             ms += step;
//         }

//         lp += step;
//         rp += step;
//     }

//     cout << ms << '\n';

//     return 0;
// }

// 빈도정렬

// #include <iostream>
// #include <map>
// #include <vector>
// #include <utility>
// using namespace std;

// int n, c;
// int a[1001];
// map<int, int> mp, mp_first;
// vector<pair<int, int> > v;

// bool cmp(pair<int, int> a, pair<int, int> b){
//     if(a.first == b.first){
//         return mp_first[a.second] < mp_first[b.second];
//     }
//     return a.first > b.first;
// }

// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL); cout.tie(NULL);

//     cin >> n >> c;
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//         // if(mp[a[i]] == 0) mp[a[i]] = 1; 아래 줄로 대체 가능
//         mp[a[i]]++;
//         if(mp_first[i] == 0) mp_first[i] = i + 1;
//     }

//     for(auto it : mp){
//         v.push_back({ it.second, it.first });
//     }

//     sort(v.begin(), v.end(), cmp);

//     for(auto i : v){
//         for(int j = 0; j < i.first; j++){
//             cout << i.second << " ";
//         }
//     }

//     return 0;
// }

// #include <iostream>
// #include <utility>
// using namespace std;

// int mc = 0, jc = 0;
// bool isV, isD, isT=false;

// void Vchk(string s){
//     for(int i = 0; i < s.length(); i++){
//         int flag = 0;
//         pair<int, char> sc = { 0, ' ' };
//         isV = false, isD = false;
//         if(s[i] - 97 == 'a' - 97) flag = 1;
//         if(s[i] - 97 == 'e' - 97) flag = 1;
//         if(s[i] - 97 == 'i' - 97) flag = 1;
//         if(s[i] - 97 == 'o' - 97) flag = 1;
//         if(s[i] - 97 == 'u' - 97) flag = 1;
//         if(flag){
//             mc += 1;
//             jc = 0;
//             isV = true;
//         } else {
//             jc += 1;
//             mc = 0;
//         }
//         if(mc == 3 || jc == 3) isD = true;
//         if(sc.second == s[i]) sc.first += 1;
//         sc.second = s[i];
//         if(sc.first == 2){
//             if(sc.second == 'e') {
//                 sc.first = 0;
//                 continue;
//             }
//             else if(sc.second == 'o') {
//                 sc.first = 0;
//                 continue;
//             } else {
//                 isT = true;
//             }
//         }
//     }

// }

// int main(){
//     string a;
//     int f1, f2, f3;
//     do{
//         cin >> a;
//         if(a == "end") continue;
//         Vchk(a);
//         if(isV == true && isT == false && isD == false) {
//             cout << '<' << a << '>' << "is Acceptable" << '\n';
//         } else {
//             cout << '<' << a << '>' << "is not Acceptable" << '\n';
//         }
//     } while(a != "end");
// }

// #include <iostream>
// #include <cmath>
// #include <string>
// #include <vector>
// using namespace std;

// int main(){
//     string a = "";
//     vector<int> V;
//     int n;
//     cin >> n;

//     for(int i = 0; i < n; i++){
//         cin >> a;
//         int res = 0; int count = 1;
//         for(int i = 0; i < a.size(); i++){
//             if(0 <= a[i] - 48 && a[i] - 48 <= 9){
//                 res *= count; // 예상한 대로 동작하지 않음
//                 res += (a[i] - 48);
//                 count *= 10;
//             } else {
//                 if(count){
//                     V.push_back(res);
//                     count = 0;
//                     res = 0;
//                 }
//             }
//         }
//         V.push_back(res);
//     }

//     for(auto a : V){
//         cout << a << " ";
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int n;
// vector<string> v;
// string s, ret;

// void go(){
//     while(true){
//         if(ret.size() && ret.front() == '0') ret.erase(ret.begin());
//         else break;
//     }
//     if(ret.size() == 0) ret = "0";
//     v.push_back(ret);
//     ret = "";
// }

// bool cmp(string a, string b){
//     if(a.size() == b.size()) return a < b;
//     return a.size() < b.size();
// }

// int main(){
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         cin >> s;
//         ret = "";
//         for(int j = 0; j < s.size(); j++){
//             if(s[j] < 65)ret += s[j];
//             else if(ret.size()) go();
//         }
//         if(ret.size()) go();
//     }

//     sort(v.begin(), v.end(), cmp);
//     for(string i : v) cout << i << "\n";
//     return 0;
// }

// 10709 기상캐스터
#include <iostream>
using namespace std;
int map[101][101];
int res[101][101];
int h, w;
int CC = 0;
int flag = 0;
int cp = 0;
char a;
int main()
{
    cin >> h >> w;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> a;
            map[i][j] = a;
        }
    }

    for (int i = 0; i < h; i++)
    {
        flag = 0;
        for (int j = 0; j < w; j++)
        {
            if (flag == 0 && map[i][j] != 'c')
            {
                res[i][j] = -1;
            }
            if (map[i][j] == 'c')
            {
                flag = 1;
                cp = j;
            }
            if (flag == 1 && map[i][j] != 'c')
            {
                res[i][j] = j - cp;
            }
        }
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << res[i][j] << ' ';
        }
        puts("");
    }

    return 0;
}
