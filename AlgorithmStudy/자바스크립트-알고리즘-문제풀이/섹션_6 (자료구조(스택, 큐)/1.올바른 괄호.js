function solution(data) {
  let stack = 0;
  for (let i of data) {
    if (i === "(") stack++;
    else stack--;
  }
  if (stack !== 0) return "NO";
  return "YES";
}

// 강의 풀이
function solution(s) {
  let answer = "YES";
  let stack = [];
  for (let x of s) {
    if (x === "(") stack.push(x);
    else {
      if (stack.length === 0) return "NO"; // 닫기 괄호가 더 많은 경우(stack에 아무것도 존재하지 않게 된다)
      // 스택에는 여는 괄호만 들어가게 되기 때문에
      stack.pop();
    }
  }
  if (stack.length !== 0) return "NO"; // 위에 코드와 논리는 같다. 여는 괄호가 더 많은 경우
  return answer;
}
