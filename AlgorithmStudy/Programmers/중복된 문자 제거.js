// 파이썬과 다르게 자바스크립트에서는 set으로 변환할 때 순서를 보장한다.
function solution(my_string) {
  const mySet = new Set(my_string.split(""));
  return Array.from(mySet).join("");
}

function solution(my_string) {
  return [...new Set(my_string)].join("");
}
