#ifndef ICE_H
#define ICE_H

#include <iostream>
#include <string>
#include "Tamagotchi.h"
using namespace std;

class Ice : public Tamagotchi{

  public:
  Ice();
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
