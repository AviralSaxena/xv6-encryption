#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main (int argc, char* argv[]){

  int fd, i;

  if (argc <= 1) {
    fprintf(2,"You forgot to provide a filename, dumbass!!\n");
    exit(0);
  }

  for (i = 1; i < argc; i++) {
    if ((fd = open(argv[i], 0)) < 0) {
      fprintf(2, "decrypt: cannot open %s\n", argv[i]);
      exit(1);
    }
    printf("Decrypting...\n");
    decrypt(fd, 123);
    close(fd);
  }
  exit(0);
}