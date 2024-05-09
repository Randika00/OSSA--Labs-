#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
void * thread1()
{
        printf("Hello World!!\n");
        for(int i=0;i<=10;i++){
          printf("%d\n",i*i);
        }
}
int main()
{
        pthread_t tid[2];
        int n; 
        
        for(int i=0;i<2;i++){
          pthread_create(&tid[i],NULL,thread1 ,NULL);
          pthread_join(tid[i],NULL);
        }
        printf("enter number :");
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
          printf("%d\n",i*i*i);
        }
        
        return 0;
}
