function solution(t) {
  let T = t.split("").map((v) => v.toLowerCase());
  let RT = T.slice().reverse();
  if (T.join("") === RT.join("")) {
    return "YES";
  } else {
    return "NO";
  }
}

// 메서드 추가
function solution(s) {
  let answer = "YES";
  s = s.toLowerCase();
  if (s.split("").reverse().join("") !== s) return "NO";
  return answer;
}

function solution(s) {
  let answer = "YES";
  s = s.toLowerCase();
  let len = s.length;
  for (let i = 0; i < Math.floor(len / 2); i++) {
    if (s[i] !== s[len - 1 - i]) return "NO";
  }
  return answer;
}
