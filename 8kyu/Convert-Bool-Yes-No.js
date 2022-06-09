function boolToWord(bool) {
  let str = '';
  if (typeof bool === 'boolean') {
    if (bool === true) {
      str = 'Yes';
    } else {
      str = 'No';
    }
  } else {
    console.log(`Input is not of correct type. Got ${typeof bool}`);
  }
  return str;
}

console.log(boolToWord(true));
console.log(boolToWord(10));
