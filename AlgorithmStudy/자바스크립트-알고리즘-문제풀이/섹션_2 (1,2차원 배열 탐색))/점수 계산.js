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
