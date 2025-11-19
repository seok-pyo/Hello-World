// 주식 가격
// prices의 길이가 100,000 이므로 O(n)의 시간 복잡도가 필요하다.
// 이 문제에서 중요한 것은 불필요한 연산을 줄이는 것.
// 연속되는 길이를 유지하고 있다가, 주식가격이 떨어지는 시점에
// 이전에 가격들과 비교해서 길이를 구해준다.

// 먼저, 이전 원소에 바로 접근할 수 있도록 인덱스를 스택에 push 한다.
// prices의 top과 prices[1]의 주식 가격을 비교한다.
// 즉 ,이전 가격보다, 현재 가격이 더 크면 스택에 push한다.
// 이는 곧 아직 길이가 확정되지 않았음을 뜻한다.

function solution(prices) {
  const n = prices.length;
  const answer = new Array(n).fill(0);

  const stack = [0];
  for (let i = 0; i < n; i++) {
    while (stack.length > 0 && prices[i] < prices[stack[stack.length - 1]]) {
      const j = stack.pop();
      answer[j] = i - j;
    }
    stack.push(i);
  }

  while (stack.length > 0) {
    const j = stack.pop();
    answer[j] = n - 1 - j;
  }

  return answer;
}