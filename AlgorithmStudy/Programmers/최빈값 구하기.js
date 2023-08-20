// 카운터 만들기 - 주사위게임, 겹치는 선분의 길이
// map으로 카운터 만들고, sort 로 분류

function solution(array) {
  let m = new Map();
  for (let n of array) m.set(n, (m.get(n) || 0) + 1);
  m = [...m].sort((a, b) => b[1] - a[1]);
  return m.length === 1 || m[0][1] > m[1][1] ? m[0][0] : -1;
}

// 풀이 2번
// ... acc 누적값 복사
const solution = (array) => {
  const counter = array.reduce(
    (acc, cur) => ({
      ...acc,
      [cur]: (acc[cur] || 0) + 1,
    }),
    {}
  );

  const items = Object.keys(counter) // counter 키들을 배열로 반환
    .map((key) => [Number(key), counter[key]]) // 키와 해당 키의 값으로 이루어진 배열로 저장
    .sort((a, b) => b[1] - a[1]); // 두 배열의 두 번째 요소를 비교하여 내림차순으로 정렬

  if (items[0][1] === items?.[1]?.[1]) {
    // 최빈값이 하나가 아니면 -1 리턴
    return -1;
  }

  return items[0][0]; // 최빈값이 하나인 경우 해당 키 리턴
};

// reduce 문제 풀이
function solution(array) {
  const cntObj = array.reduce(
    (a, c) => (a[c] ? { ...a, [c]: a[c] + 1 } : { ...a, [c]: 1 }),
    {}
  );
  const maxVal = Math.max(...Object.values(cntObj));
  const maxArr = Object.keys(cntObj).filter((el) => cntObj[el] === maxVal);
  return maxArr.length >= 2 ? -1 : +maxArr[0];
}
