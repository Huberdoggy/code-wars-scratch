const isSquare = function (n) {
  let result;
  switch (n) {
    case n <= 0:
      break;
    default:
      for (let i = 0; i <= n; i++) {
        if (i * i === n) {
          result = true;
          break;
        }
      }
      return result || false;
  }
};

console.log(isSquare(25));
