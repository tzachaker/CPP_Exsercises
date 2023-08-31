/**
 * Demo file for the exercise on binary tree
 *
 * @author Evgeny Hershkovitch Neiterman
 * @since 2023-03
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
using namespace ariel;

int main() {
  //// Create two players with their names 
  //  Player p1("Alice");
  //  Player p2("Bob");

  //  Game game(p1,p2); 
  //  for (int i=0;i<5;i++) {
  //   game.playTurn();
  //  }
  //  game.printLastTurn(); // print the last turn stats. For example:
  //                                                   // Alice played Queen of Hearts Bob played 5 of Spades. Alice wins.
  //                                                   // Alice played 6 of Hearts Bob played 6 of Spades. Draw. Alice played 10 of Clubs Bob played 10 of Diamonds. draw. Alice played Jack of Clubs Bob played King of Diamonds. Bob wins.
  //  cout << p1.stacksize() << endl; //prints the amount of cards left. should be 21 but can be less if a draw was played
  //  cout << p2.cardesTaken() << endl; // prints the amount of cards this player has won. 
  //  game.playAll(); //playes the game untill the end
  //  game.printWiner(); // prints the name of the winning player
  // //  game.printLog(); // prints all the turns played one line per turn (same format as game.printLastTurn())
  //  game.printStats();// for each player prints basic statistics: win rate, cards won, <other stats you want to print>. Also print the draw rate and amount of draws that happand. (draw within a draw counts as 2 draws. )


//My additions :
printf("\nMy additions: \n");
// Create two players with their names 
  Player p1("Tzach");
  Player p2("Nadav");

  Game game1(p1,p2); 
  cout << "After one turn: " << endl;
  game1.playTurn();
  game1.printLastTurn();
  cout <<"The size of Tzach's stacksize is : " << p1.stacksize() << endl; //prints the amount of cards left. should be 21 but can be less if a draw was played
  cout <<"The quantity of Tzach's cardesTaken is : "<< p1.cardesTaken() << endl;
  cout <<"The size of Nadav's stacksize is : "<< p2.stacksize() << endl;
  cout <<"The quantity of Nadav's cardesTaken is : "<< p2.cardesTaken() << endl; // prints the amount of cards this player has won. 
  game1.playAll(); 
  cout << "After the full game: " << endl;
  game1.printWiner(); 
  game1.printStats();



// Create two players with their names 
  Player p3("Tzach");
  Player p4("Nadav");

  Game game2(p3,p4); 
   for (int i=0;i<3;i++) {
    game2.playTurn();
   }
    cout << "After three turns: " << endl;
  cout <<"The size of Tzach's stacksize is : " << p3.stacksize() << endl; //prints the amount of cards left. should be 21 but can be less if a draw was played
  cout <<"The quantity of Tzach's cardesTaken is : "<< p3.cardesTaken() << endl;
  cout <<"The size of Nadav's stacksize is : "<< p4.stacksize() << endl;
  cout <<"The quantity of Nadav's cardesTaken is : "<< p4.cardesTaken() << endl; // prints the amount of cards this player has won. 
  game2.playAll(); 
  cout << "After the full game: " << endl;
  game2.printWiner(); 
  game2.printStats();

}

