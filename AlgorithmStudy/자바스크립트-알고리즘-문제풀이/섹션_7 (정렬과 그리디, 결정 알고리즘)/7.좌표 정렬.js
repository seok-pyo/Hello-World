function solution(arr) {
  return arr
    .map((v) => v.join(""))
    .sort()
    .map((v) => v.split(""));
}

// 강의 코드 추가
// sort 내에 콜백 함수 활용..!
let arr = [
  [2, 7],
  [1, 3],
  [1, 2],
  [2, 5],
  [3, 6],
];

function solution(arr) {
  return arr.sort((a, b) => {
    if (a[0] === b[0]) return a[1] - b[1];
    else return a[0] - b[0];
  });
}
