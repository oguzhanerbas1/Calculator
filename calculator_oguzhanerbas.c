#include <stdio.h>

int main(){
   //Hesap Makinesi
   int sayi1,secenek,sayi2;
   printf("***** H E S A P  M A K I N E S I *****\n") ;
  
      printf("1.sayiyi giriniz : ");
      scanf("%d",&sayi1);
      printf("2.sayiyi giriniz : ");
      scanf("%d",&sayi2);

      printf("Yapmak istediginiz islem nedir ? \n");
      printf("1-Toplama\n");
      printf("2-Cikarma\n");
      printf("3-Carpma\n");
      printf("4-Bölme\n");
      printf("5-Kök alma\n");
      printf("Islem numaraniz : ");
      scanf("%d",&secenek);
      
        switch (secenek)
        {
        case 1:
           int toplam=0;
           toplam=sayi1+sayi2;
           printf("= %d ",toplam);
            break;
            
        case 2:
            int cikarma=0;
            cikarma=sayi1-sayi2;
            printf("= %d",cikarma);
             break;
        case 3:
            int carpma=0;
            carpma=sayi1*sayi2;
            printf("= %d",carpma);
             break;

        case 4:
            int bölme=0;
            bölme=sayi1/sayi2;
            printf("= %d",bölme);
             break;
        
        default:
        printf("Geçersiz tuşlama yaptiniz tekrar deneyiniz !");
            break;

        }
      



   
}