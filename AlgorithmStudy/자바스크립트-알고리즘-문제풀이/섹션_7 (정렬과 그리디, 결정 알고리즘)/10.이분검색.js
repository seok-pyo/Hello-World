function solution(arr, target) {
  let answer = 0;
  arr.sort((a, b) => a - b);
  let s = 0;
  let e = arr.length - 1;

  while (s <= e) {
    let mid = parseInt((s + e) / 2); // mid 를 계속 업데이트 해줘야 한다.
    if (target === arr[mid]) {
      // mid 값은 인덱스이다..!
      answer = mid + 1;
      break;
    } else if (target < arr[mid]) e = mid - 1;
    else if (arr[mid] < target) s = mid + 1;
  }
  return answer;
}
