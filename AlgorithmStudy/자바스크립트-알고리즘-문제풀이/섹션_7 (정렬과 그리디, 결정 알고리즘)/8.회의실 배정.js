function solution(arr) {
  let answer = arr;
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

// 수업 문제 풀이 추가(그리디 대표 문제)
function solution(meeting) {
  let answer = 0;
  meeting.sort((a, b) => {
    if (a[1] === b[1]) return a[0] - b[0];
    else return a[1] - b[1];
  });
  let endTime = 0;
  meeting.forEach((v) => {
    if (v[0] >= endTime) {
      answer++;
      endTime = v[1]; // endTime 의 업데이트, For문에서 인덱스 + 1 역할과 같다.
    }
  });
  return answer;
}
