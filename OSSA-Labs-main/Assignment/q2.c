#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

int main(){
  int x = fork();    // create a fork

  if(x==0){
    printf("this is child process\n");
    printf("Parent ID %d\n",getppid());
  }
  else{
    while(1){
      sleep(50);   //  create a zombie process
    }
    
  }
}
