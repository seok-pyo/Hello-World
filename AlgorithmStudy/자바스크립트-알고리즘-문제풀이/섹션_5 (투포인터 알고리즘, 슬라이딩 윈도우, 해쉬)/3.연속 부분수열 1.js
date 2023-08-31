function solution(arr, m) {
  let cnt = 0;
  for (let i = 0; i < arr.length - 1; i++) {
    for (let j = i + 1; j < arr.length; j++) {
      if (arr.slice(i, j).reduce((a, c) => a + c, 0) === m) cnt++;
    }
  }
  return cnt;
}

// -> 위에 풀이는 시간복작도 o(n**2)
// 반복문에서 i, j 가 두개의 포인터로 생각하는 게 아니라, 두개 포인터를 만들고 한번의 반복문에서 사용하면 반복문을 한번 만 돌 수 있다. -> 투포인터 시간 복잡도 높이기!
// 즉, i,j 두번 모두 배열을 전체 순회를 하는 것이 아니라, 포인터를 사용해서 전체를 반복해서 확인하지 않을 수 있다.
function solution(arr, m) {
  let rp = 0,
    lp = 0,
    answer = 0,
    sum = 0;

  while (rp <= arr.length) {
    sum += arr[rp++];
    if (sum === m) {
      answer++;
      sum -= arr[lp++];
    }
    if (sum > m) {
      sum -= arr[lp++];
      if (sum === m) answer++;
    }
  }

  return answer;
}

// 강의 풀이 - for 문 안에 while 문이 n번 돌고 종료된다. O(n^2)
function solution(m, arr) {
  let answer = 0,
    lp = 0,
    sum = 0;
  for (let rp = 0; rp < arr.length; rp++) {
    sum += arr[rp]; // 풀이에서 for 문에서 rp를 설정하는 것과, 위쪽 풀이에서 while문과 후위증가연산자와 같은 결과 sum += arr[rp++]
    if (sum === m) answer++;
    while (sum >= m) {
      sum -= arr[lp++];
      if (sum === m) answer++; // 위쪽 풀이에서 while 문 안에 it(sum===m) answer++ 이 중복되는 것이 보인다.
    }
  }
  return answer;
}

// 시간 복잡도가 안 좋게 짜여진 경우
function solution(m, arr) {
  let answer = 0;
  for (let i = 0; i < arr.length; i++) {
    let sum = 0;
    let index = i;
    while (sum < m) {
      // while 문이 매번 i부터 시작해서 a배열 전체를 탐색하는 구조 O(n^2)
      sum += arr[index];
      if (sum === m) {
        answer++;
        break;
      } else index++;
    }
  }
  return answer;
}

let a = [1, 2, 1, 3, 1, 1, 1, 2];
console.log(solution(6, a));
