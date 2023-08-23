// paullabKorea/programmersLv0
// 깊이 우선 탐색, 너비 우선 탐색
// 깊스너큐!

// Depth First Search
// 방문경로 | stack | current

// Depth First Search
// 방문경로 | Queue | current

function solution(data) {
  // x : 행, y : 열
  // N : 행, M : 열

  function check(x, y) {
    if (y < 0 || y > M || x < 0 || x > N) {
      return false;
    }
    if (data[x][y] === "#") {
      return false;
    }
    return true;
  }
  const N = data.length - 1;
  const M = data[0].length - 1;

  let queue = [];
  queue.push([0, 0]); // 출발점 지정, queue 사작 push - shift
  let fish = data[0][0]; // 첫번째 물고기
  data[0][0] = 0; // 다시 되돌아 와도, 잡을 수 있는 물고기는 없게

  // let visited = new Set()
  let count = 0; // let visited 대신 count로 사용(단순한 문제이기 때문에)
  let goal = false; // 목적지 도착 여부

  while (queue) {
    // console.log(JSON.stringity(queue))
    count += 1;
    if (count == (N * M) ** 3) {
      if (goal) {
        return fish;
      }
      return -1;
    }
    let [x, y] = queue.shift();
    // visited.add([x,y])
    if (x == N && y == M) {
      fish += data[x][y];
      data[x][y] = 0;
      goal = true;
    }
    //상
    if (check(x - 1, y)) {
      queue.push([x - 1, y]);
      fish += data[x - 1][y];
      data[x - 1][y] = 0;
    }
    //하
    if (check(x + 1, y)) {
      queue.push([x + 1, y]);
      fish += data[x + 1][y];
      data[x + 1][y] = 0;
    }
    //좌
    if (check(x, y - 1)) {
      queue.push([x, y - 1]);
      fish += data[x][y - 1];
      data[x][y - 1] = 0;
    }
    //우
    if (check(x, y + 1)) {
      queue.push([x, y + 1]);
      fish += data[x][y + 1];
      data[x][y + 1] = 0;
    }
  }
}
