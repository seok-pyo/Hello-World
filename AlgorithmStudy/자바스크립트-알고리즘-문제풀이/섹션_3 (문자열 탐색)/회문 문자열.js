function solution(t) {
  let T = t.split("").map((v) => v.toLowerCase());
  let RT = T.slice().reverse();
  if (T.join("") === RT.join("")) {
    return "YES";
  } else {
    return "NO";
  }
}
