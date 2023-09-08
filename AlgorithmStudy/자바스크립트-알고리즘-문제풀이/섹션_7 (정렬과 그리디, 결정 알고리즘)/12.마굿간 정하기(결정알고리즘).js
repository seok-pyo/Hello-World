function cabinCount(cabin, distance) {
  let cnt = 1,
    ep = cabin[0];
  for (let i = 1; i < cabin.length; i++) {
    if (cabin[i] - ep >= distance) {
      cnt++;
      ep = cabin[i];
    }
  }
  return cnt;
}

function solution(cabin, n) {
  let answer;
  cabin.sort((a, b) => a - b);
  let lt = 1;
  let rt = cabin[cabin.length - 1];
  while (lt <= rt) {
    let mid = Math.floor((lt + rt) / 2);
    if (cabinCount(cabin, mid) >= n) {
      lt = mid + 1;
      answer = mid;
    } else rt = mid - 1;
  }
  return answer;
}

let arr = [1, 2, 8, 4, 9];
console.log(solution(arr, 3));
