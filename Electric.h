#ifndef ELECTRIC_H
#define ELECTRIC_H

#include <iostream>
#include <string>
#include "Tamagotchi.h"
using namespace std;

class Electric : public Tamagotchi{

  public:
  Electric();
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
