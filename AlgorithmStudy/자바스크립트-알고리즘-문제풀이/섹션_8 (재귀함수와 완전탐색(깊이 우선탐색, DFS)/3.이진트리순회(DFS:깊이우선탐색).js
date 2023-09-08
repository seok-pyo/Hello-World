function solution(n) {
  function DFS(v) {
    if (v > 7) return;
    else {
      DFS(v * 2);
      DFS(v * 2 + 1);
      console.log(v);
    }
  }
  DFS(n);
}

solution(1);
