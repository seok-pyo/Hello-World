function solution(str, n) {
  let idx = []; // n의 인덱스를 모두 찾고, 반복문을 통해 가장 짧은 거리를 찾는 것.
  let result = [];
  let dis = [];
  str.split("").map((v, i) => (v === n ? idx.push(i) : false));
  for (let i = 0; i < str.length; i++) {
    for (num of idx) {
      dis.push(Math.abs(num - i));
    }
    result.push(Math.min(...dis));
    dis = []; // 배열 초기화!
  }
  return result;
}
