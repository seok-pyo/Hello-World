// 10진수를 2진수로 변환하기
// 이 문제를 스택으로 푼다?

function ttt(deci) {
  let result = [];
  let r = 0;
  let q = deci;

  if (deci === 1) {
    return 1;
  } else if (deci === 0) {
    return 0;
  }

  while (q > 0) { // 조건을 1이 아니고, 0보다 크게
    r = q % 2;
    // q = q / 2;
    q = Math.floor(q / 2);
    result.push(r);
  }

  return result.reverse().join('');
}

console.log(ttt(10));

