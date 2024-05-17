#ifndef TAMAGOTCHI_H
#define TAMAGOTCHI_H

#include <iostream>
#include <string>
using namespace std;

class Tamagotchi{
  public:

  Tamagotchi();
  virtual void setName(string name);
  virtual void saveTheData();
  virtual void loadTheData();
  virtual void feedTheAnimal() = 0;
  virtual void treatTheAnimal() = 0;
  virtual void playWithTheAnimal() = 0;
  virtual void restTheAnimal() = 0;
  virtual void gymTheAnimal() = 0;
  virtual void gameRangeLimitation();
  virtual void nextHour();

  protected:

  int hungerness = 45;
  int sleepyness = 45;
  int boredness = 45;
  int happiness = 45;
  string petName = "";
};

#endif
