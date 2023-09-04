let pipe = "()(((()())(())()))(())";

let stack = [];
for (let p of pipe) {
  if (p === ")" && stack[stack.length - 1] === "(") {
    stack.pop();
    stack.push(1);
    continue;
  }
  stack.push(p);
}

// 정답 코드
function solution(p) {
  let stack = [];
  let answer = 0;
  for (let i = 0; i < p.length; i++) {
    if (p[i] === "(") stack.push(p[i]);
    else {
      if (p[i - 1] === "(") {
        // 레이저의 끝인지, 막대의 끝인지 구분하는 것이 포인트!
        // 두개를 구분해서 어떻게 더할 것인지를 파악해야 한다!
        stack.pop(); // 중복 코드는 조건문 전에 올려서 먼저 실행하는 편이 좋다.
        answer += stack.length; // 스택의 길이가 잘린 나무의 개수라는 걸 파악하는 것이 두번째 포인트!
      } else {
        stack.pop();
        answer += 1; // 막대의 끝이라면 1을 더한다는 걸 찾아내야 한다!
      }
    }
  }
  return answer;
}
