function solution(numbers) {
  return numbers.map((e) => e * 2);
}

// map은 배열 그 자체를 리턴
// map은 연산을 적용시킬 수 있고, 특히 특정 정보를 추출하는데 많이 사용한다.
// JSON generator 에서 데이터 가지고 연습

const data = [
  { name: "", age: "", country: "" },
  { name: "", age: "", country: "" },
  { name: "", age: "", country: "" },
];
data.map((v) => v["name"]);
data.map((v) => v["name"], v["age"]);

// [Array(2),Array(2),Array(2) ... ]
