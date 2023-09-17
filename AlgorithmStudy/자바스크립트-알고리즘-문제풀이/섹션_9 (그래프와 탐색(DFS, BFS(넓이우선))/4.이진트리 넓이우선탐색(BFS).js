function solution() {
  let answer = "";
  let queue = [];
  queue.push(1);
  while (queue.length) {
    let v = queue.shift();
    answer += v + " ";
    for (let nv of [v * 2, v * 2 + 1]) {
      // 이진트리이기 때문에 push를 두번 해줘도 된다.
      if (nv > 7) continue;
      queue.push(nv);
    }
  }
  console.log(answer);
}

solution();
