function solution(arr) {
  let time = Array.from({ length: 72 }, () => 0);
  for (let x of arr) {
    for (let i = x[0]; i < x[1]; i++) {
      time[i]++;
    }
  }
  return Math.max(...time);
}

function solution(arr) {
  let answer = [];
  for (let i = 0; i < arr.length - 1; i++) {
    let num = 1;
    for (let j = i + 1; j < arr.length; j++) {
      if (arr[j][0] < arr[i][1] && arr[j][0] > arr[i][0]) num++;
      answer.push(num);
    }
  }
  return Math.max(...answer);
}

// 강의 코드 추가

function solution(times) {
  let answer = Number.MIN_SAFE_INTEGER;
  let T_line = [];
  for (let x of times) {
    T_line.push([x[0], "s"]);
    T_line.push([x[1], "e"]);
  }
  T_line.sort((a, b) => {
    if (a[0] === b[0])
      return (
        a[1].charCodeAt() - b[1].charCodeAt()
      ); // sort 콜백 함수 return 값은 숫자로
    else return a[0] - b[0];
  });
  let cnt = 0;
  for (let x of T_line) {
    if (x[1] === "s") cnt++;
    else cnt--;
    answer = Math.max(answer, cnt);
  }
  return answer;
}

// 문자열 정렬, 자바스크립트의 정렬은 문자열로 변환해서 정렬, return 값에서는 -1, 0 ,1 이렇게 나눠서 정렬되기 때문에
// 숫자로 바꿔서 정렬해줘야 한다. 따라서 아스키코드로 변환해서 정렬해야 한다.
