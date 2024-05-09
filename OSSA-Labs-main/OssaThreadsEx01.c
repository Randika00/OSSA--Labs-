#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void *workerThreadFunc(void *tid) {
  long *myID = (long *)tid;
  printf("HELLO WORLD! THIS IS THREAD %ld\n", *myID);
};

int main() {

  pthread_t tid0;    //  create a varaible for thread
    /*
      pthread_create -  function is used to create a new pthread
                        it has several parameterrs 
      1.  address of the pthread variable that going to store
      2. pthreads attributes
      3. function that going to execute in thread
      4. parameters that want to pass 
    */

    pthread_create(&tid0, NULL, workerThreadFunc, (void *)&tid0);


  pthread_exit(NULL);
  return 0;
}
