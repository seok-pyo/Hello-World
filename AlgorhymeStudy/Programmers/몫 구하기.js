function solution(num1, num2) {
  var answer = ~~(num1 / num2);
  // Math.floor(num1/num2) -> 내림
  return answer;
}

// 숫자 비교하기
function solution(num1, num2) {
  return num1 === num2 ? 1 : -1;
}
