function solution(s, e) {
  let answer = 0;
  let ch = Array.from({ length: 10001 }, () => 0);
  let dis = Array.from({ length: 1001 }, () => 0);
  let queue = [];
  queue.push(s);
  ch[s] = 1;
  dis[s] = 0;
  while (queue.length) {
    let x = queue.shift();
    for (let nx of [x - 1, x + 1, x + 5]) {
      if (nx === e) return dis[x] + 1;
      if (nx > 0 && nx <= 10000 && ch[nx] === 0) {
        ch[nx] = 1;
        queue.push(nx);
        dis[nx] = dis[x] + 1;
      }
    }
  }
  return answer;
}

console.log(solution(8, 3));

// 다른 사람 코드 추가
function solution(s, e) {
  let queue = [];
  let visited = Array.from({ length: e }, () => 0);
  queue.push([s, 0]);
  visited[s] = 1;

  while (queue.length) {
    let [v, time] = queue.shift();

    if (v === e) return time; // 넣고 나서 검색?

    for (let nv of [v + 1, v - 1, v + 5]) {
      if (!visited[nv] && nv > 0 && vn <= 10000) {
        visited[nv] = 1;
        queue.push([nv, time + 1]);
      }
    }
  }
}
