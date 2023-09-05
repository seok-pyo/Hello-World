// 고차함수 활용 알고리즘
function solution(t, n) {
  let cache = Array(n).fill(0);
  for (let i = 0; i < t.length; i++) {
    if (cache.includes(t[i])) {
      let tmp = cache[cache.indexOf(t[i])];
      cache.splice(cache.indexOf(t[i]), 1);
      cache.unshift(tmp);
    } else {
      cache.pop();
      cache.unshift(t[i]);
    }
  }
  return cache.join("");
}

// 삽입정렬 알고리즘

function solution(t, n) {
  let cache = Array(n).fill(0);
  console.log(cache);
  for (let i = 0; i < t.length; i++) {
    if (cache.includes(t[i])) {
      for (let k = cache.indexOf(t[i]); k > 0; k--) {
        [cache[k - 1], cache[k]] = [cache[k], cache[k - 1]];
      }
    } else {
      for (let j = n - 1; j > 0; j--) {
        [cache[j - 1], cache[j]] = [cache[j], cache[j - 1]];
        console.log(cache);
      }
      cache[0] = t[i];
    }
  }
  return cache.join("");
}

// 삽입정렬 알고리즘 - 강의 코드 추가
function solution(size, arr) {
  let answer = Array.from({ length: size }, () => 0);
  arr.forEach((v) => {
    let pos = -1;
    for (let i = 0; i < size; i++) if (v === answer[i]) pos = i; // hit 상황, for 문으로 판별하고,
    // hit 된 원소의 인덱스 번호도 같이 얻을 수 있다. for 문이 다 돌떄 까지 안 내려간다. 실행 컨텍스트 기억!
    if (pos === -1) {
      for (let i = size - 1; i >= 1; i--) {
        answer[i] = answer[i - 1];
        // answer[0] = x, 중복코드 제거, 어짜피 if, else 문이 실행되고 난 이후에 answer[0] 에
        // x를 넣으면 된다.
      }
    } else {
      for (let i = pos; i >= 1; i--) {
        answer[i] = answer[i - 1];
        // answer[0] = x
        // if 와 else 모두 앞에 있는 걸 뒤로 땡기는 코드, 같은 내용이니 해당 코드 실행 후에 answer[0] 에
        // x를 넣는 건 밖으로 빼서 실행해도 된다.
      }
    }
    answer[0] = v;
  });
}
