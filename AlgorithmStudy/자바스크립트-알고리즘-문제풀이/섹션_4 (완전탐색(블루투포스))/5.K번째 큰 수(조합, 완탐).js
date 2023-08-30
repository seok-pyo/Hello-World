// 조합 활용 풀이
function combi(arr, num) {
  const result = [];

  if (num === 1) {
    return arr.map((v) => [v]);
  }
  arr.forEach((fixed, index, origin) => {
    const rest = origin.slice(index + 1);
    const combiArr = combi(rest, num - 1);
    const attached = combiArr.map((v) => [fixed, ...v]);
    result.push(...attached);
  });
  return result;
}

function solution(arr, n) {
  let com = combi(arr, 3).map((v) => v.reduce((a, c) => a + c));
  let mySet = new Set(com);

  return Array.from(mySet).sort((a, b) => b - a)[n - 1];
}

// 삼중 for문 3가지 조합 뽑아내기
function solution(n, k, card) {
  let answer;
  let tmp = new Set();
  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      // j는 i보다 1 크게, 다음 원소부터
      for (let k = j + 1; k < n; k++) {
        // k는 j보다 1 크게, 다음 원소부터
        tmp.add(card[i] + card[j] + card[k]);
      }
    }
  }
  let a = Array.from(tmp).sort((a, b) => b - a);
  answer = a[k - 1];
  return answer;
}

let arr = [13, 15, 34, 23, 45, 65, 33, 11, 26, 42];
console.log(solution(10, 3, arr));
