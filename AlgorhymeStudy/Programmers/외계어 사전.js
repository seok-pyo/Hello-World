// toString을 하지 않으면 변수가 다른 주소를 참고하기 때문에 다르다고 나온다. [1,2,3] == [1,2,3] -> false
function solution(spell, dic) {
  return dic.some(
    (v) => [...v].sort().toString() === [...spell].sort().toString()
  )
    ? 1
    : 2;
}

//set 풀이
function solution(spell, dic) {
  const sLeng = spell.join("").length;
  return dic
    .filter((v) => sLeng === new Set(v).size)
    .some((v) => new Set(v + spell.join("")).size === sLeng)
    ? 1
    : 2;
}
