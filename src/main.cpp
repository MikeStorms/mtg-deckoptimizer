#include <cstdio>
#include "Deck.h"

int main(){
  Deck d;
  d.add_category("land", 37);
  d.add_category("ramp", 10);
  d.add_category("big boi", 11);
  d.fill_to(100);
  d.print_deck();
  return 0;
}
