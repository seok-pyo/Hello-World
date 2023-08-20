// [-1, 1, 3, -2, 2] > [-1, -2, 1, 3, 2]

function solution(value) {
  return value.filter((v) => v < 0).concat(value.filter((v) => v >= 0));
}

function solution(value) {
  return [...value.filter((v) => v < 0), ...value.filter((v) => v >= 0)];
}
