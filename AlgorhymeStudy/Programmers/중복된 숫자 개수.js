function solution(array, n) {
  return array.filter((v) => v === n).length;
}

// 만약 모든 1의 개수를 구하라고 한다면, [1,1,2,3,4,5,11]
// 원소를 다 돌면서 string으로 변환하고 1의 개수를 세어주면 된다.

function solution(array, n) {
  array.map((v) => v.toString().split(""));
  return array.filter((v) => v.toString() === n.toString()).length;
}

// 메서드별 리턴값 기억하자!
