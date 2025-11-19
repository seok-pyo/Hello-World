function solution(N, stages) {
  var answer = [];
  // 각 스테이지의 실패율을 구해야 한다.
  // 스테이지 수 만큼 반복문을 순회하면서,
  // 해당 스테이지와 같은 수 = 클리어하지 못한 플레이어의 수 = a
  // 해당 스테이지 보다 같거나 큰 수의 플레이어의 수 = 스테이지에 도달한 플레이어 수 = b
  // 만약, b가 이라면 바로 실패율을 0으로 정의한다.
  // 실패율 = a / b

  // answer에 실패율을 넣은 다음에, 내림차순으로 정렬해서 리턴한다.

  for (let i = 1; i <= N; i++) {
    let l = 0;
    let a = 0;
    let b = 0;
    for (let j = 0; j < stages.length; j++) {
      if (i === stages[j]) a += 1;
      if (i <= stages[j]) b += 1;
    }
    if (b === 0) {
      answer.push([0, i]);
      continue;
    }
    l = a / b;
    answer.push([l, i]);
  }

  const result = answer.sort((a, b) => b[0] - a[0]);

  return result.map((a) => a[1]);
}