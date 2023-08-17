const inputData = `2
1 1 5
3 5 4`;

function solution(a, b, m) {
  let count = 0;
  for (let i = 1; i; i++) {
    if (i % a === 0) {
      count += 1;
    }
    if (i % b === 0) {
      count += 1;
    }
    if (count == m || count > m) {
      return i;
    }
  }
}

const result = [];

inputData
  .split("\n")
  .slice(1)
  .map((v) => v.split(" "))
  .forEach((n) => result.push(solution(n[0], n[1], n[2])));

console.log(result.join(" "));

// while
function solution(x, y, page) {
  let time = 1;
  while (true) {
    if (Math.floor(time / x) + Math.floor(time / y) >= pate) {
      return time;
    }
    time += 1;
  }
}
