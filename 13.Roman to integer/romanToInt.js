var romanToInt = function(s) {
    const symbol = {
    I: 1,
    V: 5,
    X: 10,
    L: 50,
    C: 100,
    D: 500,
    M: 1000
  };
  let result = 0;
  for(let i = s.length-1;i>=0;i--){
    let curr = s[i];
    let next = s[i+1];
    if(symbol[curr]<symbol[next]){
      result -= symbol[curr] ;
    }
    else{
      result += symbol[curr] ;
    }
  }
  return result;
}