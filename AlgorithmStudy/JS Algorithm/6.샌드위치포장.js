function solution(data) {
  let reg = /[1][2][3][4][1]/g;
  let text = data.join("");
  let count = 0;
  while (reg.test(text)) {
    text = text.replace(reg, "");
    count++;
  }
  return count;
}
