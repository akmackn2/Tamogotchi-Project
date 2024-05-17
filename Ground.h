#ifndef GROUND_H
#define GROUND_H

#include <iostream>
#include <string>
#include "Tamagotchi.h"
using namespace std;

class Ground : public Tamagotchi{
  
  public:
  Ground();
  void setName(string name);
  void saveTheData();
  void loadTheData();
  void feedTheAnimal();
  void treatTheAnimal();
  void playWithTheAnimal();
  void restTheAnimal();
  void gymTheAnimal();
  void gameRangeLimitation();
  void nextHour();
};

#endif
