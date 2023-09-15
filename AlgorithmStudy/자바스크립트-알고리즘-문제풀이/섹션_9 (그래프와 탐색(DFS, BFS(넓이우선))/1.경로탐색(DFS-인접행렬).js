// 노드개수가 적을 떄
function solution(arr) {
  let answer = 0;
  let n = arr.length;
  let ch = Array.from({ length: n + 1 }, () => 0);
  let graph = Array.from(Array(n + 1, () => Array(n + 1).fill(0)));

  for (let [a, b] of arr) {
    graph[a][b] = 1;
  }

  function DFS(v) {
    if (v === n) {
      answer++;
    } else {
      for (let i = 1; i <= n; i++) {
        if (graph[v][i] === 1 && ch[i] === 0) {
          ch[i] = 1;
          DFS(i);
          ch[i] = 0;
        }
      }
    }
  }
  ch[1] = 1;
  DFS(1);
  return answer;
}
