function solution2(str, n) {
  let idx = []; // n의 인덱스를 모두 찾고, 반복문을 통해 가장 짧은 거리를 찾는 것.
  let result = [];
  let dis = [];
  if (idx.length > 0) {
    str.split("").map((v, i) => (v === n ? idx.push(i) : false));
    for (let i = 0; i < str.length; i++) {
      for (num of idx) {
        dis.push(Math.abs(num - i));
      }
      result.push(Math.min(...dis));
      dis = []; // 배열 초기화!
    }
    return result;
  }
  return "빈 배열입니다.";
}

// 강의 문제 풀이
function solution(s, t) {
  let answer = [];
  let p = 1000;
  if (answer.length > 0) {
    for (let x of s) {
      if (x === t) {
        p = 0;
        answer.push(p);
      } else {
        p++;
        answer.push(p);
      }
    }
    p = 1000;
    for (let i = s.length - 1; i >= 0; i--) {
      if (s[i] === t) p = 0;
      else {
        p++;
        answer[i] = Math.min(answer[i], p);
      }
    }
    return answer;
  }
  return "빈 배열입니다.";
}
