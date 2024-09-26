#include "Deck.h"
#include <cstdio>
#include <stdexcept>

void Deck::add_category(std::string category_name, int amount){
  Category c = {category_name, amount};
  categories.push_back(c);
  deck_size += amount;
};

void Deck::fill_to(int amount){
  if (amount < deck_size) throw std::runtime_error(
    "ERROR: fill_to() called with a size smaller than deck\n");
  deck_size = amount;
};

void Deck::print_deck(){
  printf("deck size: %d\n", deck_size);
  for( auto cat : categories ) {
    printf("- %s: %d\n", cat.name.c_str(), cat.amount);
  }
}

