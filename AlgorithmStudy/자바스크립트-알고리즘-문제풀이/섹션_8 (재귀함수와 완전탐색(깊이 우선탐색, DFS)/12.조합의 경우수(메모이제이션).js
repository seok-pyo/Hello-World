// 강의 처음 코드
// function solution(n, r) {
//   function DFS(n, r) {
//     if (r === 0 || n === r) return 1;
//     else {
//       return DFS(n - 1, r - 1) + DFS(n - 1, r);
//     }
//   }

//   return DFS(n, r);
// }

// 메모이제이션 사용
function solution(n, r) {
  let dy = Array.from(Array(35), () => Array(35).fill(0));
  function DFS(n, r) {
    if (dy[n][r] > 0) return dy[n][r];
    if (r === 0 || n === r) return 1;
    else {
      return (dy[n][r] = DFS(n - 1, r - 1) + DFS(n - 1, r)); // 배열에 메모하면서, 그 값을 리턴!
    }
  }
  return DFS(n, r);
}

console.log(solution(33, 19));

// 다른 사람 풀이 추가
// nCr = nC(n-r) > 10C7 = 10C3
function solution(n, r) {
  let answer;
  let diff = n - r;
  if (diff < r) r = diff;
  let dy = Array.from(Array(n), () => Array(r).fill(0));

  function DFS(n, r) {
    if (dy[n - 1][r - 1] > 0) return dy[n - 1][r - 1];

    diff = n - r;
    if (diff < r) r = diff;

    if (r === 1) return n;
    else if (r === n) return 1;
    else return (dy[n - 1][r - 1] = DFS(n - 1, r - 1) + DFS(n - 1, r));
  }

  answer = DFS(n, r);
  return answer;
}
