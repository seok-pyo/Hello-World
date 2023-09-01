// O(n*k)
function solution(arr, k) {
  let result = [];
  for (let i = 0; i < arr.length; i++) {
    result.push(arr.slice(i, i + k).reduce((a, c) => a + c, 0));
  }
  return Math.max(...result);
}

function solution(arr, k) {
  let sum = 0;
  for (let i = k; i < arr.length; i++) {
    while (k) {
      sum += arr[i - k];
      k--;
    }
    if (sum + arr[i] - arr[i - k] > sum) sum = sum + arr[i] - arr[i - k];
    else sum;
  }
  return sum;
}

// 강의 방식
function solution(k, arr) {
  let answer,
    sum = 0;
  for (let i = 0; i < k; i++) sum += arr[i];
  answer = sum;
  for (let i = k; i < arr.length; i++) {
    sum += arr[i] - arr[i - k];
    answer = Math.max(answer, sum);
  }
  return answer;
}
