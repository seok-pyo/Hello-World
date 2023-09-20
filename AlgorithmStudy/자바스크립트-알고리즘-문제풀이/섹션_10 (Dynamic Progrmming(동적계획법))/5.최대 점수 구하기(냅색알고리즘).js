// 문제가 하나 있을 때, 제한시간부터 해결하는 데 걸리는 시간까지 얻을 수 있는 점수
// dy 배열 인덱스는 시간, 원소는 최대 점수. j를 이동하면서 시간을 모두 탐색한다.
// 제한시간 부터(뒤에서) 탐색해 나가는데, 앞에서부터 탐색하면 문제를 중복해서 해결하게 된다.
function solution(m, arr) {
  let dy = Array.from({ length: m + 1 }, () => 0);
  for (let i = 0; i < arr.length; i++) {
    let ps = arr[i][0];
    let pt = arr[i][1];
    for (let j = m; j >= pt; j--) {
      dy[j] = Math.max(dy[j], dy[j - pt] + ps);
    }
  }
  return dy[m];
}
