// 배열 길이에 따라서 정렬하기
// const result = [];
// let tmp = Number.MAX_SAFE_INTEGER;
// for (let x of arr) {
//   tmp = Math.min(tmp, x.length);
//   if (tmp < x.length) result.push(x);
//   else result.unshift(x);
// }

// 중괄호 안에 있는 숫자 패턴을 추출하고 배열로 변환
// let s = "{{2},{2,1},{2,1,3},{2,1,3,4}}";
// let regex = /{([^}]+)}/g;
// let matches = [...s.matchAll(regex)];

// 배열 길이는 1부터 n까지

// 나의 풀이
function solution(s) {
  let reg = /{([^}]+)}/g;
  let reg2 = /[{}]/g;
  let arr = s.match(reg);
  let answer = [];
  for (let x of arr) {
    answer.push(x.replace(reg2, ""));
  }
  let result = answer.map((v) => v.split(","));
  let F_RESULT = [];
  for (let x of result) {
    F_RESULT[x.length - 1] = x;
  }
  let RF = new Array(...new Set(F_RESULT.flat()));
  return RF.map((v) => Number(v));
}

// 다른 사람 풀이 추가
// 정렬과 reduce의 활용 방법 참고하자!

const tupleFrom = (str) =>
  str
    .slice(2, -2)
    .split("},{")
    .map((it) => toNumbers(it))
    .sort(accendingByLength)
    .reduce(
      (acc, cur) => [...acc, ...cur.filter((it) => !acc.includes(it))],
      []
    );

const toNumbers = (str) => str.split(",").map((it) => Number(it));

const accendingByLength = (arr1, arr2) => arr1.length - arr2.length;

const solution = (s) => tupleFrom(s);

// reduce에서 set 활용 방법 확인!

const solution = (s) => tupple(changeMatrix(getSets(s)));

const getSets = (s) => {
  const sets = s.match(/{[\d,]+}/g);
  return sets
    .map((set) => set.match(/[\d]+,?/g).map((v) => parseInt(v)))
    .sort((a, b) => a.length - b.length);
};

const changeMatrix = (sets) => sets.reduce((_, set) => _.concat(set), []);

const tupple = (arr) => [
  ...arr.reduce((set, value) => set.add(value), new Set()),
];
