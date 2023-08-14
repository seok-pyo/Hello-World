Array(100)
  .fill(0)
  .map((v, i) => i)
  .toString()
  .split() // 구분자 없으면 쉼표 없이 구분해서 배열로 리턴한다.
  .filter((v) => v === "8").length;
