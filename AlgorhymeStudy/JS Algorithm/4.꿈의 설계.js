// 테스트 코드 작성
let data = [
  "10 - A. 20 - B. 30 - A.",
  "1 - A. 1 - A. 1 - A. 1 - A. 2 - B. 1 - A. 1 - B.",
];

data[0].match(/[a-zA-Z]/g);
data[0].match(/\d+/);

let zip = (a, b) => a.map((v, i) => [v, b[i]]);
let myMap = new Map(zip(data[0].match(/[a-zA-Z]/g), data[0].match(/\d+/)));

Math.min(...myMap.values());

// 문제풀이
function solution(data) {
  // 오브젝트로는 for...of 문 사용 불가, key, value 값 활용하려면 Object 키워드가 있어야 한다.
  let 훈련수치 = new Map();
  let 고민수치 = new Map();
  let 원래미래 = 0;
  let 바뀐미래 = 0;

  for (const i of data[0].split(".").slice(0, -1)) {
    key = i.match(/[a-zA-Z]/g)[0];
    value = i.match(/\d+/)[0];
    if (훈련수치.has(key)) {
      훈련수치.set(key, 훈련수치.get(key) + parseInt(value));
    } else {
      훈련수치.set(key, parseInt(value));
    }
  }

  for (const i of data[1].split(".").slice(0, -1)) {
    key = i.match(/[a-zA-Z]/g)[0];
    value = i.match(/\d+/)[0];
    if (고민수치.has(key)) {
      고민수치.set(key, 고민수치.get(key) + parseInt(value));
    } else {
      고민수치.set(key, parseInt(value));
    }
  }
  console.log(훈련수치, 고민수치);

  // 원래미래
  for (let i of 훈련수치.keys()) {
    if (고민수치.has(i)) {
      원래미래 += 훈련수치.get(i) * 고민수치.get(i);
    }
  }

  if (원래미래 === 0) {
    return "미래가 보이지 않습니다.";
  }
  let 훈련수치중가장큰값 = Math.max(...훈련수치.values());
  let 고민수치중가장큰값 = Math.max(...고민수치.values());

  for (let i of 훈련수치) {
    if (i[1] === 훈련수치중가장큰값) {
      훈련수치.set(i[0], i[1] + 100);
    }
  }

  for (let i of 고민수치) {
    if (i[1] === 고민수치중가장큰값) {
      고민수치.set(i[0], i[1] + 100);
    }
  }

  // 바뀐미래
  for (let i of 훈련수치.keys()) {
    if (고민수치.has(i)) {
      바뀐미래 += 훈련수치.get(i) * 고민수치.get(i);
    }
  }
  console.log(훈련수치, 고민수치);

  return `최종 꿈의 설계는 원래 미래 ${원래미래}, 바뀐 미래 ${바뀐미래}입니다. 이 수치대로 Vision을 만듭니다.`;
}
