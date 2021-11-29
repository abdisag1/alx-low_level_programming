#include <stdio.h>

#include <unistd.h>

int main(void) {
  
  char cmd[] ="/usr/bin/ls";
  
  char *argVec[] ={"ls","-l",NULL};
  
  char *envVec[]={NULL};
  
  printf("start of the execve call %s: \n",cmd);
  
  printf("==================================\n");
  
  if (execve(cmd,argVec,envVec) ==-1){
    
    perror("could not execute execve");
    
  }
  
  printf("something went wrong");
  
}

