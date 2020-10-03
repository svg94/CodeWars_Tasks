#include <cmath>
bool is_square(int n)
{
  // TODO
  if(n < 0){
    return false;
  }
  int sq = std::sqrt(n);
  return (sq*sq == n);
}
