function solution(num1, num2) {
  var answer = ~~(num1 / num2);
  // ~ 부정연산자
  // 5 > 1001 > 0110 (비트를 다 뒤집으면 -(n+1)이 된다)
  // Math.floor(num1/num2) -> 내림(몫만 구할 수 있다)
  return answer;
}

// 숫자 비교하기
function solution(num1, num2) {
  return num1 === num2 ? 1 : -1;
}
