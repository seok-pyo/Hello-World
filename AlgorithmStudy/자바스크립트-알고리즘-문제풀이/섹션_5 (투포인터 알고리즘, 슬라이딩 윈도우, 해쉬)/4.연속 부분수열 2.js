// 강의 듣고 시도
function solution(arr, m) {
  let lp = 0,
    sum = 0,
    cnt = 0;
  for (let rp = 0; rp < arr.length; rp++) {
    sum += arr[rp];
    if (sum <= m) cnt += rp - lp + 1;

    while (sum > m) {
      sum -= arr[lp++];
      if (sum <= m) cnt += rp - lp + 1; // 코드의 중복이 보인다. 불필요한 조건문.
      // sum += arr[rp]
      // ...> 두 개 사이에 sum 이 커지는 경우를 추가해 준다.
      // cnt += (rp - lp + 1)
    }
  }
  return cnt;
}

// 강의 코드
function solution(arr, m) {
  let lp = 0,
    sum = 0,
    cnt = 0;
  for (let rp = 0; rp < arr.length; rp++) {
    sum += arr[rp];
    while (sum > m) {
      sum -= arr[lp++];
    }
    cnt += rp - lp + 1;
  }
  return cnt;
}
