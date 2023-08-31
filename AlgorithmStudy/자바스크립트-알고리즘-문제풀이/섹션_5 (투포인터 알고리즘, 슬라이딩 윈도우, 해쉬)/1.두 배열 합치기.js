function solution(arr, arr2) {
  let answer = [];
  let p1 = (p2 = 0);
  let n = arr.length;
  let m = arr2.length;
  while (p1 < n && p2 < m) {
    if (arr[p1] <= arr2[p2]) answer.push(arr[p1++]);
    else answer.push(arr2[p2++]);
  }
  while (p1 < n) answer.push(arr[p1++]); // 두개를 비교하고 한쪽 배열의 길이가 짧아서 끝났다면 나머지 배열의 남은 원소들을 전부 추가한다.
  while (p2 < m) answer.push(arr2[p2++]);

  return answer;
}

let a = [1, 3, 5];
let b = [2, 3, 6, 7, 9];
console.log(solution(a, b));

// a++(후위 증가 연산자)
// 후위 증가 연산자는 변수의 값을 먼저 사용한 후에 그 값에 1을 증가시킨다.
// let a = 5; // a에 5 할당
// let b = a++; // b에 5 할당, a는 6이 된다.

// ++a(전위 증가 연산자)
// 전위 증가 연산자는 변수의 값을 1 증가시킨 후에 그 값을 사용한다.
// let x = 5;
// let y = ++x; // y에 6 할당, x도 6이 된다.
