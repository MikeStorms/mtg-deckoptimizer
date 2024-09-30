#include <cstdio>
#include "Deck.h"
#include "mafs.h"

int main() {
  //Deck d;
  //d.add_category("land", 37);
  //d.add_category("ramp", 10);
  //d.add_category("big boi", 11);
  //d.fill_to(100);
  //d.print_deck();
  for (int i = 2; i < 101; i +=2){
    auto res = big_factorial(i);
    printf("%d: ", i);
    print_bigint(res);
  }
  return 0;
}
