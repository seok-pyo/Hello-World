// 반복문 활용
function solution(n) {
  let answer = 0;
  for (let _ = 0; _ < n; _++) {
    answer += 1;
    while (answer % 3 == 0 || ("" + answer).includes("3")) {
      answer += 1;
    }
  }
  return answer;
}

// array 풀이 / if 조건문, 조건문 내 && 연산자 확인
function solution(n) {
  let my_arr = [];
  for (let i = 0; i < 1000; i++) {
    if (i % 3 != 0 && !("" + i).includes("3")) {
      my_arr.push(i);
    }
  }
  return my_arr[n - 1];
}
