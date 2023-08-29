// 소수 판별 함수, 반복문의 회수를 줄이기 위해 약수의 제곱근 까지만 수행한다. 모든 약수는 제곱근만 확인하면 된다(수의 절반 범위 안에 있음)
function isPrime(num) {
  if (num === 1) return false;
  for (let i = 2; i <= Math.floor(Math.sqrt(num)); i++) {
    if (num % i === 0) return false;
  }
  return true;
}
// 섹션 4 1번 문제와 같이 나머지 연산자로도 숫자를 뒤집을 수 있다. while문으로 숫자를 문자열로 만들고, 각 문자열 처리
function solution(arr) {
  let answer = [];
  // 문자열 뒤집기
  for (let x of arr) {
    let tmp = 0;
    while (x) {
      let res = x % 10;
      tmp = tmp * 10 + res;
      x = Math.floor(x / 10);
    }
    if (isPrime(tmp)) answer.push(tmp);
  }
  return answer;
}
