function solution(str) {
  let cnt = 1;
  let answer = "";
  // str += " " // i 와 i + 1을 비교할 때 배열 바깥쪽은 비교가 안될 수 있다.
  // 이 문제 같은 경우 마지막 문자열 비교여서 str[i] 와 undefined 를 비교하게 된다.
  for (let i = 0; i < str.length; i++) {
    if (str[i] === str[i + 1]) {
      cnt++;
    } else {
      answer += str[i];
      if (cnt > 1) {
        answer += "" + cnt;
      }
      cnt = 1;
    }
  }
  return answer;
}
