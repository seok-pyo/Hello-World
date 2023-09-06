function solution(arr) {
  let time = Array.from({ length: 72 }, () => 0);
  for (let x of arr) {
    for (let i = x[0]; i < x[1]; i++) {
      time[i]++;
    }
  }
  return Math.max(...time);
}
