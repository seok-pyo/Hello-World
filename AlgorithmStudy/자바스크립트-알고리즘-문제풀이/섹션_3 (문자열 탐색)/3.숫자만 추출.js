function solution(s) {
  let answer = "";
  for (let x of s) {
    if (!isNaN(x)) answer += x;
  }
  return parseInt(answer);
}

function solution(s) {
  let answer = "";
  for (let x of s) {
    if (!isNaN(x)) answer += x; // answer = answer*10 + Number(x)
  }
  return parseInt(answer);
}
