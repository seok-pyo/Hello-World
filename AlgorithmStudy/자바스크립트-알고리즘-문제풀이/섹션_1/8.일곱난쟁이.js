// let arr = [22, 7, 21, 19, 10, 15, 25, 8, 13];
// function combinations(arr, num) {
//   const result = [];

//   if (num === 1) {
//     return arr.map((v) => [v]);
//   }
//   arr.forEach((fixed, index, origin) => {
//     const rest = origin.slice(index + 1);
//     const combiArr = combinations(rest, num - 1);
//     const attached = combiArr.map((v) => [fixed, ...v]);
//     result.push(...attached);
//   });
//   return result;
// }
// function solution(arr) {
//   return combinations(arr, 7).filter((v) => v.reduce((a, c) => a + c, 0) == 100)
//     ? combinations(arr, 7).filter((v) => v.reduce((a, c) => a + c, 0) == 100)[0]
//     : [];
// }

let arr = [20, 7, 23, 19, 10, 15, 25, 8, 13];

function solution(arr) {
  for (let i = 0; i < arr.length - 1; i++) {
    for (let j = i + 1; j < arr.length; j++) {
      if (arr.reduce((a, c) => a + c, 0) - (arr[i] + arr[j]) === 100) {
        arr.splice(j, 1); // splice의 경우 원본배열을 변경하기 때문에 뒤에 포인터부터 삭제해준다.
        arr.splice(i, 1);
      }
    }
  }
  return arr;
}

console.log(solution(arr));
