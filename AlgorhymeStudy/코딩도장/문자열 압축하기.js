let result = s[0];
let count = 0;

for (let str of s) {
  if (str == result.slice(-1)) {
    count += 1;
  } else {
    result += count + str;
    count = 1;
  }
}

result += count;
console.log(result);

const s = "aaabbbcca";
const reg = /(\w)\1*/g;

[...s.matchAll(reg)];
