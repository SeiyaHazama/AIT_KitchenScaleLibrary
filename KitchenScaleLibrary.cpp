#include "KitchenScaleLibrary.h"

/**
 * Constructor.
 * @method KitchenScaleLibrary
 */
KitchenScaleLibrary::KitchenScaleLibrary(){

}

/**
 * Convert analog value to weight.
 * @method toWeight
 * @param  value    [analog  value]
 * @return          [weight]
 */
float KitchenScaleLibrary::toWeight (int value){
  r = R * value / (1024.0 - value);
  g = 499.97 * pow(r, -0.77);
  return g;
}

/**
 * Display weight from parameter
 * @method dispWeight
 * @param  weight     [parameter]
 */
void KitchenScaleLibrary::dispWeight (int weight){
  //lcd.setCursor(0, 1);
  //lcd.print("Weight: %d g", weight);
}

/**
 * Display Status from parameter
 * @method dispStatus
 * @param  status     [parameter]
 */
void KitchenScaleLibrary::dispStatus (LiquidCrystal lcd, int status) {
  lcd.setCursor(0, 0);
  switch (status) {
    case 0: lcd.print("Status: Loading"); break;
    case 1: lcd.print("Status: Complete"); break;
    case 0: lcd.print("Status: Ready"); break;
  }
}
