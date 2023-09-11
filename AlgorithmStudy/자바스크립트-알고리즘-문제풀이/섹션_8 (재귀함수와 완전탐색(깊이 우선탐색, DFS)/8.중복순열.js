function solution(n, m) {
  let answer = [];
  let tmp = Array.from({ length: m }, () => 0);
  function DFS(L) {
    if (L === m) {
      answer.push(tmp.slice()); //tmp 를 깊은 복사(기본값만) 하지 않으면 스택의 마지막 값으로 값이 다 변경되어서 같은 값을 출력한다.
    } else {
      for (let i = 1; i <= n; i++) {
        // i 값도 스택프레임에 기록되고, 해당 호출 시점이 복기 시점이 된다.
        tmp[L] = i;
        DFS(L + 1);
      }
    }
  }

  DFS(0);

  return answer;
}

console.log(solution(4, 3));
