// Steven Tsan
// CPSC 121-03
// stsan@csu.fullerton.edu

#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
  if (argc >= 2)){
    for (int repeat = 0;repeat < argv[2];repeat++){
      cout << "Hi" << argv[1] << ".\n";
    }
  }
  else {
    cout << "Too few arguments.\n";
    return 1;
  }

  return 0;
}
