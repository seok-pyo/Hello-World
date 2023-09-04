function solution(arr) {
  let answer = arr;
  for (let i = 1; i < answer.length; i++) {
    let tmp = answer[i],
      j;
    for (j = i - 1; j >= 0; j--) {
      if (arr[j] > tmp) arr[j + 1] = arr[j];
      else break;
    }
    arr[j + 1] = tmp;
  }
  return answer;
}

// 삽입정렬 다른 풀이
function solution(num) {
  for (let i = 0; i < num.length - 1; i++) {
    let key = i + 1;
    for (let j = i; j >= 0; j--) {
      if (num[key] < num[j]) {
        [num[key], num[j]] = [num[j], num[key]];
        key--;
      } else break;
    }
  }
  return num;
}
