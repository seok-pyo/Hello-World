function solution(arr) {
  let answer = arr;
  for (let i = 0; i < answer.length - 1; i++) {
    let idx = i;
    for (let j = i + 1; j < answer.length; j++) {
      if (answer[j] < answer[idx]) idx = j; // 가장 작은 값의 인덱스를 저장하기
    }
    [answer[i], answer[idx]] = [answer[idx], answer[i]];
  }
  return answer;
}
