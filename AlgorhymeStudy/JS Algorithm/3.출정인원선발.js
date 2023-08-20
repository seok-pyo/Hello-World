data = [1, 2, 10, 20, 30, 40, 11, 22];
data.sort();
// 맨 앞자만으로 사전식 정렬
data.sort((a, b) => a - b); // 콜백함수

// 정렬 sort
let numbers = [4, 2, 5, 1, 3];
numbers.sort(function (a, b) {
  console.log(a, b);
  if (a > b) {
    return -1;
  }
});

data = [
  [6, "a", "hellohellohello"],
  [3, "f", "hellohello"],
  [2, "b", "hello hello"],
  [1, "c", "hello llo"],
  [9, "d", "hel"],
];

data.sort((a, b) => a[2].length - b[2].length);

data.sort((a, b) => {
  if (a[1] > b[1]) return 1; // a가 b보다 큰 경우에는 뒤로 가게 하고(return 1)
  if (a[1] < b[1]) return -1; // a가 보다 작은 경우에는 앞으로 가게 한다(return -1)
  if (a[1] === b[1]) return 0;
});

let data = [
  ["A", 25, 25, 25, 25],
  ["B", 10, 12, 13, 11],
  ["C", 24, 22, 23, 21],
  ["D", 13, 22, 16, 14],
];

data.sort(
  (a, b) =>
    a.slice(1).reduce((x, y) => x + y, 0) -
    b.slice(1).reduce((x, y) => x + y, 0)
);

function solution(data) {
  let 길이 = data.length;
  let 선발인원 = parseInt(길이 * 0.3);
  let 선발된인원 = 0;
  let 점수모음 = {};
  data.sort(
    (a, b) =>
      a.slice(1).reduce((x, y) => x + y, 0) -
      b.slice(1).reduce((x, y) => x + y, 0)
  );
  return data.slice(0, 선발인원); // slice 마지막 범위 요소 미포함
}

function solution(data) {
  let 길이 = data.length;
  let 선발해야하는인원 = parseInt(길이 * 0.3);

  if (선발해야하는인원 === 0) {
    return [];
  }

  let 선발된인원 = 0;
  let 점수모음 = {};
  let 선발인원 = [];

  for (let i of data) {
    let 합 = i.slice(1).reduce((x, y) => x + y, 0);
    if (합 in 점수모음) {
      점수모음[합].push(i[0]);
    } else {
      점수모음[합] = [i[0]];
    }
  }

  점수모음 = Object.entries(점수모음);
  점수모음.sort((a, b) => b[0] - a[0]);

  for (let i of 점수모음) {
    if (선발된인원 < 선발해야하는인원 && i[1].length <= 선발해야하는인원) {
      선발인원.push(...i[1]);
      선발된인원 += i[1].length;
    } else if (i[1].length > 선발해야하는인원) {
      return 선발인원;
    }
  }
  return 선발인원.sort().reverse();
}

// ['A'] + ['B'] = ['AB']

// let s = ['A']
// ['A'] + s.push(['B']) = ['A', ['B']]

// let s = ['A']
// ['A'] + push([...'B']) = ['A', 'B']
