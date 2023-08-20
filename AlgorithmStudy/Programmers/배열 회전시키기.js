function solution(numbers, direction) {
  if (direction === "right") {
    numbers.unshift(numbers.pop());
  } else {
    numbers.push(numbers.shift());
  }
  return numbers;
}
// shift 와 pop 은 기존 배열을 수정한다.
// 전개 구문(spread operator)
function solution(numbers, direction) {
  if (direction === "right") {
    numbers = [numbers.pop(), ...numbers];
  } else {
    numbers = [...numbers.slice(1), numbers.shift()];
  }
}
// splice, slice
