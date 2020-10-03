bool isComplement(char x, char y);
bool valid_braces(std::string braces)
{
  // valid or not valid?
  std::stack<char> stack;
  for(auto x : braces){
    if((x == '(') || (x == '[') || (x == '{'))
    {
      stack.push(x);
    }
    if((x == ')') || (x == ']') || (x == '}'))
    {
      if(stack.empty() == true){
        return false;
      }
      bool complement = isComplement(stack.top(), x);
      if(complement == true){
        stack.pop();
      }else{
        return false;
      }
    }
  }
  if(stack.empty() == true){
        return true;
      }
  return false;
}
bool isComplement(char x, char y){
  if((x == '(') && (y==')')){
    return true;
  }else if((x == '[') && (y==']')){
    return true;
  }else if((x == '{') && (y=='}')){
    return true;
  }
  return false;
}
