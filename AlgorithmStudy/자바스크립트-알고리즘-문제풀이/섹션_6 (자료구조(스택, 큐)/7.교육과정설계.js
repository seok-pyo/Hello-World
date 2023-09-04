function solution(p, s) {
  let answer = "YES";
  let pq = p.split("");
  for (let c of s) {
    if (c === pq[0]) pq.shift();
  }
  if (pq.length === 0) return answer;
  return "NO";
}

// 강의 코드 추가
function solution(need, plan) {
  let answer = "YES";
  let queue = need.split("");
  for (let x of plan) {
    if (queue.includes(x)) {
      if (x !== queue.shift()) return "NO"; // 조건이 거짓이어도 queue.shift()는 실행한다. (조건의 비교를 위해)
    }
  }
  if (queue.length > 0) return "NO";
  return answer;
}
