#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

int main(){
  int x = fork();
  int i;
  if(x==0){
    for(i=1;i<100;i+=2){
      printf("%d\n",i);
    }
  }
  
    
  }
