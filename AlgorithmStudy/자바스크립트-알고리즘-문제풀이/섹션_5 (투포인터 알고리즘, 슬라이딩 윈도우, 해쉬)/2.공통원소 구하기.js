function solution(a, b) {
  let answer = [];
  for (let num of a) {
    for (let num2 of b) {
      if (num === num2) answer.push(num);
    }
  }
  return answer.sort();
}

// 투포인터 알고리즘 풀이
// if와 else if 로 묶어야 논리적으로 놓치는 부분이 없는 경우가 생긴다.
function solution(a, b) {
  let answer = [];
  let p1 = (p2 = 0);
  a.sort((a, b) => a - b); // sort 메소드는 기준 콜백 함수를 넣지 않으면 문자열로 바꿔서 정렬은 한다.
  b.sort((a, b) => a - b); // 두자리수인 경우 그냥 sort 만 할 경우 1, 10 ,2, 3 ... 이렇게 정렬이 된다. 주의!
  let n = a.length;
  let m = b.length;
  while (p1 < n && p2 < m) {
    if (a[p1] === b[p2]) {
      answer.push(a[p1++]);
      p2++;
    } else if (a[p1] > b[p2]) p2++;
    else p1++;
  }
  return answer;
}

// +보너스 / 해시맵을 활용한 배열 교집합 추출하기 (object는 같은 키는 중복하지 않으므로)
function solution(arr1, arr2) {
  let answer = [];
  let temp_obj = {};
  const sum_arr = [...arr1, ...arr2];
  for (let i = 0; i < sum_arr.length; i++) {
    temp_obj[sum_arr[i]] = temp_obj[sum_arr[i]] + 1 || 1; // undefinded + 1 이 될 경우, 즉 해당 값이 없는 경우 초기값을 1로 설정
    // || 연산자는 왼쪽 피연사자를 먼저 평가하고, 이후 오른쪽으로 넘어간다.
  }
  for (let key in temp_obj) {
    if (temp_obj[key] === 2) {
      answer.push(Number(key));
    }
  }
  return answer;
}

let a = [1, 3, 9, 5, 2];
let b = [3, 2, 5, 7, 8];
console.log(solution(a, b));
