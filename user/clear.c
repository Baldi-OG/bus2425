#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


int main(int argc, char **argv) {
   printf("\e[1;1H\e[2J");
   exit(0);
}
