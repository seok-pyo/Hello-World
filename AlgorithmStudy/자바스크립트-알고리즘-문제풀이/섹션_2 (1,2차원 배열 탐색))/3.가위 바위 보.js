function solution(a, b) {
  result = "";
  for (let i = 0; i < a.length; i++) {
    if (a[i] === b[i]) result += " D ";
    if (Math.abs(a[i] - b[i]) > 1 && a[i] - b[i] > 0) result += " B ";
    if (Math.abs(a[i] - b[i]) > 1 && a[i] - b[i] < 0) result += " A ";
    if (Math.abs(a[i] - b[i]) === 1 && a[i] - b[i] > 0) result += " A ";
    if (Math.abs(a[i] - b[i]) === 1 && a[i] - b[i] < 0) result += " B ";
  }
  return result;
}

// 경우의 수를 분류할 수 있는 기준을 잘 설정한다.
// A가 이기는 경우만 생각해보면, 그 이외에는 모두 B가 이기게 된다.
// 어렵게 접근하지 말고, 간단하게 접근할 수 있는 방법을 생각해보자.

function solution(a, b) {
  result = "";
  for (let i = 0; i < a.length; i++) {
    if (a[i] === b[i]) result += "D" + " ";
    else if (a[i] === 1 && b[i] === 3) result += "A" + " ";
    else if (a[i] === 2 && b[i] === 1) result += "A" + " ";
    else if (a[i] === 3 && b[i] === 2) result += "A" + " ";
    else result += "B" + " ";
  }
  return result;
}
