function checker(t1, t2) {
  let ha = new Map();
  for (let x of t1) {
    ha.set(x, ha.get(x) + 1 || 1);
  }
  for (let s of t2) {
    if (!ha.has(s) || ha.get(s) === 0) return false;
    ha.set(s, ha.get(s) - 1);
  }
  return true;
}

function solution(t1, t2) {
  let n = t1.length;
  let m = t2.length;
  let lp = 0;
  let answer = 0;

  for (let rp = m; rp <= n; rp++) {
    if (checker(t1.slice(lp, rp), t2)) answer++;
    lp++;
  }
  return answer;
}

// 강의 풀기 전 시도 (x)

function solution(t1, t2) {
  let checker = (a, b) => {
    if (a.size !== b.size) return false;
    for (let s of b.keys()) {
      if (!a.has(s) || a.get(s) !== b.get(s)) return false;
    }
    return true;
  };
  let n = t1.length;
  let m = t2.length;
  let tH = new Map();
  let sH = new Map();
  let answer = 0;
  for (let x of t2) tH.set(x, tH.get(x) + 1 || 1);
  let lp = 0;
  for (let rp = m - 1; rp < n; rp++) {
    sH.set(t1[lp], 1);
    sH.set(t1[lp + 1], 1);
    sH.set(t1[rp], 1);
    if (checker(sH, tH)) answer++;
    sH.delete(t1[lp]);
    lp++;
  }
  return answer;
}

// 강의 수강 후 코드 작성
function compareMaps(map1, map2) {
  if (map1.size !== map2.size) return false;
  for (let [key, val] of map2) {
    if (!map1.has(key) || map1.get(key) !== val) return false;
  }
  return true;
}

function solution(s, t) {
  let answer = 0;
  let tH = new Map();
  let sH = new Map();
  for (let x of t) {
    if (tH.has(x)) tH.set(x, tH.get(x) + 1);
    else tH.set(x, 1);
  }
  let len = t.length - 1;
  for (let i = 0; i < len; i++) {
    if (sH.has(s[i])) sH.set(s[i], sH.get(s[i]) + 1);
    else sH.set(s[i], 1);
  }
  let lp = 0;
  for (let rp = len; rp < s.length; rp++) {
    if (sH.has(s[rp])) sH.set(s[rp], sH.get(s[rp]) + 1);
    else sH.set(s[rp], 1);
    if (compareMaps(sH, tH)) answer++;
    sH.set(s[lp], sH.get(s[lp]) - 1);
    if (sH.get(s[lp]) === 0) sH.delete(s[lp]);
    lp++;
  }
  return answer;
}

// 다른 사람 풀이

function solution(a, b) {
  let answer = 0;
  let aArr = [];
  let tmpArr = [];
  let p1 = (p2 = 0);

  while (p2 < a.length) {
    if (!a[p1]) break;
    tmpArr.push(a[p1++]);

    if (tmpArr.length === 3) {
      aArr.push(tmpArr);
      tmpArr = [];
      p1 = ++p2;
    }
  }

  for (let x of aArr) {
    let map = new Map();
    for (let s of x) map.has(x) ? map.set(s, map.get(s) + 1) : map.set(s, 1);
    console.log(map);
    for (let i = 0; i < b.length; i++) {
      if (map.get(b[i])) map.delete(b[i]);
      else break;
    }

    if (map.size === 0) answer++;
  }

  return answer;
}

// 다른 사람 풀이2

function compareMaps(tmp, sH) {
  let sH1 = new Map();
  for (let [key, val] of sH) {
    sH1.set(key, val);
  }
  for (let x of tmp) {
    if (!sH1.has(x) || sH1.get(x) === 0) return 0; // sH1.get(x) === 0 이 아나그램인지 확인할 수 있는 이유
    sH1.set(x, sH1.get(x) - 1);
  }
  return 1;
}

function solution(s, t) {
  let answer = 0;
  sH = new Map();
  let len = t.length;
  let tmp = s.slice(0, len);
  for (let x of t) {
    if (sH.has(x)) sH.set(x, sH.get(x) + 1);
    else sH.set(x, 1);
  }
  if (compareMaps(tmp, sH)) answer++;

  for (let i = len; i < s.length; i++) {
    tmp = tmp.slice(1);
    tmp = tmp + s[i];
    if (compareMaps(tmp, sH)) answer++;
  }
  return answer;
}

let a = "bacaAacba";
let b = "abc";
console.log(solution(a, b));

// O(n) 강사님 풀이
function solution(s, t) {
  let answer = 0;
  let sH = new Map();
  for (let x of t) {
    sH.set(x, (sH.get(x) || 0) - 1);
  }
  let len = t.length - 1;
  for (let i = 0; i < len; i++) {
    sH.set(s[i], (sH.get(s[i]) || 0) + 1);
    if (sH.get(s[i]) === 0) sH.delete(s[i]);
  }
  let lt = 0;
  for (let rt = len; rt < s.length; rt++) {
    sH.set(s[rt], (sH.get(s[rt]) || 0) + 1);
    if (sH.get(s[rt]) === 0) sH.delete(s[rt]);
    if (sH.size === 0) answer++;
    sH.set(s[lt], (sH.get(s[lt]) || 0) - 1);
    if (sH.get(s[lt]) === 0) sH.delete(s[lt]);
    lt++;
  }
  return answer;
}

console.log(solution("bacacbcba", "abc"));
