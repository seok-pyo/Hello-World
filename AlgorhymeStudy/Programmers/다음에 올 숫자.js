function solution(common) {
  var answer = 0;
  const BdivA = common[1] / common[0];
  const CdivB = common[2] / common[1];
  const BsubA = common[1] - common[0];
  const CsubB = common[2] - common[1];
  if (common[0] !== common[1]) {
    if (BdivA === CdivB) {
      answer = common[common.length - 1] * BdivA;
    } else if (BsubA === CsubB) {
      answer = common[common.length - 1] + BsubA;
    }
  } else {
    answer = common[0];
  }
  return answer;
}

function solution(common) {
  if (common[1] - common[0] == common[2] - common[1]) {
    return common.pop() + common[1] - common[0];
  } else {
    return (common.pop() * common[1]) / common[0];
  }
}
