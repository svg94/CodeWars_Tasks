#include <string>
#include <map>

std::string DNAStrand(const std::string& dna)
{
  //your code here
  std::map<char, char> dict = {{'T','A'},{'A','T'},{'G','C'},{'C','G'}};
  std::string comp;
  for(auto c :dna){
    comp+=dict[c];
  }
  return comp;
}
