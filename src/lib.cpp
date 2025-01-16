#include "lib.h"

int myfun(bool b, int (*callback)(int)) {
  int num = -1;

  if (b) {
    num = callback(callback(num));
  }
  else {
    num = 15 + num;
  }

  if (callback != nullptr) {
    return (*callback)(3); // intentional nullptr dereference
  }
  else {
    return num;
  }

}

int sumar(int a, int b) {
  return a + b;
}