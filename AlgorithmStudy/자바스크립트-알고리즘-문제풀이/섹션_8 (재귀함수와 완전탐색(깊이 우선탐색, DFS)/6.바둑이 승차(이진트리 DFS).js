// 강의 전 코드 실습
function solution(limit, dog) {
  let answer = 0;
  let n = dog.length;
  function DFS(s, sum) {
    if (s === n) {
      if (sum < limit) answer = Math.max(answer, sum);
    } else {
      DFS(s + 1, sum + dog[s]);
      DFS(s + 1, sum);
    }
  }

  DFS(0, 0);
  return answer;
}

// 강의 코드 추가 -> 조건도 수행하면서 재귀도 더 이상 뻗지 못하게 위로 조건문을 옮겨준다.
// 같은 논리인데, 코드 상 더 깔끔한 코드
function solution(limit, dog) {
  let answer = 0;
  let n = dog.length;
  function DFS(s, sum) {
    if (sum > limit) return;
    if (s === n) {
      answer = Math.max(answer, sum);
    } else {
      DFS(s + 1, sum + dog[s]);
      DFS(s + 1, sum);
    }
  }

  DFS(0, 0);
  return answer;
}

// DFS 시간복잡도 가지치기
function solution(c, arr) {
  let answer = Number.MIN_SAFE_INTEGER;
  let n = arr.length;
  let total = arr.reduce((a, b) => a + b, 0);
  function DFS(L, sum, tsum) {
    if (sum > c) return;
    if (sum + (total - tsum) < answer) return;
    if (L === n) {
      answer = Math.max(answer, sum);
    } else {
      DFS(L + 1, sum + arr[L], tsum + arr[L]);
      DFS(L + 1, sum, tsum + arr[L]);
    }
  }
  DFS(0, 0, 0);
  return answer;
}

// total : 모든 바둑이들의 총 몸무게
// tsum : 부분집합을 만들어가는 과정에서 트럭에 탈 것인지 안 탈 것인지 이미 결정된 바둑이들의 총 몸무게
// (total - tsum) : 부분집합을 만들어가는 과정에서 트럭에 탈 것인지 안 탈 것인지 아직 결정 안된 바둑이들의 몸무게
// if(sum + (total - tsum) < answer) : 지금까지 트럭에 탄 바둑이들의 총 몸무게(sum)에 앞으로
// 탈 것인지 안 탈것인지 결정해야 할 남은 바둑이들이 다 트럭에 탄다고 가정했을 때 트럭에 타는 총 몸무게가
// 기존 답(answer) 보다 작다면 그 경우의 가지는 탐색하지 않겠다는 뜻
