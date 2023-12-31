// 투포인터, 슬라이딩 윈도우
// 투포인터 알고리즘 : 두 개의 점의 위치(index)를 이용하여 순차적으로 해결
// 슬라이딩 윈도우 : 고정 사이즈의 윈도우가 이동하면서 윈도우 내 데이터를 연산하여 문제 해결
// 구간합이나 펠린드롬에서 사용
// 예시)
// 슬라이딩 윈도우 : [1,5,4,6,4,6,7,6,4,3,1,2]에서 연속된 2개의 합이 10인 모든 수를 찾아라
// 투포인터 : [1,5,4,6,4,6,7,6,4,3,1,2]에서 연속된 배열의 합이 10인 배열의 인덱스를 모두 찾아라
// 예시가 아닌 것 )
// [1,5,4,6,4,6,7,6,4,3,1,2]에서 2개의 수 조합으로 10을 만들 수 있는 배열의 인덱스를 찾아라
// ### 슬라이딩 윈도우, 투포인터, 순열과 조합은 한 세트로 묶고 비슷한 유형이 나왔을 때 그 중에서 고민하는 것이 좋다.
// 펠린드롬 문제 : codingdojang.com/search/?q=palindrome

function solution(data) {
  let result = [];
  data[0].forEach((v, i) => {
    for (let j = i + 1; j < data[0].length; j++) {
      if (v + data[0][j] == data[1]) {
        result.push(i, j);
      }
    }
  });
  return result;
}

solution([[4, 9, 11, 2], 6]);

// JSON.stringify(data) 로 데이터 형태 확인
