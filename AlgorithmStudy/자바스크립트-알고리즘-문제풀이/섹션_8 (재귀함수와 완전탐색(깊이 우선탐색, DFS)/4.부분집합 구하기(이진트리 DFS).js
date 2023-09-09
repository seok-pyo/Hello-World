// 강의 듣기 전 코드 작성
function solution(n) {
  let check = Array.from({ length: n }, () => 0);
  let arr = [];
  function DFS(v) {
    if (v === n) {
      arr = [];
      for (let i = 0; i < check.length; i++) {
        if (check[i] === 1) arr.push(i + 1);
      }
      if (arr.length !== 0) console.log(arr);
    } else {
      check[v] = 1;
      DFS(v + 1);
      check[v] = 0;
      DFS(v + 1);
    }
  }
  DFS(0);
}
// 강의 코드 추가
function solution(n) {
  let check = Array.from({ length: n + 1 }, () => 0);
  let arr = [];
  function DFS(v) {
    if (v === n + 1) {
      arr = [];
      for (let i = 1; i <= n; i++) {
        if (check[i] === 1) arr.push(i);
      }
      if (arr.length !== 0) console.log(arr);
    } else {
      check[v] = 1;
      DFS(v + 1);
      check[v] = 0;
      DFS(v + 1);
    }
  }
  DFS(1);
}
// 다른 사람 코드 추가
function solution(n) {
  function DFS(v, arr) {
    if (v > n) return;
    else {
      let set1 = arr.slice();
      let set2 = arr.slice();
      set1.push(v);
      DFS(v + 1, set1);
      console.log(set1.join(" "));
      DFS(v + 1, set2);
    }
    DFS(1, []);
  }
}

solution(3);
