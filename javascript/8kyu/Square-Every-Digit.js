const squareDigits = (num) => {
  return +Array.from(num.toString(), (n) => n * n).join('');
};

console.log(squareDigits(9119)); // Expect 811181 - 9 squared is 81, 1 squared is 1
