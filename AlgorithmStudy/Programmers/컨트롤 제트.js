function solution(s) {
  s = s.split(" ");
  let result = [];
  for (let i of s) {
    if (i === "Z") {
      result.pop();
    } else {
      result.push(+i);
    }
  }
  return result.reduce((a, c) => a + c, 0);
}

// 정규표현식 풀이
function solution(s) {
  let numbers = s.replace(/\-?\d+\s+\Z/g, "").match(/\-?\d+/g); // match는 배열을 반환
  return numbers ? numbers.map((i) => +i).reduce((a, c) => a + c, 0) : 0;
}

let text = "11023401";
let numbers = text.match(/10|[1-9]/g); // 10 도 추출
