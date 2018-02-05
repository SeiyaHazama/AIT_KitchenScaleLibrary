#ifndef KITCHENSCALELIBRARY
#define KITCHENSCALELIBRARY

#include "Arduino.h"

class KitchenScaleLibrary {
private:
  float weight;

public:
  KitchenScaleLibrary ();
  float toWeight(int value);
  void dispWeight(int weight);
};

#endif
