#include <iostream>
#include "color.h"

using namespace std;

int main() {
  //SAMPLE CODE
  cout<<color::set({Format::bold, FG_Color::yellow})<<"Warning!!"<<color::reset({Reset_Format::all})<<endl;
  return 0;
}
