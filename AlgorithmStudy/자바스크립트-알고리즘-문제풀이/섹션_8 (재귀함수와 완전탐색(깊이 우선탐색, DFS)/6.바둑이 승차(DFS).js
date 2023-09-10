// 강의 전 코드 실습
function solution(limit, dog) {
  let answer = 0;
  let n = dog.length;
  function DFS(s, sum) {
    if (s === n) {
      if (sum < limit) answer = Math.max(answer, sum);
    } else {
      DFS(s + 1, sum + dog[s]);
      DFS(s + 1, sum);
    }
  }

  DFS(0, 0);
  return answer;
}
