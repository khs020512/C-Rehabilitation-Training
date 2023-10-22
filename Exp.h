#ifndef EXP_H
#define EXP_H
#include <cmath>

class Exp {
private:
  int base;
  int index;

public:
  Exp() {
    base = 1;
    index = 1;
  }
  Exp(int x) {
    base = x;
    index = 1;
  }
  Exp(int x, int y) {
    base = x;
    index = y;
  }
  int getValue();
  int getBase();
  int getExp();
  bool equals(Exp b);
};
int Exp::getValue(){
  return pow(base,index);
}
int Exp::getBase(){
  return base;
}
int Exp::getExp(){
  return index;
}
bool Exp::equals(Exp b){
  if(getValue()==b.getValue()){
    return true;
  }
  else{
    return false;
  }
}
#endif
