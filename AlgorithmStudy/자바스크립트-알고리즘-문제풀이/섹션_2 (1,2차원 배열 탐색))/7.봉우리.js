function solution(arr) {
  let result = 0;
  let n = arr.length;
  let dy = [-1, 0, 1, 0];
  let dx = [0, 1, 0, -1];

  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n; j++) {
      let flag = 1;
      for (let k = 0; k < 4; k++) {
        let nx = dx[k] + j; // x,y 헷갈리지 말자!
        let ny = dy[k] + i;
        //let flag = 1; // flag 설정 위치 중요!
        if (
          nx >= 0 && // index의 시작은 0이 될 수 있음으로 같을 수 있다는 조건을 추가한다.
          nx < n && // 길이와 같은 인덱스는 없다.
          ny >= 0 &&
          ny < n &&
          arr[i][j] <= arr[ny][nx]
        ) {
          flag = 0;
          break;
        }
      }
      if (flag) result++; // 조건문 위치 중요! 어느 반복문 시점에서 실행할건지! / 위에 flag를 처음 설정할 때와 같은 범위에 지정한다!
    }
  }
  return result;
}

// 봉우리 문제 복습!

function solution(arr) {
  let answer = 0;
  let dir = [
    [0, -1],
    [1, 0],
    [0, -1],
    [-1, 0],
  ];
  for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr.length; j++) {
      let flag = 0;
      for (let k of dir) {
        if (j + k[0] < 0 && i + k[1] < 0 && j + k[0] >= n && i + k[1] >= n)
          break;
        if (arr[i][j] < arr[i + k[1]][j + k[0]]) break;
        flag = 1;
        if (flag === 1) answer++;
      }
    }
  }
  return answer;
}
// flag의 위치가 잘못되었음, 논리상 4방향을 확인 한 수(4방향 반복문에서 flag를 조작하고) 나와서, flag를 확인 하는게 맞음
// if문 조건안에서 인덱스를 그대로 넣으면 복잡해 지는 경우가 있다. 바깥으로 빼서 변수화 시키자
// 중간에 이중 배열로 바꾼건 전체 구조상 잘한 것 같기도 하다? -> 하지만, 배열의 세팅도 잘못되었고, 중간에 바꿔서 내용이 틀렸는지 확인하기 어려웠다
// 그리고 여기서만 사용하는 코드라면 상관없지만, 재사용성을 생각한다면 x, y 배열을 나누는 편이 났다.
// 코드의 간결성과 가독성은 이중배열로 하는 편이 나을 것 같다. 두개 모두 시간복잡도에는 큰 영향을 끼치지 않는다.

// 전체 구조를 보는 연습을 하자, 전체 구조 그리기!

function solution(arr) {
  const n = arr.length;
  const directions = [
    [0, -1],
    [1, 0],
    [0, 1],
    [-1, 0],
  ];
  let answer = 0;

  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n; j++) {
      let flag = 1;
      for (let k of directions) {
        const newRow = i + k[0];
        const newCol = j + k[1];

        if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < n) {
          if (arr[i][j] < arr[newRow][newCol]) {
            flag = 0;
            break;
          }
        }
      }
      answer += flag;
    }
  }
  return answer;
}
