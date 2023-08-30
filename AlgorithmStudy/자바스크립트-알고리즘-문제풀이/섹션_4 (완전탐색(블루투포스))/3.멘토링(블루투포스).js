// 배열의 인덱스로 해결하는 방법
function solution(arr) {
  let m = arr.length;
  let n = arr[0].length;
  let answer = [];
  for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= n; j++) {
      let cnt = 0;
      for (let k = 0; k < m; k++) {
        if (arr[k].indexOf(i) < arr[k].indexOf(j)) {
          cnt++;
        }
      }
      if (cnt === m) answer.push([i, j]);
    }
  }
  return answer.length;
}

// 완전탐색(블루투포스, 4중 반복문)
function solution(test) {
  let answer = 0;
  m = test.length;
  n = test[0].length;
  for (let i = 1; i <= n; i++) {
    // 길이 변수 확인 잘하자. 경우의 수는 n * n
    // 2가지 조합을 모두 뽑아낸다.
    for (let j = 1; j <= n; j++) {
      let cnt = 0;
      for (let k = 0; k < m; k++) {
        let pi = (pj = 0); // 등수(인덱스)
        for (let s = 0; s < n; s++) {
          if (test[k][s] === i) pi = s;
          if (test[k][s] === j) pj = s;
        }
        if (pi < pj) cnt++;
      }
      if (cnt === m) answer++; // n * m 의 경우의 수, 반복문 안에 위치한다.
    }
  }
  return answer;
}

let arr = [
  [3, 4, 1, 2],
  [4, 3, 2, 1],
  [3, 1, 4, 2],
];
console.log(solution(arr));
