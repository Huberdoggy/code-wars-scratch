function smash(words) {
  let sentence = '';
  for (let i = 0; i < words.length; i++) {
    if (i === 0) {
      sentence = words[i];
    }
    if (i > 0 && i < words.length) {
      sentence += ` ${words[i]}`;
    }
  }
  return sentence;
}

console.log(smash(['This', 'is', 'a', 'test', 'sentence.']));
