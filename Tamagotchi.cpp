#include <iostream>
#include "Tamagotchi.h"
// Include fstream as file will be used to save & load.
#include <fstream>
#include <string>
using namespace std;

// Use default constructor to set petName to nothing for now.
Tamagotchi::Tamagotchi(){
  petName = "";
}

void Tamagotchi::setName(string name){
  petName = name;
}


void Tamagotchi::saveTheData(){
  //Use ofstream to write protected members into saveTheData.txt.
  ofstream theOutput;

  theOutput.open("saveTheData.txt");

  theOutput << hungerness << endl;
  theOutput << sleepyness << endl;
  theOutput << boredness << endl;
  theOutput << happiness << endl;
  theOutput << petName << endl;
}

void Tamagotchi::loadTheData(){
  //Use ifstream to read the saveTheData.txt file.
  ifstream theInput;

  theInput.open("saveTheData.txt");

  theInput >> hungerness >> sleepyness >> boredness >> happiness >> petName;

  cout << "Hungerness is currently " << hungerness << ", sleepyness is " << sleepyness << ", boredness is " << boredness << ", happiness is " << happiness << ", petName is " << petName << "." << endl;
}

// Customizations will be made in the derived class for mod functions.

void Tamagotchi::feedTheAnimal(){
  
}

void Tamagotchi::treatTheAnimal(){
  
}

void Tamagotchi::playWithTheAnimal(){
  
}

void Tamagotchi::restTheAnimal(){
  
}

void Tamagotchi::gymTheAnimal(){
  
}

void Tamagotchi::gameRangeLimitation(){
  if(hungerness < 0){
    hungerness = 0;
    cout << "Hungerness was less than 0 and is now " << hungerness << "." << endl;
  }
    
  else if(hungerness > 100){
    hungerness = 100;
    cout << "Hungerness was greater than 100 and is now " << hungerness << "." << endl;
    
  }
  
  if(sleepyness < 0){
    sleepyness = 0;
    cout << "Sleepyness was less than 0 and is now " << sleepyness << "." << endl;
  }

  else if(sleepyness > 100){
    sleepyness = 100;
    cout << "Sleepyness was greater than 100 and is now " << sleepyness << "." << endl;
  }

  if(boredness < 0){
    boredness = 0;
    cout << "Boredness was less than 0 and is now " << boredness << "." << endl;
  }

  else if(boredness > 100){
    boredness = 100;
    cout << "Boredness was greater than 100 and is now " << boredness << "." << endl;
  }

  if(happiness < 0){
    happiness = 0;
    cout << "Happiness was less than 0 and is now " << happiness << "." << endl;
  }

  else if(happiness > 100){
    happiness = 100;
    cout << "Happiness was greater than 100 and is now " << happiness << "." << endl;
  }
}

//Keep nextHour empty for base class as derived has special conditions.
void Tamagotchi::nextHour(){

}
