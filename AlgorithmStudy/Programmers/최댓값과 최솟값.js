function solution(s) {
  let arr = s.split(" ").map((v) => Number(v));
  let max = Math.max(...arr);
  let min = Math.min(...arr);
  let answer = "";
  return (answer += min + " " + max);
}
