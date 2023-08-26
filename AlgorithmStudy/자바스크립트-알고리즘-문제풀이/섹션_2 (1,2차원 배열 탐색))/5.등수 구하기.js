function solution(arr) {
  let n = arr.length;
  let answer = new Array(n).fill(1);
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n; j++) {
      if (arr[i] < arr[j]) answer[i]++;
    }
  }
  return answer;
}
