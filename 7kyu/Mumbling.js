function accum(s) {
  let newStr = '';
  const lowerReg = /^[a-z]$/;
  const upperReg = /^[A-Z]$/;
  if (!(typeof s === 'string')) {
    return 'Not a string';
  }

  for (let i = 0; i < s.length; i++) {
    if (i === 0) {
      newStr = s[i].toUpperCase();
    } else if (i > 0 && i < s.length) {
      if (s[i].match(lowerReg)) {
        newStr += `-${s[i].toUpperCase()}${s[i].repeat(i)}`;
      } else if (s[i].match(upperReg)) {
        newStr += `-${s[i]}${s[i].toLowerCase().repeat(i)}`;
      }
    }
  }
  return newStr;
}

console.log(accum('abcd'));
