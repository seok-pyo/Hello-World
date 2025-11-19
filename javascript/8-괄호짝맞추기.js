// 입력 = '(())()';

function pair(input) {
  const stack = [];

  for (let i = 0; i < input.length; i++) {

    if (stack[stack.length - 1] === '(' && input[i] === ')') {
      stack.pop();
      continue;
    }
    stack.push(input[i]);
  }

  if (stack.length === 0) {
    return true;
  }

  console.log(stack);
  return false;
}

console.log(pair('(())()'));

