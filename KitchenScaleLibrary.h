#ifndef KITCHENSCALELIBRARY
#define KITCHENSCALELIBRARY

#include "Arduino.h"
#include "LiquidCrystal.h"

class KitchenScaleLibrary {
private:
  int r, g;
  const int R = 10;
public:
  KitchenScaleLibrary ();
  float toWeight(int value);
  void dispWeight(int weight);
  void dispStatus(LiquidCrystal lcd, int status);
};

#endif
