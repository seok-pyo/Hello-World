function solution(order) {
  return order.toString().match(/[369]/g).length;
}
// --> 오류 발생

// 정규 표현식
// Nnullish 연산자 / toString() 메서드는 변수에만 사용 가능
let order = 1;
let value = order.toString().match(/[369]/g) ?? [];

function solution(order) {
  let value = order.toString().match(/[369]/g) ?? [];
  return value.length;
}

//--

function solution(order) {
  let value = order.toString().match(/[369]/g) ?? [];
  return value.length;
}

//--

function solution(order) {
  return ("" + order).split(/[369]/).length - 1;
}

//--

// filter 활용
function solution(order) {
  return Array.from(order.toString()).filter((v) =>
    v === "3" || v === "6" || v === "9" ? true : false
  ).length;
}

// set 활용 / set을 통해서 가지고 있는지를 검사할 수 있다.
function solution(order) {
  const s = new Set("369");
  return order
    .toString()
    .split("")
    .filter((v) => s.has(v)).length;
}
