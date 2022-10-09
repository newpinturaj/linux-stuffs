#include "color.h"

//set constructor
color::set::set(std::initializer_list<int>_code){
  for(auto &item:_code)
    code.push_back(item);
}

//reset constructor
color::reset::reset(std::initializer_list<int>_code){
  for(auto &item:_code)
    code.push_back(item);
}

// output stream of set class
std::ostream &color::operator<<(std::ostream &os, const set &obj){
  os<<"\033[";
  for(auto &item:obj.code)
    os<<";"<<item;
  os<<"m ";
  return os;
}

// output stream of reset class
std::ostream &color::operator<<(std::ostream &os, const reset &obj){
  os<<" \033[";
  for(auto &item:obj.code)
    os<<";"<<item;
  os<<"m";
  return os;
}