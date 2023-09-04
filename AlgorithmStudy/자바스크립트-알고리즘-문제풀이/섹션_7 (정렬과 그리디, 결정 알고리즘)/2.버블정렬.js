function solution(arr) {
  let answer = arr;
  for (let i = 0; i < arr.length - 1; i++) {
    // 실행 범위를 좀 더 예민하게 설정하자! ,, 비효율적으로 돌지 않도록
    for (let j = 0; j < arr.length - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
      }
    }
  }
  return answer;
}
