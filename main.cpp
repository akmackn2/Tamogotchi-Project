#include <iostream>
#include <fstream>
#include <string>
#include "Tamagotchi.h"
#include "Electric.h"
#include "Ground.h"
#include "Ice.h"
using namespace std;

int main() {
  
  //Print the welcoming message for the player at the start of the game.
  cout << "Hello, Welcome to the Tamagotchi Pokemon Game!" << endl;
  cout << "A game where you can modify your Pokemon unlimited times!" << endl;
  cout << "We hope you enjoy this game and feel well satifisfied playing!" << endl;
  cout << endl;
  //Ask the user if they would like to start a game or resume a previously saved game.

  cout << "Would you like to load a game previously saved game progress or start a new game?" << endl;
  cout << endl;
  cout << "Please type in 1 if you would like to load a previously saved game progress or type in 2 if you would like to start a new game!" << endl;
  cout << endl;
  int selectOption;
  cin >> selectOption;

  while(selectOption !=1 && selectOption !=2){
    cout << "Incorrect option, please enter either 1 or 2." << endl;
    cout << endl;
    cin >> selectOption;
  }

  if(selectOption == 1){
    cout << "Which Pokemon was saved as part of the saved file that you would like to load?" << endl;
    cout << endl;
    cout << "Please type in 1 to select Electric(Pichu) if that was saved" << endl;
    cout << endl;
    cout << "Please type in 2 to select Ground(Sandshrew) if that was saved" << endl;
    cout << endl;
    cout << "Please type in 3 to select Ice(Sandshrew) if that was saved" << endl;

    int selectPokemon;
    cin >> selectPokemon;

    while(selectPokemon != 1 && selectPokemon !=2 && selectPokemon !=3){
      cout << "Incorrect option, please enter either 1, 2, or 3." << endl;
      cout << endl;
      cin >> selectPokemon;
    }

    bool theTruth = true;

    if(selectPokemon == 1){
      Electric classObj1;
      classObj1.loadTheData();

      int selectModifications;

      while(theTruth){
        cout << endl;
        cout << "=========================================================================================================================================" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        
        string thePicture;
        ifstream theSaved;
        theSaved.open("Electric.txt");
        while(getline(theSaved, thePicture)){
          cout << thePicture << endl;
        }
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        
        cout << "You can modify your Pokemon the following ways:" << endl;
        cout << endl;
        cout << "Feed, Treat, Play, Rest, Gym" << endl;
        cout << endl;
        cout << "Please type in 1 to save your game progress, type in 2 to feed, type in 3 to treat, type in 4 to play, type in 5 to rest, or type in 6 to gym." << endl;
        cout << endl;
        cin >> selectModifications;

        while(selectModifications !=1 && selectModifications !=2 && selectModifications !=3 && selectModifications != 4 && selectModifications !=5 && selectModifications !=6){
          cout << "Incorrect option, please type in 1 to save your game progress, type in 2 to feed, type in 3 to treat, type in 4 to play, type in 5 to rest, or type in 6 to gym." << endl;
          cin >> selectModifications;
        }


        if(selectModifications == 1){
          classObj1.saveTheData();
          cout << "Game progress has been succesfully saved and you have been exitted from the game!" << endl;
          cout << endl;
          cout << endl;
          string thePicture;
          ifstream theSaved;
          theSaved.open("saved.txt");

          while(getline(theSaved, thePicture)){
            cout << thePicture << endl;
          }
          return 0;
        }
        else if(selectModifications == 2){
          classObj1.feedTheAnimal();
          classObj1.gameRangeLimitation();
          classObj1.nextHour();
        }
        else if(selectModifications == 3){
          classObj1.treatTheAnimal();
          classObj1.gameRangeLimitation();
          classObj1.nextHour();
        }
        else if(selectModifications == 4){
          classObj1.playWithTheAnimal();
          classObj1.gameRangeLimitation();
          classObj1.nextHour();
        }
        else if(selectModifications == 5){
          classObj1.restTheAnimal();
          classObj1.gameRangeLimitation();
          classObj1.nextHour();
        }
        else if(selectModifications == 6){
          classObj1.gymTheAnimal();
          classObj1.gameRangeLimitation();
          classObj1.nextHour();
        }
      }
    }

    else if(selectPokemon == 2){
      Ground classObj2;
      classObj2.loadTheData();

      int selectModifications;

      while(theTruth){
        cout << endl;
        cout << "=========================================================================================================================================" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
  
        string thePicture;
        ifstream theSaved;
        theSaved.open("Ground.txt");
        while(getline(theSaved,thePicture)){
          cout << thePicture << endl;
        }
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;

        cout << "You can modify your Pokemon the following ways:" << endl;
        cout << endl;
        cout << "Feed, Treat, Play, Rest, Gym" << endl;
        cout << endl;
        cout << "Please type in 1 to save your game progress, type in 2 to feed, type in 3 to treat, type in 4 to play, type in 5 to rest, or type in 6 to gym." << endl;
        cout << endl;
        cin >> selectModifications;

        while(selectModifications != 1 && selectModifications !=2 && selectModifications !=3 && selectModifications !=4 && selectModifications !=5 && selectModifications !=6){
          cout << "Incorrect option, please type in 1 to save your game progress, type in 2 to feed, type in 3 to treat, type in 4 to play, type in 5 to rest, or type in 6 to gym." << endl;
          cin >> selectModifications;
        }


        if(selectModifications == 1){
          classObj2.saveTheData();
          cout << "Game progress has been succesfully saved and you have been exitted from the game!" << endl;
          cout << endl;
          cout << endl;
          string thePicture;
          ifstream theSaved;
          theSaved.open("saved.txt");

          while(getline(theSaved, thePicture)){
            cout << thePicture << endl;
          }
          return 0;
        }
        else if(selectModifications == 2){
          classObj2.feedTheAnimal();
          classObj2.gameRangeLimitation();
          classObj2.nextHour();
        }
        else if(selectModifications == 3){
          classObj2.treatTheAnimal();
          classObj2.gameRangeLimitation();
          classObj2.nextHour();
        }
        else if(selectModifications == 4){
          classObj2.playWithTheAnimal();
          classObj2.gameRangeLimitation();
          classObj2.nextHour();
        }
        else if(selectModifications == 5){
          classObj2.restTheAnimal();
          classObj2.gameRangeLimitation();
          classObj2.nextHour();
        }
        else if(selectModifications == 6){
          classObj2.gymTheAnimal();
          classObj2.gameRangeLimitation();
          classObj2.nextHour();
        }
      }
    }

    else if(selectPokemon == 3){
      Ice classObj3;
      classObj3.loadTheData();

      int selectModifications;

      while(theTruth){
        cout << endl;
        cout << "=========================================================================================================================================" << endl;
        cout << endl;
        cout << endl;
        cout << endl;

        string thePicture;
        ifstream theSaved;
        theSaved.open("Ice.txt");
        while(getline(theSaved,thePicture)){
          cout << thePicture << endl;
        }
        
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        
        cout << "You can modify your Pokemon the following ways:" << endl;
        cout << endl;
        cout << "Feed, Treat, Play, Rest, Gym" << endl;
        cout << endl;
        cout << "Please type in 1 to save your progress, type in 2 to feed, type in 3 to treat, type in 4 to play, type in 5 to rest, or type in 6 to gym." << endl;
        cin >> selectModifications;

        while(selectModifications !=1 && selectModifications !=2 && selectModifications !=3 && selectModifications !=4 && selectModifications !=5 && selectModifications !=6){
          cout << "Incorrect option, please type in 1 to save your game progress, type in 2 to to feed, type in 3 to treat, type in 4 to play, type in 5 to rest, or type in 6 to gym." << endl;
          cin >> selectModifications;
        }


        if(selectModifications == 1){
          classObj3.saveTheData();
          cout << "Game progress has been succesfully saved and you have been exitted from the game!" << endl;
          cout << endl;
          cout << endl;
          string thePicture;
          ifstream theSaved;
          theSaved.open("saved.txt");

          while(getline(theSaved, thePicture)){
            cout << thePicture << endl;
          }
          return 0;
        }
        else if(selectModifications == 2){
          classObj3.feedTheAnimal();
          classObj3.gameRangeLimitation();
          classObj3.nextHour();
        }
        else if(selectModifications == 3){
          classObj3.treatTheAnimal();
          classObj3.gameRangeLimitation();
          classObj3.nextHour();
        }
        else if(selectModifications == 4){
          classObj3.playWithTheAnimal();
          classObj3.gameRangeLimitation();
          classObj3.nextHour();
        }
        else if(selectModifications == 5){
          classObj3.restTheAnimal();
          classObj3.gameRangeLimitation();
          classObj3.nextHour();
        }
        else if(selectModifications == 6){
          classObj3.gymTheAnimal();
          classObj3.gameRangeLimitation();
          classObj3.nextHour();
        }
      }
    }
  }

  else{
    cout << "Here are pictures of the different Pokemon's you can select!" << endl;
    cout << endl;
    cout << "Electric(Pichu):" << endl;
    cout << endl;

    //Print out the picture of Electric(Pichu)
    string thePicture;
    ifstream electric;
    electric.open("Electric.txt");

    while(getline(electric, thePicture)){
      cout << thePicture << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    
    cout << "Ground(Sandshrew):" << endl;
    cout << endl;

    string thePicture1;
    ifstream electric1;
    electric1.open("Ground.txt");

    while(getline(electric1, thePicture1)){
      cout << thePicture1 << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    
    cout << "Ice(Sandshrew):" << endl;
    cout << endl;

    string thePicture2;
    ifstream ground;
    ground.open("Ice.txt");

    while(getline(ground, thePicture2)){
      cout << thePicture2 << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "Please type in 1 if you would like to select Electric(Pichu), type in 2 if you would like to select Ground(Sandshrew), and type in 3 if you would like to select Ice(Sandshrew)." << endl;

    cout << endl;
    
    int selectPokemon;
    cin >> selectPokemon;

    while(selectPokemon != 1 && selectPokemon != 2 && selectPokemon != 3){
      cout << "Incorrect option, please enter either 1, 2, or 3." << endl;
      cin >> selectPokemon;
    }

    bool theTruth = true;

    if(selectPokemon == 1){
      Electric classObj1;
      
      cout << "Please enter what you would like to name this Electric(Pichu) Pokémon" << endl;
      string name;
      cin >> name;
      classObj1.setName(name);

      int selectModifications;
      
      while(theTruth){
        cout << endl;
        cout << "=========================================================================================================================================" << endl;
        
        cout << endl;
        cout << endl;
        cout << endl;

        string thePicture;
        ifstream theSaved;
        theSaved.open("Electric.txt");
        while(getline(theSaved,thePicture)){
          cout << thePicture << endl;
        }

        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        
        cout << "You can modify " << name << " the following ways:" << endl;
        cout << endl;
        cout << "Feed, Treat, Play, Rest, Gym" << endl;
        cout << endl;
        cout << "Please type in 1 to save your game progress, type in 2 to feed, type in 3 to treat, type in 4 to play, type in 5 to rest, or type in 6 to gym." << endl;
        cout << endl;
        cin >> selectModifications;

        while(selectModifications !=1 && selectModifications !=2 && selectModifications !=3 && selectModifications != 4 && selectModifications !=5 && selectModifications !=6){
          cout << "Incorrect option, please type in 1 to save your game progress, type in 2 to feed, type in 3 to treat, type in 4 to play, type in 5 to rest, or type in 6 to gym." << endl;
          cin >> selectModifications;
        }
      

        if(selectModifications == 1){
          classObj1.saveTheData();
          cout << "Game progress has been succesfully saved and you have been exitted from the game!" << endl;
          cout << endl;
          cout << endl;
          string thePicture;
          ifstream theSaved;
          theSaved.open("saved.txt");

          while(getline(theSaved, thePicture)){
            cout << thePicture << endl;
          }
          return 0;
        }
        else if(selectModifications == 2){
          classObj1.feedTheAnimal();
          classObj1.gameRangeLimitation();
          classObj1.nextHour();
        }
        else if(selectModifications == 3){
          classObj1.treatTheAnimal();
          classObj1.gameRangeLimitation();
          classObj1.nextHour();
        }
        else if(selectModifications == 4){
          classObj1.playWithTheAnimal();
          classObj1.gameRangeLimitation();
          classObj1.nextHour();
        }
        else if(selectModifications == 5){
          classObj1.restTheAnimal();
          classObj1.gameRangeLimitation();
          classObj1.nextHour();
        }
        else if(selectModifications == 6){
          classObj1.gymTheAnimal();
          classObj1.gameRangeLimitation();
          classObj1.nextHour();
        }
      }
    }

    else if(selectPokemon == 2){
      Ground classObj2;

      cout << "Please enter what you would like to name this Ground(Sandshrew) Pokemon" << endl;
      string name;
      cin >> name;
      classObj2.setName(name);

      int selectModifications;

      while(theTruth){
        cout << endl;
        cout << "=========================================================================================================================================" << endl;

        cout << endl;
        cout << endl;
        cout << endl;

        string thePicture;
        ifstream theSaved;
        theSaved.open("Ground.txt");
        while(getline(theSaved,thePicture)){
          cout << thePicture << endl;
        }

        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        
        cout << "You can modify " << name << " the following ways:" << endl;
        cout << endl;
        cout << "Feed, Treat, Play, Rest, Gym" << endl;
        cout << endl;
        cout << "Please type in 1 to save your game progress, type in 2 to feed, type in 3 to treat, type in 4 to play, type in 5 to rest, or type in 6 to gym." << endl;
        cout << endl;
        cin >> selectModifications;

        while(selectModifications != 1 && selectModifications !=2 && selectModifications !=3 && selectModifications !=4 && selectModifications !=5 && selectModifications !=6){
          cout << "Incorrect option, please type in 1 to save your game progress, type in 2 to feed, type in 3 to treat, type in 4 to play, type in 5 to rest, or type in 6 to gym." << endl;
          cin >> selectModifications;
        }
      

        if(selectModifications == 1){
          classObj2.saveTheData();
          cout << "Game progress has been succesfully saved and you have been exitted from the game!" << endl;
          cout << endl;
          cout << endl;
          string thePicture;
          ifstream theSaved;
          theSaved.open("saved.txt");

          while(getline(theSaved, thePicture)){
            cout << thePicture << endl;
          }
          return 0;
        }
        else if(selectModifications == 2){
          classObj2.feedTheAnimal();
          classObj2.gameRangeLimitation();
          classObj2.nextHour();
        }
        else if(selectModifications == 3){
          classObj2.treatTheAnimal();
          classObj2.gameRangeLimitation();
          classObj2.nextHour();
        }
        else if(selectModifications == 4){
          classObj2.playWithTheAnimal();
          classObj2.gameRangeLimitation();
          classObj2.nextHour();
        }
        else if(selectModifications == 5){
          classObj2.restTheAnimal();
          classObj2.gameRangeLimitation();
          classObj2.nextHour();
        }
        else if(selectModifications == 6){
          classObj2.gymTheAnimal();
          classObj2.gameRangeLimitation();
          classObj2.nextHour();
        }
      }
    }

    else if(selectPokemon == 3){
      Ice classObj3;

      cout << "Please enter what you would like to name Ice(Sandshrew) Pokemon" << endl;
      string name;
      cin >> name;
      classObj3.setName(name);

      int selectModifications;

      while(theTruth){
        cout << endl;
        cout << "=========================================================================================================================================" << endl;

        cout << endl;
        cout << endl;
        cout << endl;

        string thePicture;
        ifstream theSaved;
        theSaved.open("Ice.txt");
        while(getline(theSaved,thePicture)){
          cout << thePicture << endl;
        }

        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        
        cout << "You can modify " << name << " the following ways:" << endl;
        cout << endl;
        cout << "Feed, Treat, Play, Rest, Gym" << endl;
        cout << endl;
        cout << "Please type in 1 to save your progress, type in 2 to feed, type in 3 to treat, type in 4 to play, type in 5 to rest, or type in 6 to gym." << endl;
        cout << "=========================================================================================================================================" << endl;
        cout << endl;
        cin >> selectModifications;

        while(selectModifications !=1 && selectModifications !=2 && selectModifications !=3 && selectModifications !=4 && selectModifications !=5 && selectModifications !=6){
          cout << "Incorrect option, please type in 1 to save your game progress, type in 2 to to feed, type in 3 to treat, type in 4 to play, type in 5 to rest, or type in 6 to gym." << endl;
          cin >> selectModifications;
        }
      

        if(selectModifications == 1){
          classObj3.saveTheData();
          cout << "Game progress has been succesfully saved and you have been exitted from the game!" << endl;
          cout << endl;
          cout << endl;
          string thePicture;
          ifstream theSaved;
          theSaved.open("saved.txt");

          while(getline(theSaved, thePicture)){
            cout << thePicture << endl;
          }
          return 0;
        }
        else if(selectModifications == 2){
          classObj3.feedTheAnimal();
          classObj3.gameRangeLimitation();
          classObj3.nextHour();
        }
        else if(selectModifications == 3){
          classObj3.treatTheAnimal();
          classObj3.gameRangeLimitation();
          classObj3.nextHour();
        }
        else if(selectModifications == 4){
          classObj3.playWithTheAnimal();
          classObj3.gameRangeLimitation();
          classObj3.nextHour();
        }
        else if(selectModifications == 5){
          classObj3.restTheAnimal();
          classObj3.gameRangeLimitation();
          classObj3.nextHour();
        }
        else if(selectModifications == 6){
          classObj3.gymTheAnimal();
          classObj3.gameRangeLimitation();
          classObj3.nextHour();
        }
      }
    }
  }
}
