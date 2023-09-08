// 강의 전 코드 작성
function solution(n) {
  console.log(n);
  if (n - 1 > 0) {
    solution(n - 1);
  }
}

solution(5);

// 강의 코드 추가
function solution(n) {
  function DFS(L) {
    if (L === 0) return;
    else {
      DFS(L - 1); // 호출하고 D(3) 중단하고 D(2) 호출
      console.log(L);
    }
  }
  DFS(n);
}
