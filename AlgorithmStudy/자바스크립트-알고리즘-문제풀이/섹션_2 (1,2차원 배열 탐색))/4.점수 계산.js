function solution(score) {
  let answer = 0;
  let cnt = 0;
  for (x of score) {
    if (x === 1) {
      cnt++;
      answer += cnt;
    } else {
      cnt = 0;
    }
  }
  return answer;
}

// 문제 다시 풀어보기
function solution(arr) {
  let answer = 0;
  let flag = 0;
  for (let i = 0; i < arr.length; i++) {
    // 인덱스로 접근할 필요가 없을 듯..
    if (arr[i] === 1) flag++;
    else flag = 0;
    answer += arr[i] * flag;
  }
  return answer;
}
