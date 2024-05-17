#include <iostream>
using namespace std;
#include "Ground.h"
#include "Tamagotchi.h"
// Include fstream as file will be used to save & load.
#include <fstream>
#include <string>

//Use default constructor to set petName to Sandshrew for now.

Ground::Ground(){
  petName = "Sandshrew";
}

void Ground::setName(string name){
  petName = name;
}

void Ground::saveTheData(){
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

void Ground::loadTheData(){
  //Use ifstream to read the saveTheData.txt file.

  ifstream theInput;

  theInput.open("saveTheData.txt");

  theInput >> hungerness >> sleepyness >> boredness >> happiness >> petName;

  cout << "Hungerness is currently " << hungerness << ", sleepyness is " << sleepyness << ", boredness is " << boredness << ", happiness is " << happiness << ", petName is " << petName << "." << endl;

  theInput.close();
}

void Ground::feedTheAnimal(){
  hungerness = hungerness - 10;
  sleepyness = sleepyness - 10;
  boredness = boredness - 5;
  happiness = happiness + 10;
  cout << endl;
  cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
  cout << endl;
  cout << "Yummy, play me now! Thank you for feeding " << petName << "!" << endl;
  cout << endl;
  cout << "By feeding, you have decreased hungerness and sleepyness by 10 and boredness by 5 while increasing happiness by 10." << endl;
  cout << endl;
  cout << "The current stats of " << petName << ": Hungerness is " << hungerness << ", sleepyness is " << sleepyness << ", boredness is " << boredness << ", and happiness is " << happiness << "." << endl;
  cout << endl;
  cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
  cout << endl;
}

void Ground::treatTheAnimal(){
  hungerness = hungerness - 5;
  sleepyness = sleepyness + 10;
  boredness = boredness - 10;
  happiness = happiness + 10;
  cout << endl;
  cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
  cout << endl;
  cout << "Yummy! Thank you for the treat! Thank you for feeding " << petName << "!" << endl;
  cout << endl;
  cout << "By treating, you have decreased hungerness by 5 and boredness by 10 while increasing sleepyness and happiness by 10." << endl;
  cout << endl;
  cout << "The current stats of " << petName << ": Hungerness is " << hungerness << ", sleepyness is " << sleepyness << ", boredness is " << boredness << ", and happiness is " << happiness << "." << endl;
  cout << endl;
  cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
  cout << endl;
}

void Ground::playWithTheAnimal(){
  hungerness = hungerness + 15;
  sleepyness = sleepyness - 10;
  boredness = boredness - 10;
  happiness = happiness + 15;
  cout << endl;
  cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
  cout << endl;
  cout << "Hella fun!!! Thank you for playing with " << petName << "!" << endl;
  cout << endl;
  cout << "By playing, you have increased hungerness and happiness by 15 while decreasing sleepyness and boredness by 10." << endl;
  cout << endl;
  cout << "The current stats of " << petName << ": Hungerness is " << hungerness << ", sleepyness is " << sleepyness << ", boredness is " << boredness << ", and happiness is " << happiness << "." << endl;
  cout << endl;
  cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
  cout << endl;
}

void Ground::restTheAnimal(){
  hungerness = hungerness + 10;
  sleepyness = sleepyness - 15;
  boredness = boredness - 15;
  happiness = happiness + 5;
  cout << endl;
  cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
  cout << endl;
  cout << "Aww, what a rest! Thank you for resting " << petName << "!" << endl;
  cout << endl;
  cout << "By resting, you have increased hungerness by 10 and happiness by 5 while decreasing sleepyness and boredness by 15." << endl;
  cout << endl;
  cout << "The current stats of " << petName << ": Hungerness is " << hungerness << ", sleepyness is " << sleepyness << ", boredness is " << boredness << ", and happiness is " << happiness << "." << endl;
  cout << endl;
  cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
  cout << endl;
}

void Ground::gymTheAnimal(){
  hungerness = hungerness + 10;
  sleepyness = sleepyness + 10;
  boredness = boredness - 10;
  happiness = happiness + 10;
  cout << endl;
  cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
  cout << endl;
  cout << "This strenuous workout has gotten me really tired and hungry yet happy! Thank you for working out " << petName << "!" << endl;
  cout << endl;
  cout << "By gymming, you have increase hungerness, sleepyness, and happiness by 10 while decreasing boredness by 10." << endl;
  cout << endl;
  cout << "The current stats of " << petName << ": Hungerness is " << hungerness << ", sleepyness is " << sleepyness << ", boredness is " << boredness << ", and happiness is " << happiness << "." << endl;
  cout << endl;
  cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
  cout << endl;
}

void Ground::gameRangeLimitation(){
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
    cout << endl;
    happiness = 100;
    cout << endl;
    cout << "Happiness was greater than 100 and is now " << happiness << "." << endl;
    cout << endl;
  }
}

void Ground::nextHour(){
  if(hungerness >= 80 && hungerness <= 100){
    cout << endl;
    cout << "WARNING: " << petName << " is really hungry and needs more than just a treat right now to recover from the hunger deficiency caused by a lack of food and so much energy invested elsewhere, so please go ahead and feed " << petName << " immediately." << endl;
    cout << endl;
  }

  if(sleepyness >= 80 && sleepyness <= 100){
    cout << endl;
    cout << "WARNING: " << petName << " is really tired and needs a good amount of rest to gain energy for other things, so please go ahead and rest " << petName << " immediately." << endl;
    cout << endl;
  }

  if(boredness >= 75 && boredness <= 100){
    cout << endl;
    cout << "ALERT: " << petName << " is feeling really bored, so please do something to decrease the boredness and increase happiness." << endl;
    cout << endl;
  }

  if(happiness <= 20 && happiness >= 0){
    cout << endl;
    cout << "WARNING: " << petName << " is not feeling very happy, so please do something to increase happiness." << endl;
    cout << endl;
  }
}
