function solution(t1, t2) {
  let ha = new Map();
  for (let x of t1) {
    ha.set(x, ha.get(x) + 1 || 1);
  }
  for (let s of t2) {
    if (!ha.has(s)) return "NO";
    else {
      if (ha.get(s) === 0) return "NO";
      ha.set(s, ha.get(s) - 1);
    }
  }
  for (let [x, y] of ha) {
    if (y !== 0) return "NO";
  }
  return "YES";
}

// 조건을 간결하고 깔끔하게 정리할 수 있다.

function solution(t1, t2) {
  let ha = new Map();
  for (let x of t1) {
    ha.set(x, ha.get(x) + 1 || 1);
  }
  for (let s of t2) {
    if (!ha.has(s) || ha.get(s) === 0) return "NO";
    ha.set(s, ha.get(s) - 1);
  }
  return "YES";
}

// 객체를 사용한 아나그램 판별 프로그램
function solution(a, b) {
  if (a.length !== b.length) return false;
  let charCount = {};

  for (let c of a) charCount[c] = charCount[c] || 0 + 1;

  for (let c of b) {
    if (!charCount[c]) return false;
    charCount[c]--;
  }
  return true;
}
