function isRi(str) {
  const stack = [];

  for (let i = 0; i < str.length; i++) {
    let te = stack[stack.length - 1];
    if (te === "(" && str[i] === ")") {
      stack.pop();
      continue;
    } else if (te === "{" && str[i] === "}") {
      stack.pop();
      continue;
    } else if (te === "[" && str[i] === "]") {
      stack.pop();
      continue;
    }
    stack.push(str[i]);
  }

  return stack.length === 0;
}

function solution(s) {
  let result = 0;
  let newS = '';
  for (let i = 0; i < s.length; i++) {
    if (isRi(s)) result += 1;
    newS = s[s.length - 1] + s.slice(0, s.length - 1);
    s = newS;
  }

  return result;
}

// 위 코드에서 isRi 함수의 내부 중복을 제거
// 조건문의 조건이 너무 복잡해져서, 이걸 Map 자료구조를 사용하면 중복을 제거할 수 있다.

function check(str) {
  const stack = [];
  const pairs = {
    ")": "(",
    "}": "{",
    "]": "["
  };

  for (let i = 0; i < str.length; i++) {
    const ch = str[i];
    const top = stack[stack.length - 1];

    if (pairs[ch] && pairs[ch] === top) {
      stack.pop();
      continue;
    }

    stack.push(ch);
  }

  return stack.length === 0;
}