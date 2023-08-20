let data = [
  ["#", 0, 0, 0, "#"],
  [0, "#", "#", 0, 0],
  ["#", "#", "#", 0, "#"],
  ["#", 0, 0, "#", "#"],
];

function solution(data) {
  let outside = [
    [-1, 0],
    [-1, -1],
    [-1, 1],
    [0, 1],
    [1, 1],
    [1, 0],
    [0, -1],
    [1, -1],
  ];
  let safeZone = 0;

  data.forEach((row, y, self) =>
    row.forEach((it, x) => {
      if (it == "#") return false;

      return outside.filter(([oy, ox]) =>
        self[oy + y]?.[ox + x] == "#" ? safeZone++ : false
      );
    })
  );

  return [data.flat().filter((v) => v === "#").length, safeZone];
}
