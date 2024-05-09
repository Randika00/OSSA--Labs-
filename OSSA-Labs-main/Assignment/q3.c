#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

int main(){
  int x= fork();

  if(x==0){
    // child process
    printf("Parent ID of child process %d\n",getppid());
    sleep(10);     // child process become orphan
  }
  
    
  }
