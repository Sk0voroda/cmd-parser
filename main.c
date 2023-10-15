#include <stdio.h>

void command_line_info() {
  printf("\n");
  printf("Options:\n");
  printf("-h, --help          print command line options");
  printf("-path               path to file with data");
  printf("\n");
}

int main(int argc, char const *argv[]) {
  printf("Command line simple tool!\n");

  if (argc <= 1) {
    printf("No arguments provided!\n");
  }

  for (size_t i = 1; i < argc; i++) {
    printf("argument - %s\n", argv[i]);
  }

  return 0;
}
