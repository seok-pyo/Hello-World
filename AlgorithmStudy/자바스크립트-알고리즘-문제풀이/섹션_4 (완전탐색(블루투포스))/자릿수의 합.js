function solution(n) {
  // 첫번째 문제 풀이
  let zip = (a, b) => a.map((v, i) => [v, b[i]]);
  let sumA = n.map((v) =>
    v
      .toString()
      .split("")
      .map((v) => parseInt(v))
      .reduce((a, c) => a + c, 0)
  );
  let result = zip(n, sumA);
  let tmp = 0;
  let tmpArr = [];
  console.log(result);
  result.map((v, i) =>
    v[1] >= tmp ? ((tmp = v[1]), tmpArr.push(v[0])) : false
  );
  console.log(tmpArr);
  return Math.max(...tmpArr);
}
