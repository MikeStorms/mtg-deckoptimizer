#include <vector>
#include <sstream>
#include <cmath>

typedef int container;

std::vector<container> big_factorial(int n) {
  // number of bits per container of out
  int container_bits = sizeof(container)*4;

  // TODO
  // possible optimization: find out how many ints you can mult
  // before hitting 16bits, and do them, n is max value so
  // everything is less num bits as std::log2(n)+1
  // TODO investigat if using long long is better
  //int bits = std::log2(n) + 1;
  //printf("numbits %u\n", bits);

  std::vector<int> out = {n};

  for (int n_sub = n-1; n_sub != 1; --n_sub) {
    int temp;
    int carry = 0;
    for (int& out32 : out ) {
      temp = out32 * n_sub + carry;
      carry = temp >> container_bits;
      out32 = temp & 0x0000ffff;
    }
    if ( carry > 0 ) {
      out.push_back(carry);
    }
  }
  return out;
}

void print_bigint(std::vector<container> n) {
  std::string str = "";
  for (int n32 : n ) {
    char * substr;
    sprintf(substr, "%04x", n32);
    str = std::string(substr) + "" + str;
  }
  printf("%s\n", str.c_str());
}
