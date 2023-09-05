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
