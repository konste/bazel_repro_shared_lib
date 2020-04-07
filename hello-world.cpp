#include <ctime>
#include <string>
#include <iostream>
#include <wchar.h> // For wprintf

#include "hello-greet.h"
#include "middle_shared.h"

void print_localtime() {
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
}

int main(int argc, char** argv) {
  wprintf(L"\n");

  std::string who = "world";
  if (argc > 1) {
    who = argv[1];
  }
  std::cout << get_greet(who) << std::endl;

if (sizeof(void*) == 8) {
  wprintf(L"Bitness = 64\n");
}
if (sizeof(void*) == 4) {
  wprintf(L"Bitness = 32\n");
}

#ifdef _DEBUG
  wprintf(L"compilation_mode = _DEBUG\n");
#endif
#ifdef NDEBUG
  wprintf(L"compilation_mode = NDEBUG\n");
#endif

  unsigned int magic_number = middle_shared();
  wprintf(L"Magic number received from middle is %d.\n", magic_number);

  //print_localtime();
  return 0;
}
