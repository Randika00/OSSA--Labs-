#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>

// deine the number of threads
#define  NoOfTdr 25

int threads_routine(int x){
  printf("Thread %d is %lu\n",x,pthread_self( ));    // to get the pthread ID
  pthread_exit(0);   
}

int main(){
  // create thread attributes
  pthread_attr_t tdr_attr;
  
  //create a new thread variable
  pthread_t tdr[NoOfTdr];

  int x;

  // intialize the thread attribute
  pthread_attr_init(&tdr_attr);

  // for loop for create 25 threads
  for(x=0;x<NoOfTdr;x++){
    pthread_create(&tdr[x],&tdr_attr,(void *)threads_routine, (void *)x);
  }
  printf("waiting for the threads to finished\n");

  for(int x=0;x<NoOfTdr;x++){
    pthread_join(tdr[x],NULL);    // waits for thread terminates
  }
  printf("All threads are created");
  
  
}
