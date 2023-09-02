function solution(data) {
  let stack = 0;
  for (let i of data) {
    if (i === "(") stack++;
    else stack--;
  }
  if (stack !== 0) return "NO";
  return "YES";
}
