// 두 날짜 (YYYYMMDD)의 차이 일수를 구하는 프로르램

// 20070515 sub 20070501 = 14
// 20070501 sub 20070515 = 14
// 20070301 sub 20070515 = 75
// [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];

function subdate(date) {
  const year = parseInt(date.slice(0, 4));
  const month = parseInt(date.slice(4, 6)); // parseInt를 하면 0이 사라진다
  const day = parseInt(date.slice(6));
  const monthDate = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]; // 인덱스 맞추기 위해서 0 추가
  let days = year * 365 + day;
  for (let i = 1; i < month; i++) {
    days += monthDate[i];
  }
  return days;
}

function solution(a, b) {
  return Math.abs(subdate(a) - subdate(b));
}

// 윤년과 평년은 고려하지 않음
