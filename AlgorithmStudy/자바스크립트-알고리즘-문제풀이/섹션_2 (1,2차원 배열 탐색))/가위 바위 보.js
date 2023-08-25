function solution(a, b) {
  result = "";
  for (let i = 0; i < a.length; i++) {
    console.log(a[i]);
    if (a[i] === b[i]) result += "D";
    if (Math.abs(a[i] - b[i]) > 1 && a[i] - b[i] > 0) result += "B";
    if (Math.abs(a[i] - b[i]) > 1 && a[i] - b[i] < 0) result += "A";
    if (Math.abs(a[i] - b[i]) === 1 && a[i] - b[i] > 0) result += "A";
    if (Math.abs(a[i] - b[i]) === 1 && a[i] - b[i] < 0) result += "B";
  }
  return result;
}
