function solution(list, limit) {
  let answer = Number.MIN_SAFE_INTEGER;
  //let max = 0; // 자바스크립트는 스택에 마지막에 실행된 스택프레임의 값을 리턴한다.
  let n = list.length;
  function DFS(L, sum, tsum) {
    if (L === n) {
      return;
    } else {
      if (tsum <= limit) answer = Math.max(answer, sum);
      DFS(L + 1, sum + list[L][0], tsum + list[L][1]);
      DFS(L + 1, sum, tsum);
    }
  }

  DFS(0, 0, 0);

  return max;
}

// 강의 코드 추가

function solution(list, limit) {
  let answer = Number.MIN_SAFE_INTEGER;
  let n = list.length;
  function DFS(L, sum, tsum) {
    if (tsum > limit) return;
    if (L === n) {
      answer = Math.max(answer, sum);
    } else {
      DFS(L + 1, sum + list[L][0], tsum + list[L][1]);
      DFS(L + 1, sum, tsum);
    }
  }

  DFS(0, 0, 0);

  return max;
}
