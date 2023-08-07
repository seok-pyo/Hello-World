function solution(numbers) {
  return numbers.reduce((a, v) => a + v, 0) / numbers.length;
}
