function abbrevName(name) {
  const regpattern = /^\w+\s{1}\w+$/;
  if (name.match(regpattern)) {
    let nameArr = name.split(' ');
    const fname = nameArr[0];
    const fname_init = fname.charAt(0).toUpperCase();
    const lname = nameArr[1];
    const lname_init = lname.charAt(0).toUpperCase();
    const abbrev = `${fname_init}.${lname_init}`;
    return abbrev;
  }
  return false;
}

console.log(abbrevName('Kyle Huber'));
