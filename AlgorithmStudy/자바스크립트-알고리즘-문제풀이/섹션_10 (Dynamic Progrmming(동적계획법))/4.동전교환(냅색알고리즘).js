function solution(coin, m) {
  // 동적계획법으로 거슬러 줄 동전의 종류를 점진적으로 늘려간다. 처음엔 하나의 동전만 있다고 설정 하는 식
  // 배열의 길이를 m+1로 해서 인덱스를 거슬러줄 돈으로 설정
  let dy = Array.from({ length: m + 1 }, () => 1000); // 가장 크게 거슬러 줄 수 있는 동전의 '개수'로 초기화
  // dy 배열의 원소는 인덱스 금액(i=15는 15원)을 거슬러 주는데 사용된 최소 동전의 개수.
  // 자기 자신은 1를 사용하게 만들기 위한 초기화 dy[0] = 0
  dy[0] = 0;
  // 동적계획법으로 거슬러 줄 동전의 종류를 점진적으로 늘려간다. 처음엔 하나의 동전만 있다고 설정 하는 식
  for (let i = 0; i < coin.length; i++) {
    // 여기서 j는 거슬러줄 돈의 크기;
    for (let j = coin[i]; j <= m; j++) {
      // dy[j-coin[i]] + 1 은 거슬러 줄 돈에서 해당 돈의 종류를 빼고 시작, 원소는(dy[j])는 사용된 동전의 개수이니, 금액에서 빼고 원소에는 1을 더해준다(dy[j] + 1)
      dy[j] = Math.min(dy[j], dy[j - coin[i]] + 1);
    }
  }
  return dy[m];
}

console.log(solution([1, 2, 5], 15));
