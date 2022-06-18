function numberToString(num) {
  if (!(typeof num === 'string')) {
    return `Type of your number ${num} has been converted to ${typeof String(
      num
    )}`;
  }
  return 'Not a number';
}

console.log(numberToString(20));
console.log(numberToString('ten'));
