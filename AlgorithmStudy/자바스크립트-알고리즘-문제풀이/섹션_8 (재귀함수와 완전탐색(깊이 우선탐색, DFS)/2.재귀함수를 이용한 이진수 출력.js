function solution(n) {
  let answer = "";
  function DFS(n) {
    if (n === 0) return;
    else {
      DFS(Math.floor(n / 2));
      answer += n % 2;
    }
  }

  DFS(n);
  return answer;
}

console.log(solution(11));

// while 문을 활용한 풀이

function solution(n) {
  let answer = [];
  while (n > 0) {
    answer.unshift(n % 2);
    n = Math.floor(n / 2);
  }
  return answer.join("");
}
