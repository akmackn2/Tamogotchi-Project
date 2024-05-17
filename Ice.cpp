#include <iostream>
using namespace std;
#include "Ice.h"
#include "Tamagotchi.h"
// Include fstream as file will be used to save & load.
#include <fstream>
#include <string>

//Use default constructor to set petName to Sandshrew for now.

Ice::Ice(){
  petName = "Sandshrew";
}


void Ice::setName(string name){
  petName = name;
}


void Ice::saveTheData(){
  ofstream theOutput;
  //Use ofstream to write protected members into saveTheData.txt.

  theOutput.open("saveTheData.txt");

  theOutput << hungerness << endl;
  theOutput << sleepyness << endl;
  theOutput << boredness << endl;
  theOutput << happiness << endl;
  theOutput << petName << endl;

  theOutput.close();
}

void Ice::loadTheData(){
  //Use ifstream to read the saveTheData.txt file.

  ifstream theInput;

  theInput.open("saveTheData.txt");

  theInput >> hungerness >> sleepyness >> boredness >> happiness >> petName;

  cout << "Hungerness is currently " << hungerness << ", sleepyness is " << sleepyness << ", boredness is " << boredness << ", happiness is " << happiness << ", petName is " << petName << "." << endl;

  theInput.close();
}

void Ice::feedTheAnimal(){
  hungerness = hungerness - 15;
  sleepyness = sleepyness + 10;
  boredness = boredness - 10;
  happiness = happiness + 10;
  cout << endl;
  cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
  cout << endl;
  cout << "You got me filled up with that Amazing meal! Thank you for feeding " << petName << "!" << endl;
  cout << endl;
  cout << "By feeding, you have decreased hungerness by 15 and boredness by 10 while increasing sleepyness and happiness by 10." << endl;
  cout << endl;
  cout << "Currently the hungerness is " << hungerness << ", sleepyness is " << sleepyness << ", boredness is " << boredness << ", and happiness is " << happiness << endl;
  cout << endl;
  cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
  cout << endl;
}

void Ice::treatTheAnimal(){
  hungerness = hungerness - 5;
  sleepyness = sleepyness + 10;
  boredness = boredness - 10;
  happiness = happiness + 10;
  cout << endl;
  cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
  cout << endl;
  cout << "What an amazing treat! Thank you for treating " << petName << "!" << endl;
  cout << endl;
  cout << "By treating, you have decreased hungerness by 5 and boredness by 10 while increasing sleepyness and happiness by 10." << endl;
  cout << endl;
  cout << "Currently the hungerness is " << hungerness << ", sleepyness is " << sleepyness << ", boredness is " << boredness << ", and happiness is " << happiness << endl;
  cout << endl;
  cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
  cout << endl;
}

void Ice::playWithTheAnimal(){
  hungerness = hungerness + 15;
  sleepyness = sleepyness - 10;
  boredness = boredness - 10;
  happiness = happiness + 15;
  cout << endl;
  cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
  cout << endl;
  cout << "What a fun playtime in the snow! Thank you for playing with " << petName << "!" << endl;
  cout << endl;
  cout << "By playing, you have increased hungerness and happiness by 15 while sleepyness and boredness by 10." << endl;
  cout << endl;
  cout << "Currently the hungerness is " << hungerness << ", sleepyness is " << sleepyness << ", boredness is " << boredness << ", and happiness is " << happiness << endl;
  cout << endl;
  cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
  cout << endl;
}

void Ice::restTheAnimal(){
  hungerness = hungerness + 10;
  sleepyness = sleepyness - 15;
  boredness = boredness - 15;
  happiness = happiness + 5;
  cout << endl;
  cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
  cout << endl;
  cout << "What a great rest to fill me up for some great activities! Thank you for resting " << petName << "!" << endl;
  cout << endl;
  cout << "By resting, you have increased hungerness by 10 and happiness by 5 while decreasing sleepyness and boredness by 15." << endl;
  cout << endl;
  cout << "Currently the hungerness is " << hungerness << ", sleepyness is " << sleepyness << ", boredness is " << boredness << ", and happiness is " << happiness << endl;
  cout << endl;
  cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
  cout << endl;
}

void Ice::gymTheAnimal(){
  hungerness = hungerness + 10;
  sleepyness = sleepyness + 10;
  boredness = boredness - 10;
  happiness = happiness + 10;
  cout << endl;
  cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
  cout << endl;
  cout << "Great workout after that freezy condition! Thank you for gymming " << petName << "." << endl;
  cout << endl;
  cout << "By gymming, you have increased hungerness, sleepyness, and happiness by 10 while decreasing boredness by 10." << endl;
  cout << endl;
  cout << "Currently the hungerness is " << hungerness << ", sleepyness is " << sleepyness << ", boredness is " << boredness << ", and happiness is " << happiness << endl;
  cout << endl;
  cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
  cout << endl;
}

void Ice::gameRangeLimitation(){
  if(hungerness < 0){
    hungerness = 0;
    cout << endl;
    cout << "Hungerness was less than 0 and is now " << hungerness << "." << endl;
    cout << endl;
  }

  else if(hungerness > 100){
    hungerness = 100;
    cout << endl;
    cout << "Hungerness was greater than 100 and is now " << hungerness << "." << endl;
    cout << endl;

  }

  if(sleepyness < 0){
    sleepyness = 0;
    cout << endl;
    cout << "Sleepyness was less than 0 and is now " << sleepyness << "." << endl;
    cout << endl;
  }

  else if(sleepyness > 100){
    sleepyness = 100;
    cout << endl;
    cout << "Sleepyness was greater than 100 and is now " << sleepyness << "." << endl;
    cout << endl;
  }

  if(boredness < 0){
    boredness = 0;
    cout << endl;
    cout << "Boredness was less than 0 and is now " << boredness << "." << endl;
    cout << endl;
  }

  else if(boredness > 100){
    boredness = 100;
    cout << endl;
    cout << "Boredness was greater than 100 and is now " << boredness << "." << endl;
    cout << endl;
  }

  if(happiness < 0){
    happiness = 0;
    cout << endl;
    cout << "Happiness was less than 0 and is now " << happiness << "." << endl;
    cout << endl;
  }

  else if(happiness > 100){
    happiness = 100;
    cout << endl;
    cout << "Happiness was greater than 100 and is now " << happiness << "." << endl;
    cout << endl;
  }
}

void Ice::nextHour(){
  if(hungerness >= 80 && hungerness <= 100){
    cout << endl;
    cout << "WARNING ALERT: Hungerness is too high, please feed " << petName << " to decrease hungerness." << endl;
    cout << endl;
  }
  if(sleepyness >= 70 && sleepyness <= 100){
    cout << endl;
    cout << "WARNING ALERT: Sleepyness is too high, so please rest " << petName << " to decrease sleepyness level and make it ready for other activities without being tired." << endl;
    cout << endl;
  }
  if(boredness >= 75 && boredness <= 100){
    cout << endl;
    cout << "WARNING ALERT: Boredness is too high, so please do something to decrease the boredness level for " << petName << "." << endl;
    cout << endl;
  }
  if(happiness <= 10 && happiness >= 0){
    cout << endl;
    cout << "WARNING ALERT: Happiness is too low, please do something to " << petName << " that can increase happiness." << endl;
    cout << endl;
  }
}
