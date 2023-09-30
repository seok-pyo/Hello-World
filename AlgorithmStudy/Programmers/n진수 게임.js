function decimalToBase(number, base) {
  if (base < 2 || base > 36) {
    return "진법 범위 초과";
  }
  return number.toString(base);
}

function nBaseToDeciaml(nBaseNumber, base) {
  if (base < 2 || base > 36) {
    return "진법 범위 초과";
  }
  return parseInt(nBaseNumber, base);
}

// 나의 풀이
function decimalToBase(number, base) {
  if (base < 2 || base > 36) {
    return "진법 범위 초과";
  }
  return number.toString(base);
}

function solution(n, t, m, p) {
  let answer = "";
  let speak = "01";
  let number = 2;
  while (speak.length < t * m) {
    speak += decimalToBase(number, n);
    number += 1;
  }
  speak = speak.slice(0, t * m);
  for (let i = p - 1; i < speak.length; i += m) {
    answer += speak[i];
  }

  return answer.toUpperCase();
}

// 다른 풀이 추가
// while 문, slice() 활용 확인!
function solution(n, t, m, p) {
  let res = "";
  let num = 0;
  let seq = "";
  while (res.length < t) {
    if (seq.length >= m) {
      res += seq[p - 1];
      seq = seq.slice(m);
    } else {
      seq += num.toString(n).toUpperCase();
      num++;
    }
  }
  return res;
}
