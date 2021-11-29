#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

  int main (int argc, char *argv[]){ 
  int id =fork();
  printf("current id: %d, parent id :%d\n",getpid(),getppid());
  return 0;
}
