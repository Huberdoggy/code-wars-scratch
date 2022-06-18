/* eslint-disable no-unneeded-ternary */
function betterThanAverage(classPoints, yourPoints) {
  let result = 0;
  let classScore = classPoints;
  const myScore = yourPoints;

  for (let i = 0; i < classScore.length; i++) {
    result += classScore[i];
  }
  const classAvg = result / classScore.length;
  return myScore > classAvg ? true : false;
}

console.log(betterThanAverage([60, 55, 80, 90], 97));
