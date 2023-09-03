function solution(str) {
  let stack = [];
  for (let s of str) {
    if (!isNaN(s)) stack.push(Number(s));
    else {
      let rt = stack.pop();
      let lt = stack.pop();
      stack.push(eval(lt + s + rt));
    }
  }
  return stack[0];
}
// eval 함수는 문자열을(입력값을) 코드로 실행하기 때문에 보안에 취약할 수 있다.
// 아래처럼 연산 경우의 수를 작성하는게 정석이다.

function solution(str) {
  let stack = [];
  for (let s of str) {
    if (!isNaN(s)) stack.push(Number(s));
    else {
      let rt = stack.pop();
      let lt = stack.pop();
      if (s === "+") stack.push(lt + rt);
      else if (s === "-") stack.push(lt - rt);
      else if (s === "*") stack.push(lt * rt);
      else if (s === "/") stack.push(lt / rt);
    }
  }
  return stack[0];
}
