function solution(queue1, queue2) {
  let answer = -1;
  const maxMoving = queue1.length + queue2.length;
  let q1 = [...queue1];
  let q2 = [...queue2];
  let idx1 = 0;
  let idx2 = 0;

  let sum1 = q1.reduce((acc, val) => acc + val, 0);
  let sum2 = q2.reduce((acc, val) => acc + val, 0);

  for (let cnt = 0; cnt < maxMoving * 2; cnt++) {
    if (sum1 === sum2) {
      answer = cnt;
      break;
    } else if (sum1 > sum2) {
      const item = q1[idx1++];
      sum1 -= item;
      q2.push(item);
      sum2 += item;
    } else {
      const item = q2[idx2++];
      sum2 -= item;
      q1.push(item);
      sum1 += item;
    }
  }

  return answer;
}
