#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *toplama(){


    int s1,s2,sonuc;
    

    printf("\nToplama islemi icin 1.sayiyi giriniz:\n");
    scanf("%d",&s1);
    printf("Toplama islemi icin 2.sayiyi giriniz:\n");
    scanf("%d",&s2);
    
    sonuc=s1+s2;
    

    printf("\nGirdiginiz sayilarin toplami:%d \n",sonuc);
    
    printf("------------------------------------------------\n\n");
    
    return NULL;
}


void *cikarma(){

    int s1,s2,sonuc;
    
    printf("Cikarma islemi icin 1.sayiyi giriniz:\n");
    scanf("%d",&s1);
    printf("Cikarma islemi icin 2.sayiyi giriniz:\n");
    scanf("%d",&s2);
    

    sonuc=s1-s2;
    

    printf("\nGirdiginiz sayilarin cikarimi:%d \n",sonuc);
    
    printf("------------------------------------------------\n\n");
    
    return NULL;
}

void *carpma(){

    int s1,s2,sonuc;
    
    printf("Carpma islemi icin 1.sayiyi giriniz:\n");
    scanf("%d",&s1);
    printf("Carpma islemi icin 2.sayiyi giriniz:\n");
    scanf("%d",&s2);
    
    sonuc=s1*s2;
    
    printf("\nGirdiginiz sayilarin carpimi :%d \n",sonuc);
    
    printf("------------------------------------------------\n\n");
    
    return NULL;
}

void *bolme(){

    float s1,s2,sonuc;
    
    printf("Bolme islemi icin 1.sayiyi giriniz:\n");
    scanf("%f",&s1);
    printf("Bolme islemi icin 2.sayiyi giriniz:\n");
    scanf("%f",&s2);
    
    sonuc=s1/s2;
    

    printf("\nGirdiginiz sayilarin bolumu :%.1f \n",sonuc);
    
    printf("------------------------------------------------\n\n");
    
    return NULL;
}

int main(){

   pthread_t thread1,thread2,thread3,thread4;
   
  
   pthread_create(&thread1,NULL,toplama,NULL);
   pthread_join(thread1,NULL);
   
   pthread_create(&thread2,NULL,cikarma,NULL);
   pthread_join(thread2,NULL);
   
   pthread_create(&thread3,NULL,carpma,NULL);
   pthread_join(thread3,NULL);
   
   pthread_create(&thread4,NULL,bolme,NULL);
   pthread_join(thread4,NULL);
   
   return 0;
}
