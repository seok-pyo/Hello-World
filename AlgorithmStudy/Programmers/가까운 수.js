let gap = Infinity;
let result = 0;

for (let i of array) {
  if (Math.abs(n - i) < gap) {
    gap = Math.abs(n - i);
    result = i;
  }
}

// reduce 사용
function solution(array, n) {
  return array.reduce((a, c) =>
    Math.abs(a - n) < Math.abs(c - n)
      ? a
      : Math.abs(a - n) === Math.abs(c - n)
      ? Math.min(a, c)
      : c
  );
}

// sort 사용
function solution(array, n) {
  array.sort((a, b) => Math.abs(n - a) - Math.abs(n - b) || a - b);

  return array[0];
}
