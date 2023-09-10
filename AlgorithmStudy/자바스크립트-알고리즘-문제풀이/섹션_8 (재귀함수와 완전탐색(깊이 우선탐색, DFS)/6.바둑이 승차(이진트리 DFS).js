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

// 강의 코드 추가 -> 조건도 수행하면서 재귀도 더 이상 뻗지 못하게 위로 조건문을 옮겨준다.
function solution(limit, dog) {
  let answer = 0;
  let n = dog.length;
  function DFS(s, sum) {
    if (sum > limit) return;
    if (s === n) {
      answer = Math.max(answer, sum);
    } else {
      DFS(s + 1, sum + dog[s]);
      DFS(s + 1, sum);
    }
  }

  DFS(0, 0);
  return answer;
}
