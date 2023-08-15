function solution(my_string, n) {
  return my_string
    .split("")
    .map((v) => Array(n + 1).join(v))
    .join("");
}

function solution(my_string, n) {
  return my_string
    .split("")
    .map((v) => v.repeat(n))
    .join("");
}

// 문자열 반복해서 출력하는 방법.
// 1. Array(n+1).join('a') -> a를 구분자로 n + 1개의 배열을 만들면 a는 구분자이기 때문에 n개가 생성된다

// 2. String.prototype.repeat()

// join() -> join 메서드는 구분자를 넣지 않으면 디폴트 값으로 쉼표로 구분한 문자열을 반환한다.
// split() -> split 메서드는 디폴트 값으로 구분하지 않고 배열에만 넣어서 반환한다.
