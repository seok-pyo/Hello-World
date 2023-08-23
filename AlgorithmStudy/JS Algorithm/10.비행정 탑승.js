// 그리디 알고리즘 (잔돈 문제에도 적용 가능)
function solution(data) {
  if (data[0].reduce((a, c) => a + c) < data[1]) {
    return -1;
  }
  let count = 0;
  let temp = 0;
  data[0].sort((a, b) => b - a);
  // 정렬 후 앞에서부터 해당 값을 만족하는지 체크
  for (let i of data[0]) {
    if (i >= data[0]) {
      count += 1;
    } else if (i < data[1]) {
      temp += i;
    }
    if (temp >= data[1]) {
      count += 1;
      temp = 0;
    }
  }
  return count;
}
// 하지만 전부 data[1] 보다 작다면 조합으로 풀어야 한다.

// 조합으로 풀이하기
function combinations(arr, num) {
  const result = [];

  if (num === 1) {
    return arr.map((v) => [v]);
  }
  arr.forEach((fixed, index, origin) => {
    const rest = origin.slice(index + 1);
    const combiArr = combinations(rest, num - 1);
    const attached = combiArr.map((v) => [fixed, ...v]);
    result.push(...attached);
  });
  return result;
}

function solution(data) {
  if (data[0].reduce((a, c) => a + c) < data[1]) {
    return -1;
  }
  let count = 0;
  let copyData = data[0].slice(); // 얕은 복사
  for (let i of copyData) {
    if (i >= data[1]) {
      count += 1;
      data[0].splice(data[0].indexOf(i), 1); // 해당 숫자 삭제
    }
  }
  while (data[0].length !== 0) {
    if (data[0].length === 1) {
      return count;
    }
    let combi = [];
    for (let i = 2; i < data[0].length + 1; i++) {
      // 전체 배열의 길이만큼의 조합도 확인해야 하기 때문에
      // data[0].length + 1 을 해준다.
      for (let com of combinations(data[0], i)) {
        let sum = com.reduce((a, c) => a + c, 0);
        if (sum >= data[1]) {
          combi.push([sum, com]);
        }
      }
    }
    if (combi.toString() == "") {
      return count;
    }
    combi.sort((a, b) => a[0] - b[0]);

    count += 1;
    for (let i of combi[0][1]) {
      data[0].splice(data[0].indexOf(i), 1);
    }
  }
  return count;
}
