function solution(arr) {
  return arr.filter(
    (v, i) => Math.max(...arr.slice(0, i + 1)) === v && arr[i] !== arr[i + 1]
  ).length;
}

function solution(arr) {
  let max = 0,
    count = 1;
  // let count = 1;
  for (let i = 1; i < arr.length; i++) {
    if (arr[i] > max) {
      count++;
      max = arr[i];
    }
  }
  return count;
}
