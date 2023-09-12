// 강의 듣기 전 코드 작성
function solution(arr, m) {
  let n = arr.length;
  let ch = Array.from({ length: n }, () => 0);
  let tmp = Array.from({ length: m }, () => 0);
  let answer = [];

  function DFS(L) {
    if (L === m) {
      answer.push(tmp);
    } else {
      for (let i = 0; i < n; i++) {
        if (ch[i] === 0) {
          tmp[L] = arr[i];
          ch[i] = 1;
        }

        DFS(L + 1);
        ch[i] = 0;
      }
    }
  }

  DFS(0);

  return answer;
}
// 강의 코드
function solution(arr, m) {
  let n = arr.length;
  let ch = Array.from({ length: n }, () => 0);
  let tmp = Array.from({ length: m }, () => 0);
  let answer = [];

  function DFS(L) {
    if (L === m) {
      answer.push(tmp.slice());
    } else {
      for (let i = 0; i < n; i++) {
        if (ch[i] === 0) {
          tmp[L] = arr[i];
          ch[i] = 1;
          DFS(L + 1); // 여러가닥으로 뻗어나가려면 for 문 안에서 재귀함수를 호출해야 한다.
          ch[i] = 0; // 그리고 다시 복기 했을 때 cheker 함수를 풀어준다.
        }
      }
    }
  }

  DFS(0);

  return answer;
}
