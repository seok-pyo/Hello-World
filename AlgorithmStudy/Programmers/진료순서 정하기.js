function solution(emergency) {
  let emergencyList = emergency.slice().sort((a, b) => b - a);
  return emergency.map((v) => emergencyList.indexOf(v) + 1);
}
// slice()를 해주어야 깊은 복사를 할 수 있다.

function solution(emergency) {
  let emergencyList = [...emergency].sort((a, b) => b - a);
  return emergency.map((v) => emergencyList.indexOf(v) + 1);
}
