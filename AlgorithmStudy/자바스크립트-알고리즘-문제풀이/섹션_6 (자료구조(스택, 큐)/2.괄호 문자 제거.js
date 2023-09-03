function solution(str) {
  let answer = "";
  let flag = 0;
  for (let s of str) {
    if (s === "(") flag++;
    else if (s === ")") flag--;
    if (flag === 0 && s !== ")") answer += s;
  }
  return answer;
}

// 강의 수강 후 코드 작성
function solution(str) {
  let stack = [];
  for (let x of str) {
    if (!(x === ")")) stack.push(x);
    else stack.splice(stack.lastIndexOf("("));
  }
  return stack.join("");
}

// 강사님 풀이
function solution(s) {
  let stack = [];
  for (let x of s) {
    if (x === ")") while (stack.pop() !== "(");
    // while 문으로 pop 하기..!
    else stack.push(x);
  }
  return stack.join("");
}
