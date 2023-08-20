function solution(score) {
  let rank = score.map((val) => (val[0] + val[1]) / 2);
  let sortRank = score
    .map((val) => (val[0] + val[1]) / 2)
    .sort((a, b) => b - a);
  return rank.map((v) => sortRank.indexOf(v) + 1);
}

// 평균을 내지 않아도 된다! sort 는 원본배열에 수정을 가한다.
