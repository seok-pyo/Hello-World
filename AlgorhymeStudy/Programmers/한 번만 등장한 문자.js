function solution(s) {
  let my_array = s.split("");
  return my_array
    .filter((cha) => my_array.indexOf(cha) === my_array.lastIndexOf(cha))
    .sort()
    .join("");
}

function solution(s) {
  return [...s]
    .filter((c) => s.match(new RegExp(c, "g")) == 1)
    .sort()
    .join("");
}

function solution(s) {
  return [...s]
    .filter((c) => s.split(c).length === 2)
    .sort()
    .join("");
}
