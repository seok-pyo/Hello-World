function solution(data) {
  return data
    .map((v) => v.replaceAll("+", 1).replaceAll("-", 0).replaceAll(" ", ""))
    .map((v) => String.fromCodePoint(parseInt(v, 2)))
    .join("");
}
