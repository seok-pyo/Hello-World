function solution(str) {
  let answer = "";
  let flag = 0;
  for (let s of str) {
    if (s === "(") flag++;
    else if (s === ")") flag--;
    if (flag === 0 && s !== ")") answer += s;
  }
  return answer;
}
