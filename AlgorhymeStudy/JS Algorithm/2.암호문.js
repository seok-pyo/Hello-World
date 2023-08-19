function solution(data) {
  let seque =
    "" +
    data
      .match(/(r|e|v)(10|[1-9])/g)
      .map((v) => (v.length === 2 ? +v[1] : +v.slice(1)))
      .reduce((a, c) => a + c);
  return `${seque[0]}월 ${seque[1]}일`;
}

// 정규표현식 고급 사용(변수)
"a10b9r1ce33uab8wc918v2cv11v9".replace(
  /(?<one>[rev])(<two>10|[0-9])/g,
  "[$<one>]($<two>)"
);

// exec 정규표현식 사용, 정규표현식을 앞에 두고 사용해야 한다. 한번 실행에
// 하나의 값만 반환. 계속 반환 하다보면 null을 출력한다.
let myString = "a10b9r1ce33uab8wc918v2cv11v9";
let myRegex = /([rev])(10|[0-9])/g;
let result = undefined;

while ((result = myRegex.exec(myString))) {}
