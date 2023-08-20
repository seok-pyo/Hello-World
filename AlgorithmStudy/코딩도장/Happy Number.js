function HappyNumber(S) {
  let sumArr = []; // 더할숫자
  let num = S; // 더한숫자
  let squSum = []; // 제곱의합리스트
  while (num != "1") {
    for (let i of num) {
      let sq = parseInt(i) ** 2;
      sumArr.push(sq);
    }
    num = String(sumArr.reduce((a, b) => a + b, 0));
    console.log(sumArr, num, squSum);
    sumArr = [];
    if (num == S) {
      return false;
    }
    for (let i of squSum) {
      if (i === num) {
        return false;
      }
    }
    // 입력 숫자 자기 자신도 아니고, 같은 숫자가 반복하지 않는다면 제곱의 합 리스트에 추가한다
    console.log(typeof num);
    squSum.push(num);
  }
  return true;
}
