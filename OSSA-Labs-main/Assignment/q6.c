#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#define NoOfTrd 2

void * thread1()
{
        printf("Hello World!!\n");

        for(int k=2;k<102;k+=2){
          printf("%d\n",k);
        }
        pthread_exit(0);
}
int main()
{
        pthread_t tid[2];   // thread variable
        int i;
        int n;
        
        printf("enter an integer :");
        scanf("%d",&n);
        
        for(i=0;i<NoOfTrd;i++){
          pthread_create(&tid[i],NULL,thread1,NULL);
        }
        for(i=0;i<NoOfTrd;i++){
          pthread_join(tid[i],NULL);
        }
        for(i=0;i<=n;i++){
          printf("%d\n",i);
        }
        return 0;
}
