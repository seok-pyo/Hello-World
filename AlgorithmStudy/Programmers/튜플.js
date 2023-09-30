// 배열 길이에 따라서 정렬하기
// const result = [];
// let tmp = Number.MAX_SAFE_INTEGER;
// for (let x of arr) {
//   tmp = Math.min(tmp, x.length);
//   if (tmp < x.length) result.push(x);
//   else result.unshift(x);
// }

// 중괄호 안에 있는 숫자 패턴을 추출하고 배열로 변환
// let s = "{{2},{2,1},{2,1,3},{2,1,3,4}}";
// let regex = /{([^}]+)}/g;
// let matches = [...s.matchAll(regex)];

// 배열 길이는 1부터 n까지

// 나의 풀이
function solution(s) {
  let reg = /{([^}]+)}/g;
  let reg2 = /[{}]/g;
  let arr = s.match(reg);
  let answer = [];
  for (let x of arr) {
    answer.push(x.replace(reg2, ""));
  }
  let result = answer.map((v) => v.split(","));
  let F_RESULT = [];
  for (let x of result) {
    F_RESULT[x.length - 1] = x;
  }
  let RF = new Array(...new Set(F_RESULT.flat()));
  return RF.map((v) => Number(v));
}
