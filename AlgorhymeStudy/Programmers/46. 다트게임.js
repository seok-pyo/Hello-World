// 단순 구현 + 문자열 유형 풀이

// 예제 1
// dartResult / 1S2D*3T
// 문자 하나씩 순회할 수 있도록 배열로 변환
// 1 S 2 D * 3 T
// 배열을 돌면서 숫자인 경우 다음 반복으로 넘어가고, 문자열인 경우 그 전에 숫자에 규칙만큼 곱해서
// 최종 result 배열에 추가
// * 과 # 때문에 가장 마지막 요소와 그전 요소에 접근할 수 있는 자료구조가 필요 -> stack

// 예제 2
// dartResult / 1D2S#10S
// 1 D 2 S # 1 0 S
// 2자리수는 시작 인덱스를 활용한다 -> 숫자일때는 추가하지 않고, 문자나 기호일 때 숫자를 초기화한다.

// 1. 숫자는 무시하고 연산자만 처리한다.
// 2. 숫자는 시작 인덱스만 관리한다.
// 3. 최근 1개 혹은 2개 숫자에 대해 연산한다.
//  3-1. 연산이 다 끝나고 한 번에 더해야
//  3-2. stack 자료 구조

// 파이썬 풀이
// def solution(dartResult) :
// //0. 입력 및 초기화
//     scores = []
//     start_idx = 0
//     power = { 'S' : 1, 'D' : 2, 'T' : 3}

// // 1. dartReault 별로 처리
//     for i in range(len(dartResult)):
//         op = dartResult[i];
//         if op in power:
//             scores.append(int(dartResult[start_idx:i])**power[op])
//         elif op == '*':
//             scores[-2:] = [x * 2 for x in scores[-2:]]
//         elif op == '#':
//             scores[-1] = -scores[-1]

//         if not op.isnumeric():
//             start_idx = i + 1
// // 2. scores의 합을 반환
//     return sum(scores)

// 첫번째 도전
// function solution(dartResult) {
//   let scores = [];
//   let start_idx = 0;
//   const power = { S: 1, D: 2, T: 3 };

//   dartResult.split("").map((v, i) => {
//     if (v in power) {
//       scores.push(parseInt(dartResult.slice(start_idx, i)) ** power[v]);
//     } else if (v === "*") {
//       scores.splice(-2, 2, scores[-1] * 2, scores[-2] * 2);
//     } else if (v === "#") {
//       // scores.splice(-1, ~parseInt(v))
//       scores[scores.length - 1] *= -1;
//     }

//     if (v === NaN) {
//       start_idx = i + 1;
//     }
//   });
//   return scores.reduce((acc, cur) => acc + cur, 0);
// }

function solution(dartResult) {
  const scores = [];
  let start_idx = 0;
  const power = { S: 1, D: 2, T: 3 };

  for (let i = 0; i < dartResult.length; i++) {
    const op = dartResult[i];
    if (power.hasOwnProperty(op)) {
      scores.push(
        Math.pow(parseInt(dartResult.slice(start_idx, i)), power[op])
      );
    } else if (op === "*") {
      scores[scores.length - 2] *= 2;
      scores[scores.length - 1] *= 2;
    } else if (op === "#") {
      scores[scores.length - 1] = -scores[scores.length - 1];
    }

    if (isNaN(op)) {
      start_idx = i + 1;
    }
  }

  return scores.reduce((acc, val) => acc + val, 0);
}

// 정규표현식 풀이

function solution(dartResult) {
  const bonus = { S: 1, D: 2, T: 3 },
    options = { "*": 2, "#": -1, undefined: 1 };

  let darts = dartResult.match(/\d.?\D/g);

  for (let i = 0; i < darts.length; i++) {
    let split = darts[i].match(/(^\d{1,})(S|D|T)(\*|#)?/),
      score = Math.pow(split[1], bonus[split[2]]) * options[split[3]];

    if (split[3] === "*" && darts[i - 1]) darts[i - 1] *= options["*"];

    darts[i] = score;
  }

  return darts.reduce((a, b) => a + b);
}
