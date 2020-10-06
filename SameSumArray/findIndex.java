public class Kata {
  public static int findEvenIndex(int[] arr) {
    int sumLeft = 0;
    int sumRight = 0;
    // your code
    for(int i = 0; i< arr.length; i++){
      sumLeft = findSum(0, i, arr);
      sumRight = findSum(i+1, arr.length, arr);

      if(sumLeft == sumRight){
        return i;
      }
    }
    return -1;
  }
  static int findSum(int from, int to, int[] arr){
    int sum = 0;
    if((from == 0) && (to == 0)){    //Case for Empty Array {}
      return 0;
    }
    for(int i = from; i < to; i++){
      sum += arr[i];
    }
    return sum;
  }
}
