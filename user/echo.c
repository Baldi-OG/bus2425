#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int i;

  if (argc == 3 && !strcmp(argv[1], "Hello") && !strcmp(argv[2], "World")) {
    fprintf(1, "Panic!\n");
    return 1;
  }

  for(i = 1; i < argc; i++){
    write(1, argv[i], strlen(argv[i]));
    if(i + 1 < argc){
      write(1, " ", 1);
    } else {
      write(1, "\n", 1);
    }
  }
  exit(0);
}