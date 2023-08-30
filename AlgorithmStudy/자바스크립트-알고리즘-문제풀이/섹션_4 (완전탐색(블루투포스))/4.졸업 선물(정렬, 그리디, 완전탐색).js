function solution(m, product) {
  // 0. 결과값 설정(구매 가능한 상품 개수 출력)
  let answer = 0;
  let n = product.length;

  // 정렬을 통한 그리디. (이 문제의 첫번째 포인트)
  // 1. 배열의 정렬 방식
  //   product.sort((a, b) => a.reduce((a, c) => a + c, 0) - b.reduce((a, c) => a + c, 0));
  product.sort((a, b) => a[0] + a[1] - (b[0] + b[1]));
  for (let i = 0; i < n; i++) {
    // i 번째 상품을 할인 받는 걸로 가정하고, 그 금액을 제외한다. *** 배송비도 포함해서 계산해줘야 한다.
    // 매 반복에서 사용할 초기 금액을 설정할 떄 할인 받는 금액도 같이 설정하는 것! 이게 이 문제의 두번째 포인트이다.
    let money = m - (product[i][0] / 2 + product[i][1]);
    let cnt = 1;
    for (let j = 0; j < n; j++) {
      // 정렬이 되어 있기 때문에 만약 답을 찾았다면 불필요한 연산은 하지 않는 편이 좋다
      // kiya.. money 는 반복할 때 계속해서 작아지게 되어 있기 때문에 다음 감소 연산을 할 게 더 커버리면 음수나 0이 되어버린다.
      if (i !== j && product[j][0] + product[j][1] > money) break; // 0이 되는 경우는 아래에서 처리한다.

      // 해당 조건에서 예산보다 초과하는 경우를 제외시킬 수 있다
      if (i !== j && product[j][0] + product[j][1] <= money) {
        money -= product[j][0] + product[j][1];
        cnt++;
      }
    }
    // kiya.. answer 활용하는 부분 좋다.. tmp 로 반복해서 계산하게 한다.
    answer = Math.max(answer, cnt);
  }
  return answer;
}

let arr = [
  [6, 6],
  [2, 2],
  [4, 3],
  [4, 5],
  [10, 3],
];
console.log(solution(28, arr));

// 일곱난쟁이 문제 확인
