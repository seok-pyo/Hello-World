function solution(n, f) {
  let answer,
    flag = 0;
  let dy = Array.from(Array(35), () => Array(35).fill(0));
  let ch = Array.from({ length: n + 1 }, () => 0);
  let b = Array.from({ length: n }, () => 0);
  let p = Array.from({ length: n }, () => 0);

  function DFS(L, sum) {
    if (flag) return;
    if (L === n && sum === f) {
      answer = p.slice();
      flag = 1;
    } else {
      for (let i = 1; i <= n; i++) {
        if (ch[i] === 0) {
          p[L] = i;
          ch[i] = 1;
          DFS(L + 1, sum + b[L] * p[L]); // sum.. 기억! L과 i 헷갈리지 않도록 주의!
          ch[i] = 0;
        }
      }
    }
  }

  function combi(n, r) {
    if (dy[n][r] > 0) return dy[n][r];
    if (n === r || r === 0) return 1;
    else {
      return (dy[n][r] = combi(n - 1, r - 1) + combi(n - 1, r));
    }
  }

  for (let i = 0; i < n; i++) {
    b[i] = combi(n - 1, i);
  }

  DFS(0, 0);
  return answer;
}

console.log(solution(4, 16));
