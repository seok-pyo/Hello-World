function solution(code) {
  let answer = "";
  let mode = 0;

  for (let i = 0; i < code.length; i += 1) {
    if (Number(code[i]) === 1) {
      mode = mode === 1 ? 0 : 1;
    }
    if (Number(code[i]) !== 1 && i % 2 === mode) {
      answer += code[i];
    }
  }
  return answer.length > 0 ? answer : "EMPTY";
}

function solution(code) {
  let odd = false;
  return (
    Array.from(code).reduce((acc, v, i) => {
      if (v === "1") {
        odd = !odd;
        return acc;
      }
      return i % 2 === (odd ? 1 : 0) ? acc + v : acc;
    }, "") || "EMPTY"
  );
}

function solution(code) {
  let ret = "";
  for (let i = 0, mode = false; i < code.length; i++) {
    if (code[i] === "1") mode = !mode;
    else if ((mode && i % 2) || (!mode && !(i % 2))) {
      ret += code[i];
    }
  }
  return ret.length ? ret : "EMPTY";
}

function solution(code) {
  var answer = "";
  var mode = 0;
  code.split("").forEach((c, idx) => {
    if (mode === 0) {
      if (c === "1") mode = 1;
      else if (idx % 2 === 0) answer += c;
    } else {
      if (c === "1") mode = 0;
      else if (idx % 2 === 1) answer += c;
    }
  });
  return answer === "" ? "EMPTY" : answer;
}

// 나의 풀이

function solution(code) {
  var answer = "";
  let mode = "0";
  for (let i = 0; i < code.length; i++) {
    if (code[i] === "1" && mode === "0") {
      mode = "1";
    } else if (code[i] === "1" && mode === "1") {
      mode = "0";
    }
    if (mode === "0" && i % 2 === 0 && code[i] !== "1") {
      answer += code[i];
    }
    if (mode === "1" && i % 2 !== 0 && code[i] !== "1") {
      answer += code[i];
    }
  }
  return answer ? answer : "EMPTY";
}
