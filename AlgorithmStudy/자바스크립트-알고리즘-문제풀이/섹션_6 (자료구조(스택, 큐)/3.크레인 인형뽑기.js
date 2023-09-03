// 오류 발생!
function solution(board, moves) {
  let stack = [];
  let depth = 0;
  for (let m of moves) {
    let col = m - 1;
    if (!board[depth][col]) {
      while (!board[depth][col]) {
        depth++;
      }
    }
    stack.push(board[depth][col]);
    board[depth][col] = 0;
    depth = 0;
  }
  return stack;
}

// 정답코드 작성 완료!
function solution(board, moves) {
  let stacks = [];
  let answer = [];
  for (let m of moves) {
    for (let i = 0; i < board.length; i++) {
      if (board[i][m - 1] !== 0) {
        stacks.push(board[i][m - 1]);
        board[i][m - 1] = 0;
        break; // 인형 하나만 뽑기 위해서
      }
    }
  }
  let cnt = 0;
  for (let s of stacks) {
    answer.push(s);
    if (answer[answer.length - 1] === answer[answer.length - 2]) {
      answer.splice(answer.length - 2);
      cnt += 2;
    }
  }
  return cnt;
}

// 강의 코드 추가
function solution(board, moves) {
  let answer = 0;
  let stack = [];
  moves.forEach((pos) => {
    for (let i = 0; i < board.length; i++) {
      if (board[i][pos - 1] !== 0) {
        let tmp = board[i][pos - 1];
        board[i][pos - 1] = 0;
        if (tmp === stack[stack.length - 1]) {
          stack.pop();
          answer += 2;
        } else stack.push(tmp);
        break;
      }
    }
  });
  return answer;
}
