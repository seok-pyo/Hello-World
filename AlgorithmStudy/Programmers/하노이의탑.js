function solution(n) {
  const answer = [];
  function hanoi(num, from, to, other) {
    if (num === 0) return;
    hanoi(num - 1, from, other, to);
    answer.push([from + 1, to + 1]);
    hanoi(num - 1, other, to, from);
  }
  hanoi(n, 0, 2, 1);
  return answer;
}
