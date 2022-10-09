#include <iostream>
#include "color.h"

using namespace std;

int main() {
  //SAMPLE CODE
  cout<<color::set({Format::bold, FG_Color::red})<<"Warning!!"<<endl;
  return 0;
}
