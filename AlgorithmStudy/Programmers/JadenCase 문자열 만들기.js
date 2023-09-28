function solution(s) {
  return s
    .split(" ")
    .map((word) =>
      word.replace(/\w/g, (c, index) => {
        return index === 0 ? c.toUpperCase() : c.toLowerCase();
      })
    )
    .join(" ");
}

// 나의 풀이

function solution(s) {
  const answer = [];
  s = s.toLowerCase();
  s.split(" ").forEach((v) => {
    if (isNaN(v.charAt(0))) answer.push(v.charAt(0).toUpperCase() + v.slice(1));
    else answer.push(v);
  });
  return answer.join(" ");
}
// charAt() 과 index 접근의 차이 / '' 과 undefined;
// 문자열을 그대로 반환해야 한다. 만약 맨 앞에 빈문자열이 연속되어 있어도 변환 처리 후 빈문자열도 그대로 반환해야 한다.
