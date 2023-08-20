function solution(num, total) {
  //   const a = ((2 * total) / num + 1 - num) / 2;
  //   return Array(num)
  //     .fill()
  //     .map((_, i) => i + a);
  return Array(num)
    .fill(((2 * total) / num + 1 - num) / 2)
    .map((cv, i) => cv + i);
}

// 첫 번째 항을 a1 공차를 d, 마지막항을 l, 등차수열의 총합을 total
// total = a1 + a2 + a3 + ... + an
// an = a + (n - 1)d
// total = a + (a + d) + (a + 2d) + ... + (l - d) + l
// l = an
// l = a + (n - 1)d
// total = a + (a + 1) + (a + 2) + ... + (l - d) + l
// total = l + (l - d) + (l - 2d) + ... + (a + d) + a
// 2total = n(a + l)
// total = n(a + l) / 2

// (2 * total / n) - last(a + (num - 1) * 1) = a
// (2 * total / n - (num - 1))) / 2 = a
