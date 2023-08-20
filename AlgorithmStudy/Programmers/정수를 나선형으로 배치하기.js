function generateSpiralMatrix(n) {
  // 2차원 배열 초기화
  const matrix = new Array(n).fill().map(() => new Array(n).fill(0));
  // 파이썬
  // arr = [[0] * n for _ in range(n)]

  // 이동 방향 설정 : 이동을 배열의 인덱스로 표현 --> ( x, y ) -> ( dx[0], dy[0]);
  // [ 0,1,2,3 ] : 오른쪽, 아래, 왼쪽, 위 --> 시계 반대 방향으로 초기 설정 중요 *
  // x 가 행이고 y 가 열인 점 주의 *
  const directionX = [0, 1, 0, -1];
  const directionY = [1, 0, -1, 0];

  // 현재 위치 및 값 초기화
  let x = 0,
    y = 0;
  let direction = 0;

  // 1부터 n^2까지의 정수를 배열에 채워넣기
  for (let i = 1; i <= n * n; i++) {
    matrix[x][y] = i;

    // 다음 위치로 이동 ( 다음 x, y 의 위치를 계산하기 위한 중간 값)
    const nextX = x + directionX[direction];
    const nextY = y + directionY[direction];

    // 다음 위치가 배열 범위를 벗어나거나 이미 값이 채워진 경우 방향을 바꿔서 이동
    if (
      nextX < 0 ||
      nextX >= n ||
      nextY < 0 ||
      nextY >= n ||
      matrix[nextX][nextY] !== 0
    ) {
      direction = (direction + 1) % 4;
    }

    x = x + directionX[direction];
    y = y + directionY[direction];
  }

  return matrix;
}

// closure 활용 generateSpiralMatrix 함수 추상화
function solution(n) {
  return generateSpiralMatrix(n);
}

solution(3);

/*
1 씩 증가하는 정방형의 2차원 배열 만들기

<<< 1 >>>
function create2DArray(n) {
  const array = new Array(n);
  let counter = 1;

  for (let i = 0; i < n; i++) {
    array[i] = new Array(n);
    for (let j = 0; j < n; j++) {
      array[i][j] = counter++;
    }
  }

  return array;
}

<<< 2 >>>
function matrix(n) {
  const matrix = []
  for (let i = 0; i < n; i++) {
   const innerMatrix = []
    for (let j = i * n + 1; j <= ( n * i ) + n; j++ ){
      innerMatrix.push( j );
    }
  	matrix.push(innerMatrix);  
  }
  console.log(matrix);
}

matrix(3);

*/
