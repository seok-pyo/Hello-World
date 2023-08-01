// 최대공약수 재귀함수를 통해서 구하기
// 유클리드 호제법은 2개의 자연수의 최대공약수를 구하는 알고리즘이다.
// a,b 에 대해서 a를 b로 나눈 나머지를 r이라 하면 (단, a>b) a와 b의 최대공약수는 b와 r의 최대공약수와 같다.
// 이 성질에 따라, b를 r로 나눈 나머지 r'를 구하고, 다시 r을 r'로 나눈 나머지를 구하는 과정을 반복하여
// 나머지가 0이 되었을 때 나누는 수가 a 와 b의 최대공약수이다.
// 이는 명시적으로 기술괸 가장 오래된 알고리즘으로 알려져 있다.
// a와 b의 최대공약수가 1이면, gcd(a,b) = 1 두 수는 서로소 관계에 있다고 한다.

// LCM(최소공배수) => 두 자연수의 곱 / 최대공약수

function fnGCD(a, b) {
  return a % b ? fnGCD(b, a % b) : b;
}

function solution(denom1, num2, denom2, num2) {
  let denum = denum1 * num2 + denum2 * num1;
  let num = num1 * num2;
  let gcd = fnGCD(denum, num);

  return [denum / gcd, num / gcd];
}
