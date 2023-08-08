function solution(s1, s2) {
  return s1.filter((v) => s2.includes(v)).length;
}

// 집합 풀이
function solution(s1, s2) {
  return s1.length + s2.length - new Set([...s1, ...s2]).size;
}
// 집합의 교집합, 차집합, 합집합 정리
