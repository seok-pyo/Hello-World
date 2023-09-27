function solution(sequence, k) {
  let answer = [];
  let M = new Map();
  let min = Number.MAX_SAFE_INTEGER;
  let lt = 0;
  sum = 0;
  for (rt = 0; rt < sequence.length; rt++) {
    sum += sequence[rt];
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
    if (key < smallestKey) smallestKey = key;
  }
  return M.get(smallestKey);
}

// 다른 사람 풀이 추가
// 길이가 같은 경우, 앞쪽 인덱스 반환하는 것 확인, 길이로 Map사용하지 않고 구현,
function solution(sequence, k) {
  var answer = [0, sequence.length - 1];
  let left = 0;
  let right = 0;

  let sum = sequence[left];
  while (right < sequence.length) {
    if (sum > k) {
      sum -= sequence[left];
      left++;
    } else if (sum < k) {
      right++;
      sum += sequence[right];
    } else {
      let distance = answer[1] - answer[0];
      let currentDistance = right - left;
      if (distance > currentDistance) {
        answer = [left, right];
      }
      sum -= sequence[left];
      left++;
    }
  }

  return answer;
}
