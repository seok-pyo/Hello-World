function solution(arr, m) {
  let answer = Number.MAX_SAFE_INTEGER;
  let n = arr.length;
  function DFS(L, sum) {
    if (L >= answer) return;
    if (sum > m) return;
    if (sum === m) {
      console.log(L, sum);
      answer = Math.min(answer, L);
    } else {
      for (let i = 0; i < n; i++) {
        DFS(L + 1, sum + arr[i]); // L 과 i를 헷갈리면 안된다! -> L 레벨에서 i 만큼 반복해서 가지 뻣기!
      }
    }
  }

  DFS(0, 0);
  return answer;
}
