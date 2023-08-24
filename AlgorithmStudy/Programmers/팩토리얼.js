function solution(n) {
  let i = 1;
  let factorial = 1;
  while (factorial <= n) {
    i += 1;
    factorial *= i;
  }
  return i - 1; // 반복문의 마지막 조건을 통과하게 되면서 원하는 값이 다르게 나온다.
}

// 팩토리얼 구하는 코드
function solution(n) {
  let i = 1;
  let factorial = 1;
  while (factorial > 0) {
    i += 1;
    factorial *= i;
    if (i >= n) {
      break;
    }
  }
  return factorial;
}

function solution(n) {
  let fac = 1;
  for (let i = 1; i <= n; i++) {
    fac *= i;
  }
  return fac;
}
