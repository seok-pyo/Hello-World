// dy 배열을 for문으로 돌면서 잘라서 끝에 있는 수(i)를 배열의 마지막으로 생각하고, j를 확인해서 문제 조건에 따른 배열이
// 만들어지는지를 확인한다.
// for j를 돌리는 이유는 앞에 만들어진 배열의 개수 중에서는 같은 값이 있을 수 있으니 최대값을 찾아서 거기에 자기자신(1)을 더해준다.
function solution(arr) {
  let answer = 0;
  let dy = Array.from({ length: arr.length }, () => 0);
  dy[0] = 1;
  for (let i = 1; i < arr.length; i++) {
    let max = 0;
    for (let j = i - 1; j >= 0; j++) {
      if (arr[j] < arr[i] && dy[j] > max) {
        max = dy[j];
      }
    }
    dy[j] = max + 1;
    answer = Math.max(answer, max);
  }
  return answer;
}
