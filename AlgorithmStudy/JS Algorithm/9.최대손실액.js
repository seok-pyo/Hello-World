function solution(data) {
  let result = [];
  data.forEach((v1, i, o) =>
    o.slice(i, -1).forEach((v2) => result.push(v1 - v2))
  );
  return Math.max(...result); // return Math.max.apply(null, result);
}
