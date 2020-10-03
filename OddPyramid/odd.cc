long long rowSumOddNumbers(unsigned n){
  //your code here
  long long ctr= 1;   //ctr for odd numbers
  long long sumOfRow;
  if(n == 1){ return n;}

  for(int row = 2; row <= n; row++){
    sumOfRow = 0;
    for(int i =0; i < row; ++i){
      ctr+=2;
      sumOfRow+=ctr;
    }
  }
  return sumOfRow;
}
