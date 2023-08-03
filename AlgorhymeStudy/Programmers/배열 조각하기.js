// 나는야 배열 조각사 ~
function solution(arr, query) {
  query.map((value, idx) => {
    idx % 2 ? arr.splice(0, value) : arr.splice(value + 1);
  });
  return arr;
}

// forEach 와 Map 의 차이
// filter 메소드
// splice 와 slice (splice 는 원본 배열을 수정, slice 는 새로운 배열을 반환)

// splice 배열 자르고 조각하기

// 이상한 시도 1
// function solution(arr, query) {
//     var answer = query.map((que) => {if(que % 2 === 0){
//         arr.splice(que+1);
//     } else {
//         arr.splice(0,que-1);
//     })
//     return arr;
// }

// 이상한 시도 2
// function solution(arr, query) {
//     query.map((que) => if (que % 2 === 0){
//         arr.splice(que+1);
//     } else {
//         arr.splice(0,que-1);
//     })
//     return arr;
// }

// gpt 의 제안
// function solution(arr, query) {
//     query.forEach((que) => {
//       if (que % 2 === 0) {
//         arr.splice(que + 1);
//       } else {
//         arr.splice(0, que - 1);
//       }
//     });
//     return arr;
//   }

// 이상한 시도 3
// function solution(arr, query) {
//     const filteredArr = arr.filter((element, index) => {
//       if (query[index] % 2 === 0) {
//         // 짝수인 경우 배열의 마지막 요소를 제거
//         return index < arr.length - 1;
//       } else {
//         // 홀수인 경우 배열의 첫 번째 요소를 제거
//         return index > 0;
//       }
//     });

//     return filteredArr;
//   }

// 화살표 함수 한줄이 아니어도 사용 가능하다.
