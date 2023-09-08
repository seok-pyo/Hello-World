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

// 함수가 호출되면 스택에 스택프레임이 만들어지고 함수에 대한 정보가 쌓인다. (매개변수, 지역변수, 복귀주소)
