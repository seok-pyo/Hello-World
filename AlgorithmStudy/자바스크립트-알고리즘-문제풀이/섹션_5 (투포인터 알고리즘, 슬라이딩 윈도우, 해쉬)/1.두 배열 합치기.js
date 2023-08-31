function solution(arr, arr2) {
  let answer = [];
  let p1 = (p2 = 0);
  let n = arr.length;
  let m = arr2.length;
  while (p1 < n && p2 < m) {
    if (arr[p1] <= arr2[p2]) answer.push(arr[p1++]);
    else answer.push(arr2[p2++]);
  }
  while (p1 < n) answer.push(arr[p1++]);
  while (p2 < m) answer.push(arr2[p2++]);

  return answer;
}

let a = [1, 3, 5];
let b = [2, 3, 6, 7, 9];
console.log(solution(a, b));
