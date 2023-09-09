// 문제 파악을 잘못한 케이스, 더했을 때 원소의 합이
function solution(arr) {
  let answer = "NO";
  let n = arr.length - 1;
  let result = [];
  function DFS(v, a) {
    if (v > n) {
      return;
    } else {
      let set1 = a.slice();
      let set2 = a.slice();
      set1.push(arr[v]);
      DFS(v + 1, set1);
      result.push(set1);
      DFS(v + 1, set2);
    }
  }
  DFS(0, []);
  let sum = result.map((v) => v.reduce((a, c) => a + c, 0));

  for (let s of sum) if (sum.indexOf(s) !== sum.lastIndexOf(s)) answer = "YES";

  return answer;
}

// 강의 코드 추가
function solution(arr) {
  let answer = "NO",
    flag = 0;
  let total = arr.reduce((a, c) => a + c, 0);
  let n = arr.length;
  function DFS(L, sum) {
    if (flag) return;
    if (L === n) {
      if (total - sum === sum) {
        answer = "YES";
        flag = 1;
      }
    } else {
      DFS(L + 1, sum + arr[L]);
      DFS(L + 1, sum);
    }
  }
  DFS(0, 0);
  return answer;
}
