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
#include <cassert>
using namespace std;

#include "sources/Team.hpp" //no need for other includes

using namespace ariel;


int main() {
   //  Point a(32.3,44),b(1.3,3.5);
   //  assert(a.distance(b) == b.distance(a));
   //  Cowboy *tom = new Cowboy("Tom", a);
   //  OldNinja *sushi = new OldNinja("sushi", b);
   //  tom->shoot(sushi);
   //  cout << tom->print() <<endl;

   //  sushi->move(tom);
   //  sushi->slash(tom);

   //  Team team_A(tom); 
   //  team_A.add(new YoungNinja("Yogi", Point(64,57)));

   //  // Team b(tom); should throw tom is already in team a

   //   Team team_B(sushi);
   //   team_B.add(new TrainedNinja("Hikari", Point(12,81)));


   //   while(team_A.stillAlive() > 0 && team_B.stillAlive() > 0){
   //      team_A.attack(&team_B);
   //      team_B.attack(&team_A);
   //      team_A.print();
   //      team_B.print();
   //   }

   //   if (team_A.stillAlive() > 0) cout << "winner is team_A" << endl;
   //   else cout << "winner is team_B" << endl;

   //   return 0; // no memory issues. Team should free the memory of its members. both a and b teams are on the stack. 

   //My additions :
   printf("\nMy additions: \n");
   Point a(5.1,22.7),b(0.5,19.2);
   assert(a.distance(b) == b.distance(a));

   Cowboy *Alice = new Cowboy("Alice", a);
   TrainedNinja *Bob = new TrainedNinja("Bob", b);
   Alice->shoot(Bob);
   cout << "Alice shoot Bob" <<endl;
   cout << Alice->print() <<endl;
   cout << Bob->print() <<endl;

   Cowboy *Tzach = new Cowboy("Tzach", a);
   OldNinja *Nadav = new OldNinja("Nadav", b);
   Nadav->slash(Tzach);
   cout << "Nadav slash Tzach" <<endl;
   cout << Nadav->print() <<endl;
   cout << Tzach->print() <<endl;

   Team team_A(Alice); 
   team_A.add(new Cowboy("Tzach", Point(5,6.7)));

   Team team_B(Bob);
   team_B.add(new OldNinja("Nadav", Point(32,17)));


   while(team_A.stillAlive() > 0 && team_B.stillAlive() > 0){
      team_A.attack(&team_B);
      team_B.attack(&team_A);
      team_A.print();
      team_B.print();
   }

   if (team_A.stillAlive() > 0)
      cout << "winner is team_A" << endl;
   else
      cout << "winner is team_B" << endl;

   return 0; // no memory issues. Team should free the memory of its members. both a and b teams are on the stack. 



}
