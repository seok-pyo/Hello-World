// 객체로 해쉬맵 만들기
function solution(str) {
  let hash = {};
  for (let c of text) hash[c] = ++hash[c] || 1;
  let keys = Object.keys(hash);
  let val = Object.values(hash);
  return keys[val.indexOf(Math.max(...val))];
}

// Map으로 해쉬맵 만들기

function solution(str) {
  let hash = new Map();
  for (let c of str) hash.set(c, hash.get(c) + 1 || 1);
  return [...hash].reduce((a, c) => (a[1] < c[1] ? c : a))[0]; // reduce로 최대값 구하기
}

// 강의 풀이
function solution(s) {
  let answer;
  let hash = new Map();
  for (let x of s) {
    if (hash.has(x)) hash.set(x, hash.get(x) + 1);
    // 해쉬맵에 자료가 있다면 꺼낸 후 1을 더하고 다시 넣어준다.
    else hash.set(x, 1);
  }

  let max = Number.MIN_SAFE_INTEGER;
  for (let [key, val] of hash) {
    if (val > max) {
      max = val; // 반복하면서 확인하는데 val 이 크다면 최대값이 된다.
      answer = key; // 최대값을 계속 해서 확인하고, value가 최대값일 때 key가 답이 된다.
    }
  }
  return key;
}
