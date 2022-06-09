let summation = function (num) {
  let n = 0;
  let result = 0;

  do {
    result += n;
    n++;
  } while (n <= num);
  return result;
};

console.log(summation(10));
