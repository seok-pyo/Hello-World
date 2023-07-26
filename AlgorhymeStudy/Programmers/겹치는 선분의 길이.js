function solution(lines) {
  let line = new Array(200).fill(0);

  lines.forEach(([a, b]) => {
    for (; a < b; a++) line[a + 100]++;
  });

  // 겹치는 구간의 개수 ( accumulator(누산기), currentValue )
  return line.reduce((a, c) => (c > 1 ? a + 1 : a), 0);
}
