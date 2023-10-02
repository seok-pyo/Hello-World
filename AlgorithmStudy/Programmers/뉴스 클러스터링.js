function slicing(text) {
  let result = [];
  for (let i = 0; i < text.length - 1; i++) {
    result.push(text.slice(i, i + 2));
  }
  return result;
}

function solution(str1, str2) {
  let arr = slicing(str1).map((v) => v.toLowerCase());
  let arr2 = slicing(str2).map((v) => v.toLowerCase());

  const arrFilt = arr.filter((element) => /^[a-zA-Z]+$/.test(element));
  const arr_2_Filt = arr2.filter((element) => /^[a-zA-Z]+$/.test(element));
  const share = [];
  const add = [];
  add.push(...arrFilt, ...arr_2_Filt);
  for (let x of arrFilt) {
    if (arr_2_Filt.includes(x)) share.push(x);
  }
  const mS = new Set(add);
  const sS = new Set(share);
  return [Array.from(sS), Array.from(mS)];
}
