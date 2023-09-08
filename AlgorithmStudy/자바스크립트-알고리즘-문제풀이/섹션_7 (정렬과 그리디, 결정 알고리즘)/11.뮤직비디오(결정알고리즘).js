// 처음 시도

function solution(arr, n) {
  let lt = Math.max(...arr);
  let rt = arr.reduce((a, c) => a + c);
  let sum = 0;
  let cnt = 0;
  while (lt <= rt) {
    let mid = parseInt((lt + rt) / 2);
    for (let i = 0; i < arr.length; i++) {
      sum += arr[i];
      if (sum >= mid) {
        cnt++;
        sum = 0;
      }
    }
    if (cnt > n) lt = mid + 1;
    else if (cnt < n) rt = mid - 1;
    cnt = 0;
    if (lt === rt) return mid;
  }
}

// 강의 코드 추가
// 이진탐색 알고리즘으로 범위 설정 후에 그 범위 안에서 추가 알고리즘을 활용해서 범위를 수정하는 알고리즘으로 만들어야 한다.
function count(songs, capacity) {
  let cnt = 1,
    sum = 0; // cnt 는 DVD의 개수, sum은 dvd의 용량
  for (let s of songs) {
    if (sum + s > capacity) {
      cnt++;
      sum = s; // 부분 까지 더하고 , 그 이후에 원소들의 합을 구하는 방법.
    } else sum += s;
  }
  return cnt;
}

function solution(songs, m) {
  let answer;
  let lt = Math.max(...songs);
  let rt = songs.reduce((a, c) => a + c, 0);
  while (lt <= rt) {
    let mid = Math.floor((lt + rt) / 2);
    if (count(songs, mid) <= m) {
      answer = mid;
      rt = mid - 1;
    } else lt = mid + 1;
  }
  return answer;
}
