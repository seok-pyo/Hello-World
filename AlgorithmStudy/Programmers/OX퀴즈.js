// + 연산자 형변환 , 구조분해할당 , split
function solution(quiz) {
  var answer = [];
  return quiz.map((t) => {
    const [calc, result] = t.split(" = ");
    const sign = calc.includes("+") ? 1 : -1;
    const [a, b] = calc.split(sign === 1 ? " + " : " - ");

    return +a + +b * sign === +result ? "O" : "X";
  });
}

// 나의 풀이
function solution(quiz) {
  const finalResult = [];
  const result = [];
  const answer = quiz.map((query) => query.split(" "));
  answer.forEach((array) =>
    array[1] === "-"
      ? result.push(Number(array[0]) - Number(array[2]))
      : result.push(Number(array[0]) + Number(array[2]))
  );

  answer.forEach((array, i) =>
    Number(array[array.length - 1]) === result[i]
      ? finalResult.push("O")
      : finalResult.push("X")
  );

  return finalResult;
}
