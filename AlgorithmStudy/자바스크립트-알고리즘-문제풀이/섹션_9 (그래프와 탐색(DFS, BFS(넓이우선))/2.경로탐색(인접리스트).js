// 노드개수가 적을 떄
// 모든 배열을 다 만들필요 없이 필요한 부분만 만들어서 돌린다
function solution(n, arr) {
  let answer = 0;
  let ch = Array.from({ length: n + 1 }, () => 0);
  let graph = Array.from(Array(n + 1), () => Array()); // 행만 정점의 개수로 잡아주면 된다.
  let path = []; // 경우의 수 console.log로 확인하기

  for (let [a, b] of arr) {
    graph[a].push(b);
  }

  function DFS(v) {
    if (v === n) {
      answer++;
      console.log(path);
    } else {
      for (let i = 0; i <= graph[v].length; i++) {
        if (ch[graph[v][i]] === 0) {
          // graph 배열에서 정점이 있는지 확인할 필요가 없다.
          ch[graph[v][i]] = 1;
          path.push(i);
          DFS(graph[v][i]); // 정점을 넘겨줘야 한다.
          ch[graph[v][i]] = 0;
          path.pop();
        }
      }
    }
  }
  path.push(1);
  ch[1] = 1;
  DFS(1);
  return answer;
}

let arr = [
  [1, 2],
  [1, 3],
  [1, 4],
  [2, 1],
  [2, 3],
  [2, 5],
  [3, 4],
  [4, 2],
  [4, 5],
];
console.log(solution(5, arr));
