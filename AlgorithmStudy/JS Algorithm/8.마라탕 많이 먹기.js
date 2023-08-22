// 순열, 완전탐색
// 조합 스니펫
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

// 문제풀이(조합)
function solution(data) {
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
  function delNext(arr, n) {
    for (let i = 0; i < arr.length; i++) {
      for (let j = 0; j < n - 1; j++) {
        if (arr[i][j] + 1 == arr[i][j + 1]) {
          arr[i] = [];
          break;
        }
      }
    }
  }

  const index = [0, 1, 2, 3, 4, 5, 6, 7];
  let com4 = combinations(index, 4);
  let com3 = combinations(index, 3);

  delNext(com4, 4);
  delNext(com3, 3);

  com4 = com4.filter((v) => v.toString() !== "");
  com3 = com3.filter((v) => v.toString() !== "");

  let com = com3.concat(com4);
  com = com.map((v) => v.reduce((a, c) => a + data[c], 0));

  return Math.max(...com);
}

// 동적프로그래밍

function findMaxNonAdjacentSum(arr) {
  if (arr.length === 0) {
    return 0; // 빈 배열인 경우 합은 0
  }

  if (arr.length === 1) {
    return arr[0]; // 원소가 하나뿐인 경우 해당 원소 반환
  }

  let inclusive = arr[0]; // 현재 원소를 포함한 최대 합
  let exclusive = 0; // 현재 원소를 포함하지 않은 최대 합

  for (let i = 1; i < arr.length; i++) {
    const temp = inclusive;
    inclusive = Math.max(inclusive, exclusive + arr[i]);
    exclusive = temp;
  }

  return Math.max(inclusive, exclusive);
}
