function solution(polynomial) {
  const arr = polynomial.split(" + ");
  const xNum = arr
    .filter((n) => n.includes("x"))
    .map((n) => n.replace("x", "") || "1") // 논리 OR 연산자는 왼쪽 피연산자를 평가한 결과과 falsy 값이 되는
    // 순간 오른쪽 피연산자를 반환한다. falsy 값은 [ 빈문자열, 0, null, undefined, NaN, false ]
    .reduce((acc, cur) => acc + parseInt(cur, 10), 0);
  const num = arr
    .filter((n) => !inNaN(n))
    .reduce((acc, cur) => acc + parseInt(cur, 10), 0);

  let answer = [];
  if (xNum) answer.push(`${xNum === 1 ? "" : xNum}x`);
  if (num) answer.push(num);

  return answer.join(" + ");
}
