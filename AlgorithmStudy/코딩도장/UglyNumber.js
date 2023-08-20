function uglyNumber(n) {
  let uglyNumberList = [1];
  for (let i = 0; i < n - 1; i++) {
    let last = uglyNumberList.slice(-1);

    let temp = []; // 매 반복마다 temp는 빈배열로 초기화
    for (let i of uglyNumberList) {
      for (let j of [i * 2, i * 3, i * 5]) {
        if (j > last) {
          temp.push(j);
        }
      }
    }
    uglyNumberList.push(Math.min(...temp));
  }
  return uglyNumberList.slice(-1);
}
