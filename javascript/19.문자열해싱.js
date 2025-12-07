// 문자열 해싱을 이용한 검색 함수 만들기

// 문자열 리스트와 쿼리 리스트가 있을 때, 쿼리 리스트의 문자열이 문자열 리스틍 안에 있는지 여부를 확인해야 한다.
// 문자열이 있으면 true, 없으면 false가 된다. 각 문자열에 대해서 문자열의 존재 여부를 리스트 형태로 반환하는
// solution() 함수를 작성하자.

// 입력 문자열은 영어 소문자로만 되어 있다.
// 문자열의 최대 길이는 백만
// 해시 충돌은 없다
// 문자열 해싱 방법을 활용해서 해싱 함수를 한다.
// hash(s) = (s[0] + s[1]*p + s[2]*p^2 + ... + ... s[n-1]*p^n-1)mod m
// p = 31, m = 1000000007

// stringList = ["apple", "banana", "cherry"];
// queryList = ["banana", "kiwi", "melon", "apple"];

// stringList를 순회하면서 문자열을 해싱해서 set에 넣어둔다.
// queryList를 순회하면서 stringList에 값이 있는 지 확인한다.

const p = 31, m = 1000000007;

const stringList = ["apple", "banana", "cherry"];
const queryList = ["banana", "kiwi", "melon", "apple"];

function hashing(s, m, p) {
  let result = 0;
  for (let i = 0; i < s.length; i++) {
    result += (s[i].charCodeAt() * (p ** i)) % m;
    result = result % m;
  }
  return result;
}

function solution() {
  const dic = new Set();
  for (let i = 0; i < stringList.length; i++) {
    dic.add(hashing(stringList[i], m, p));
  }

  const result = [];
  for (let i = 0; i < queryList.length; i++) {
    if (dic.has(hashing(queryList[i], m, p))) result.push(true);
    else result.push(false)
  }

  return result;
}

console.log(solution());

