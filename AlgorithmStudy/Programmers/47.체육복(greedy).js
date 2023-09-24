function solution(n, lost, reserve) {
  let students = Array.from({ length: n }, () => 1);
  for (let x of lost) students[x - 1] -= 1;
  for (let x of reserve) students[x - 1] += 1;
  for (let i = 0; i <= students.length - 1; i++) {
    if (students[i] === 2 && students[i - 1] === 0) {
      students[i] -= 1;
      students[i - 1] += 1;
    } else if (students[i] === 2 && students[i + 1] === 0) {
      students[i] -= 1;
      students[i + 1] += 1;
    }
  }
  return students.filter((v) => v >= 1).length;
}
// for 문 인덱스 범위 벗어나도 오류 발생하진 않음. 하지만 정확한 인덱싱을 하려고 노력하자!
// arr[-1] = undefinded;
// length 벗어나도 undefinded 출력;
