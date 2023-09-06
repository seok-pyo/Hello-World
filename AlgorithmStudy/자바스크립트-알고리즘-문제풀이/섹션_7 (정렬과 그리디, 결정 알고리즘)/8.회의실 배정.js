function solution(arr) {
  answer = arr;
  answer.sort((a, b) => {
    if (a[1] === b[1]) return a[0] - b[0];
    else return a[1] - b[1];
  });
  for (let i = 0; i < answer.length - 1; i++) {
    if (answer[i][1] > answer[i + 1][0]) answer.splice(i + 1, 1);
  }
  console.log(answer);
  return answer.length;
}
