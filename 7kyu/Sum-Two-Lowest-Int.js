/* eslint-disable no-return-assign */
/* eslint-disable no-loop-func */
function sumTwoSmallestNumbers(numbers) {
  let smallest = Math.min(...numbers);
  let secondSmallest = 0;
  numbers.splice(numbers.indexOf(smallest), 1);
  for (let i = 0; i < numbers.length; i++) {
    if (numbers[i] !== smallest) {
      numbers.reduce((a, b) =>
        a < b ? (secondSmallest = a) : (secondSmallest = b)
      );
    }
  }
  const sum = smallest + secondSmallest;
  return sum;
}

console.log(sumTwoSmallestNumbers([1, 25, 10, 3]));
