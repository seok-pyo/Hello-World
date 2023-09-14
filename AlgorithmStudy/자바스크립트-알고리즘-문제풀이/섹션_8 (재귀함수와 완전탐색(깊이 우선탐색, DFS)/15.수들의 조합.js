function solution(arr, m, k) {
  let n = arr.length;
  let result = [];
  let tmp = Array.from({ length: m }, () => 0);

  function DFS(L, s) {
    if (L === m) {
      result.push(tmp.slice());
    } else {
      for (let i = s; i < n; i++) {
        tmp[L] = arr[i];
        DFS(L + 1, i + 1);
      }
    }
  }
  DFS(0, 0);
  return result
    .map((v) => v.map((v) => Math.floor(v)).reduce((a, c) => a + c, 0))
    .filter((v) => v % k === 0).length;
}

// 강의 코드 추가
function solution(arr, m, k) {
  let n = arr.length;
  let answer = 0;
  function DFS(L, s, sum) {
    if (L === m && sum % k === 0) {
      // 재귀함수의 조건이 만족하지 않으면, 함수내의 호출을 다 종료하고 스택에서 pop된다.
      answer++;
    } else {
      for (let i = s; i < n; i++) {
        DFS(L + 1, i + 1, sum + arr[i]); // 인자로 sum을 넘겨주면 편하다. 스택프레임으로 가지고 넘어가는 것!
      }
    }
  }

  DFS(0, 0, 0);
  return answer;
}
