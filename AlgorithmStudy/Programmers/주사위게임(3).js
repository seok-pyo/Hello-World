// 풀이 참고 _ 1

function count(arr) {
  const counter = new Map();
  for (const num of arr) {
    counter.set(num, (counter.get(num) || 0) + 1);
  }
  const sortedByCnt = [...counter.keys()].sort(
    (a, b) => counter.get(b) - counter.get(a)
  );
  const maxCnt = Math.max(...counter.values());
  return [sortedByCnt, maxCnt];
}

function solution(a, b, c, d) {
  const [arr, maxCnt] = count([a, b, c, d]);
  const [p, q, r, s] = arr;
  if (arr.length === 1) {
    return p * 1111;
  }
  if (arr.length === 2) {
    return maxCnt === 2 ? (p + q) * Math.abs(p - q) : (10 * p + q) ** 2;
  }
  if (arr.length === 3) {
    return q * r;
  }
  return Math.min(p, q, r, s);
}

// 풀이 참고 _ 2

function solution(a, b, c, d) {
  const map = new Map();
  for (const data of [a, b, c, d]) {
    map.set(data, (map.get(data) || 0) + 1);
  }

  const sortedArr = [...map].sort((a, b) => {
    if (a[1] === b[1]) return b[0] - a[0];
    else return b[1] - a[1];
  });

  if (map.size === 1) return 1111 * sortedArr[0][0];
  else if (map.size === 3) return sortedArr[1][0] * sortedArr[2][0];
  else if (map.size === 4) return sortedArr[3][0];
  else if (sortedArr[0][1] === 3)
    return (10 * sortedArr[0][0] + sortedArr[1][0]) ** 2;
  else
    return (
      (sortedArr[0][0] + sortedArr[1][0]) * (sortedArr[0][0] - sortedArr[1][0])
    );
}

// Map 생성자, Set 객체, 배열 최대값, 최소값, 스프레드 연산자
// https://hianna.tistory.com/415
// https://hianna.tistory.com/487
