// 만약 스텝이 3칸까지 있다면?
function solution(n) {
  let dy = Array.from({ length: n + 1 }, () => 0);
  dy[0] = 1; // 3칸은 땅에서 한번에 3번째 돌까지 가니까 한가지, 1로 초기화 해둔다.
  dy[1] = 1;
  dy[2] = 2;
  for (let i = 3; i <= n; i++) {
    // 3번째 돌다리 부터 시작하는 건 동일!!
    dy[i] = dy[i - 3] + dy[i - 2] + dy[i - 1];
  }
  return dy[n];
}
