// for 문을 돌면서 하나씩 같은지 비교하기 보다 아래 방법들이 더 효율적이다.
function solution(i, j, k) {
  answer = 0;
  for (let num = i; num <= j; num++) {
    answer += num
      .toString()
      .split("")
      .filter((v) => v === k.toString()).length;
  }
  return answer;
}

// 문자열로 만든 다음 하나의 합치고, 합친 문자열에서 해당 문자를 찾는다.
function solution(i, j, k) {
  let s = "";
  for (i; i <= j; i++) {
    s += i;
  }
  return s.split(k).length - 1;
}

// 스플릿의 여집합!
// array 와 fill로 배열을 만들고 map으로 인덱스 만큼 더해준다.
function solution(i, j, k) {
  return (
    Array(j - i + 1)
      .fill(i)
      .map((v, index) => v + index)
      .join("")
      .split(k).length - 1
  );
}
