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
