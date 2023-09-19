function solution(n) {
  let answer = 0;
  function DFS(L, sum) {
    if (sum > n) return;
    if (sum === n) {
      answer++;
    } else {
      DFS(L + 1, sum + 1);
      DFS(L + 1, sum + 2);
    }
  }
  DFS(0, 0);
  return answer;
}

// 동적계획법이란 -> 점화식 처럼 문제의 조각을 가지고 전체의 답을 유추해내는 것.
// dy 테이블이 있어야 한다.

function solution(n) {
  let answer = 0;
  let dy = Array.from({ length: n + 1 }, () => 0);
  dy[1] = 1;
  dy[2] = 2;
  for (let i = 3; i <= n; i++) {
    dy[i] = dy[i - 2] + dy[i - 1];
  }
  answer = dy[n];
}
