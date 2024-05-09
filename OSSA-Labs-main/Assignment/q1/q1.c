#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

int main(){
  int x= fork();   // create a child process

  if(x==0){
    printf("This is child process\n ");
    printf("The parent ID :%ld\n",getppid());
    printf("The child ID :%ld\n\n\n",getpid());
    
  }
  else{
    printf("This is Parent process\n ");
    printf("The parent ID :%ld\n",getppid());
    printf("The child ID :%ld\n\n\n",getpid());
    wait(NULL);
  }
}

