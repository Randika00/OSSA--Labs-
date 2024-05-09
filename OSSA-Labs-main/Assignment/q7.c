#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
void * thread1()
{
   for(int i=1;i<=10;i++){
     printf("%d\n",i*i);
   } 
        
}
void * thread2()
{
    for(int i=1;i<=10;i++){
     printf("%d\n",i*i*i);
   }     
        
}
int main()
{
        pthread_t tid1,tid2;
        pthread_create(&tid2,NULL,thread2,NULL);
        
        pthread_create(&tid1,NULL,thread1,NULL);

        pthread_join(tid1,NULL);
        pthread_join(tid2,NULL);
          
        return 0;
}


