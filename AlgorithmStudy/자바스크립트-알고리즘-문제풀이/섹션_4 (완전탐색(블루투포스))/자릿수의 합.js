function solution(n) {
  // 첫번째 문제 풀이
  let zip = (a, b) => a.map((v, i) => [v, b[i]]);
  let sumA = n.map((v) =>
    v
      .toString()
      .split("")
      .map((v) => parseInt(v))
      .reduce((a, c) => a + c, 0)
  ); // 한 줄 코드의 개선의 여지 reduce에서 현재값을 Number로 숫자화 해준다.
  // n.map((v)=> v.toString().split('').reduce((a,c) => a + Number(c), 0))
  let result = zip(n, sumA);
  let tmp = 0;
  let tmpArr = [];
  result.map((v, i) =>
    v[1] >= tmp ? ((tmp = v[1]), tmpArr.push(v[0])) : false
  );
  return Math.max(...tmpArr);
}

// 강의 풀이 -> 각 자리수 더하기 ( 나머지 연산자 )
function solution(arr) {
  let answer,
    max = Number.MIN_SAFE_INTEGER;
  for (let x of arr) {
    let sum = 0,
      tmp = x; // 기존의 원소값 변경시키지 않게(반환값으로 돌려줘야 하니까)
    while (tmp) {
      sum += tmp % 10;
      tmp = Math.floor(tmp / 10);
    } // 각 자리수 더하기
    if (sum > max) {
      max = sum;
      answer = x;
    } else if (sum === max) {
      if (x > answer) answer = x; // answer 는 현재 원소 이전에 가장 큰 값(원소 값 자체가) x는 현재 원소
    }
  }
}
