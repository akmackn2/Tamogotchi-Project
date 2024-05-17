#include <iostream>
using namespace std;
#include "Electric.h"
#include "Tamagotchi.h"
// Include fstream as file will be used to save & load.
#include <fstream>
#include <string>

//Use default constructor to set petName to Pichu for now.

Electric::Electric(){
  petName = "Pichu";
}

void Electric::setName(string name){
  petName = name;
}

void Electric::saveTheData(){
  //Use ofstream to write protected members into saveTheData.txt.

  ofstream theOutput;

  theOutput.open("saveTheData.txt");

  theOutput << hungerness << endl;
  theOutput << sleepyness << endl;
  theOutput << boredness << endl;
  theOutput << happiness << endl;
  theOutput << petName << endl;

  theOutput.close();
}

void Electric::loadTheData(){
  //Use ifstream to read the saveTheData.txt file.

  ifstream theInput;

  theInput.open("saveTheData.txt");

  theInput >> hungerness >> sleepyness >> boredness >> happiness >> petName;
  
  cout << "Hungerness is currently " << hungerness << ", sleepyness is " << sleepyness << ", boredness is " << boredness << ", happiness is " << happiness << ", petName is " << petName << "." << endl;

  theInput.close();
}

void Electric::feedTheAnimal(){
  hungerness = hungerness - 10;
  sleepyness = sleepyness + 5;
  boredness = boredness - 5;
  happiness = happiness + 5;
  cout << endl;
  cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
  cout << endl;
  cout << "YUM YUM YUM!!! Thank you so much for feeding " << petName << "!" << endl;
  cout << endl;
  cout << "By feeding, you have decreased hungerness by 10 and boredness by 5 while increasing happiness and sleepyness by 5." << endl;
  cout << endl;
  cout << "Hungerness is now " << hungerness << ", sleepyness is now " << sleepyness << ", boredness is now " << boredness << ", and happiness is now " << happiness << "." << endl;
  cout << endl;
  cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
  cout << endl;
}

void Electric::treatTheAnimal(){
  hungerness = hungerness - 5;
  sleepyness = sleepyness + 5;
  boredness = boredness - 10;
  happiness = happiness + 10;
  cout << endl;
  cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
  cout << endl;
  cout << "Yummy treat from the pet store, give me more!! You're the best for treating " << petName << "!" << endl;
  cout << endl;
  cout << "By treating, you have decreased hungerness by 5 and boredness by 10 while increasing sleepyness by 5 and happiness by 10." << endl;
  cout << endl;
  cout << "Hungerness is now " << hungerness << ", sleepyness is now " << sleepyness << ", boredness is now " << boredness << ", and happiness is now " << happiness << "." << endl;
  cout << endl;
  cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
  cout << endl;
}

void Electric::playWithTheAnimal(){
  hungerness = hungerness + 15;
  sleepyness = sleepyness - 10;
  boredness = boredness - 10;
  happiness = happiness + 15;
  cout << endl;
  cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
  cout << endl;
  cout << "YAYYYY!!! Thank you for playing with " << petName << "!" << endl;
  cout << endl;
  cout << "By playing, you have increased hungerness hungerness and happiness by 15 while decreasing sleepyness by 10 and boredness by 10." << endl;
  cout << endl;
  cout << "Hungerness is now " << hungerness << ", sleepyness is now " << sleepyness << ", boredness is now " << boredness << ", and happiness is now " << happiness << "." << endl;
  cout << endl;
  cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
  cout << endl;
}

void Electric::restTheAnimal(){
  hungerness = hungerness + 10;
  sleepyness = sleepyness - 15;
  boredness = boredness - 15;
  happiness = happiness + 5;
  cout << endl;
  cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
  cout << endl;
  cout << "Great REST!!! Full of fresh energy for the day! Thank you for resting " << petName << "!" << endl;
  cout << endl;
  cout << "By resting, you have increased hungerness by 10 and happiness by 5 while decreasing sleepyness and boredness by 15." << endl;
  cout << endl;
  cout << "Hungerness is now " << hungerness << ", sleepyness is now " << sleepyness << ", boredness is now " << boredness << ", and happiness is now " << happiness << "." << endl;
  cout << endl;
  cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
  cout << endl;
}

void Electric::gymTheAnimal(){
  hungerness = hungerness + 10;
  sleepyness = sleepyness + 10;
  boredness = boredness - 10;
  happiness = happiness + 10;
  cout << endl;
  cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
  cout << endl;
  cout << "LOOKIN FITTER THAN USUAL!!! Thank you for working out << " << petName << "!" << endl;
  cout << endl;
  cout << "By gymming, you have increased hungerness, sleepyness, and happiness by 10 while decreasing boredness by 10." << endl;
  cout << endl;
  cout << "Hungerness is now " << hungerness << ", sleepyness is now " << sleepyness << ", boredness is now " << boredness << ", and happiness is now " << happiness << "." << endl;
  cout << endl;
  cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
  cout << endl;
}

void Electric::gameRangeLimitation(){
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


void Electric::nextHour(){
  if(hungerness >= 80 && hungerness <= 100){
    cout << endl;
    cout << "WARNING: Your " << petName << " is very hungry, so please go ahead and feed it immediately to decrease the hunger" << endl;
    cout << endl;
  }
  
  if(sleepyness >= 80 && sleepyness <= 100){
    cout << endl;
    cout << "WARNING: Your " << petName << " is feeling very sleepy. Give it some good rest to get more energized immediately and make resting be a priority for now" << endl;
    cout << endl;
  }
  
  if(boredness >= 75 && boredness <= 100){
    cout << endl;
    cout << "WARNING: Your " << petName << " is very bored right now. You know how it feels to be bored, so play, treat, or feed it." << endl;
    cout << endl;
  }

  if(happiness <= 15 && happiness >= 0){
    cout << endl;
    cout << "WARNING: Your " << petName << " is not very happy right now. Do something that will help make it happy like play, treat, feed, or gym it." << endl;
    cout << endl;
  }
}
