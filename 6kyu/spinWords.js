/* eslint-disable no-return-assign */
// Write a function that takes in a string of one or more words, and returns the same string, but with all five or more letter words reversed (Just like the name of this Kata). Strings passed in will consist of only letters and spaces. Spaces will be included only when more than one word is present.

// Examples: spinWords( "Hey fellow warriors" ) => returns "Hey wollef sroirraw" spinWords( "This is a test") => returns "This is a test" spinWords( "This is another test" )=> returns "This is rehtona test"

function spinWords(string) {
  let sentence = '';
  let splitStr = '';
  const multWordReg = /\w+\s\w+(\s\w+)?/;
  if (string.match(multWordReg)) {
    splitStr = string.split(' ');
    splitStr.forEach((el) =>
      el.length >= 5
        ? (sentence += `${el.split('').reverse().join('')} `)
        : (sentence += `${el} `)
    );
  } else if (string.length >= 5) {
    sentence += string.split('').reverse().join('');
  } else {
    return string;
  }

  return sentence;
}

console.log(spinWords('Hey fellow warriors'));
console.log(spinWords('This is a test'));
console.log(spinWords('This is another test'));
console.log(spinWords('Huber'));
console.log(spinWords('Four'));
