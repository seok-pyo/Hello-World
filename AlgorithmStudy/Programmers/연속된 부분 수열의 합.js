function solution(sequence, k) {
  let answer = [];
  let M = new Map();
  let min = Number.MAX_SAFE_INTEGER;
  let lt = 0;
  sum = 0;
  for (rt = 0; rt < sequence.length; rt++) {
    sum += suqeunce[rt];
    if (sum === k) {
      answer.push([lt, rt]);
    }
    while (sum >= k) {
      sum -= sequence[lt++];
      if (sum === k) answer.push([lt, rt]);
    }
  }
  for (let x of answer) {
    let tmp = x[1] - x[0];
    if (!M.has(tmp)) M.set(tmp, x);
    else if (M.has(tmp) && M.get(tmp)[0] > x[0]) M.set(tmp, x);
  }

  let keyArr = Array.from(M.keys());

  let smallestKey = keyArr[0];
  for (let key of keyArr) {
    if (key < smallestKey) smallestkey = key;
  }
  return M.get(smallestkey);
}
