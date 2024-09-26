#include <vector>
#include <string>
#include "types.h"

class Deck {
public:
  std::string name;

  void add_category(std::string category_name, int amount);
  void fill_to(int amount);
  void print_deck();
private:
  std::vector<Category> categories;
  int deck_size = 0;

};
