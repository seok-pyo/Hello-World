// BFS 풀이 -> 최단거리는 BFS 접근하는 게 맞다!(효율성 측면에서)
function solution(maps) {
  let n = maps.length;
  let m = maps[0].length;
  let dx = [0, 1, 0, -1];
  let dy = [1, 0, -1, 0];

  // 방문 여부를 나타내는 visited 배열 생성
  let visited = Array.from({ length: n }, () => Array(m).fill(false));

  // 시작점과 거리를 큐에 넣음
  let queue = [{ x: 0, y: 0, len: 1 }];

  while (queue.length > 0) {
    let { x, y, len } = queue.shift();

    if (x === n - 1 && y === m - 1) {
      return len;
    }

    for (let i = 0; i < 4; i++) {
      let nx = x + dx[i];
      let ny = y + dy[i];

      if (
        nx >= 0 &&
        nx < n &&
        ny >= 0 &&
        ny < m &&
        maps[nx][ny] === 1 &&
        !visited[nx][ny]
      ) {
        visited[nx][ny] = true; // 방문한 위치를 표시
        queue.push({ x: nx, y: ny, len: len + 1 });
      }
    }
  }

  return -1; // 도착점에 도달할 수 없는 경우
}

// 예제 입력
let maps = [
  [1, 0, 1, 1, 1],
  [1, 0, 1, 0, 1],
  [1, 1, 1, 0, 1],
  [0, 0, 0, 0, 1],
];

let result = solution(maps);
console.log(result); // 최단 경로의 길이 출력

// DFS 풀이 -> 정확도는 맞지만 효율성 테스트에서 런타임에러 나옴

function solution(maps) {
  let answer = [];
  let n = maps.length;
  let m = maps[0].length;
  let dx = [0, 1, 0, -1];
  let dy = [1, 0, -1, 0];

  // 방문 여부를 나타내는 visited 배열 생성
  let visited = Array.from({ length: n }, () => Array(m).fill(false));

  function DFS(x, y, len) {
    if (x === n - 1 && y === m - 1) {
      answer.push(len);
      return;
    }

    for (let i = 0; i < 4; i++) {
      let nx = x + dx[i];
      let ny = y + dy[i];
      if (
        nx >= 0 &&
        nx < n &&
        ny >= 0 &&
        ny < m &&
        maps[nx][ny] === 1 &&
        !visited[nx][ny]
      ) {
        visited[nx][ny] = true; // 방문한 위치를 표시
        DFS(nx, ny, len + 1);
        visited[nx][ny] = false; // 이전 상태로 되돌림
      }
    }
  }

  // 출발점에서 시작
  if (maps[0][0] === 1) {
    visited[0][0] = true; // 출발점 방문 여부 표시
    DFS(0, 0, 1);
  }

  return answer.length ? Math.min(...answer) : -1;
}
