#include <string>
std::string decodeMorse(std::string morseCode) {
    // ToDo: Accept dots, dashes and spaces, return human-readable message
    morseCode.erase(0, morseCode.find_first_not_of(" "));  //Trim Trash at beginning
    morseCode.erase(morseCode.find_last_not_of(" ") + 1);  //Trim Trash at the end
    std::string decoded;
    std::string code;  //to add multiple characters
    int ctr = 0;
    for( auto p : morseCode ) {
      if(ctr == 3)
      {
        decoded += " ";
        ctr=0;
      }
      if(p == ' '){
        if(!(code.compare("") == 0)){  //Wenn String nicht leer.
          decoded += MORSE_CODE[code];
          code = "";
        }
        ctr+=1;
      }
      else if( p == '.' || p== '-')
      {
        code += p;
        ctr=0;
      }

    }
    if(!(code.compare("") == 0)){
      decoded += MORSE_CODE[code];
    }
    return decoded;
}
