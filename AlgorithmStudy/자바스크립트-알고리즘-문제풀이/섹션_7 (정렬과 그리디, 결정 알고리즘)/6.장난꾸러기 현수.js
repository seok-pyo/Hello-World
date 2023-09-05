// 틀린 논리, 하나의 케이스만 생각해서는 안된다.
// 만약 이렇게 구현한다면 for문을 따로 나눠서 실행해야 한다.
// for 문의 실행 방식을 헷갈리지 말자.
function solution(arr) {
  let hs = 0;
  let mate = 0;
  for (let i = 0; i < arr.length; i++) {
    for (let j = i; j < arr.length; j++) {
      if (arr[i] > arr[j]) hs = i;
      mate = j;
    }
  }
  console.log(hs, mate);
}

// 강의 코드 추가. 정렬을 해서 비교하면 바뀐 인덱스를 찾아낼 수 있다.

function solution(arr) {
  let answer = [];
  let sortArr = arr.slice(); // 기본 자료형에서는 깊은 복사, 배열 안에 배열이 들어가 있다면 얕은 복사가 된다.
  sortArr.sort((a, b) => a - b);
  for (let i = 0; i < arr.length; i++) {
    if (sortArr[i] !== arr[i]) answer.push(i + 1);
  }
  return answer;
}
