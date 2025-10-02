#include  <iostream> 


typedef std::string name_t; // nah old  new_t;
using hp_t = int; // better new_t  = old; 


int main () {




 name_t player = "invoker01";

  hp_t hp = 55; 




std::cout << player << '\n' << "health: " << hp;






    return 0;
}