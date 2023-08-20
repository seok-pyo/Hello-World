function solution(num_list) {
  const answer = [0, 0];
  num_list.filter((v) => (v % 2 === 0 ? (answer[0] += 1) : (answer[1] += 1)));
  return answer;
}

function solution(num_list) {
  var answer = [0, 0];
  for (item of num_list) {
    answer[item % 2] += 1;
  }
  return answer;
}

// forEach로 반환하는 게 좋을 듯
function solution(num_list) {
  const answer = [0, 0];
  num_list.forEach((v) => (answer[v % 2] += 1));
  return answer;
}
