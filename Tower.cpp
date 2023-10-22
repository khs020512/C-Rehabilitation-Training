#include <iostream>
#include "Exp.h"
using namespace std;
class Tower{
  int height;
public:
  Tower(){
    height = 1;
  }
  Tower(int x){
    height = x;
  }
  int getHeight();
};
int Tower::getHeight(){
  return height;
}
int main() {
  Tower myTower;
  Tower seoulTower(100);
  cout << "높이는 " << myTower.getHeight()<< "미터" << endl;
  cout << "높이는 " << seoulTower.getHeight() <<"미터" << endl;
}
