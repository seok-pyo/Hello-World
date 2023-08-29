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
