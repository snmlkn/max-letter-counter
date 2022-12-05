#include <stdio.h>
#include <stdlib.h>

int main()
{

	//exercise KLAVYEDEN KÜÇÜK HARFLERLE GÝRÝLEN CÜMLEDE EN ÇOK TEKRAR EDEN HARFÝ VEREN PROGRAM
    char sentence[150];
    int i=0;
    int maxlet;                                 //en çok tekrar eden harf
    char letter;
    int slet[26]={0};                           //ingilizcede küçük harfleri tutan dizi ve her birinin deðeri 0
    printf("please enter a sentence with small letter\n");
    gets(sentence);

    while(sentence[i])                         //cümledeki karakter sayýsý kadar döner
    {
       if(sentence[i]>='a' && sentence[i]<='z')   //cümle içindeki karakterler a ve z arasýnda ise
       {
           slet[sentence[i]-'a']++;              //cümlenin i'inci karakkterininin ascii kodunu a karakterininkndne çýkarýr
                                                //bu sayede cümlenin kaçýncý karakterinde ise onu bulur ve 1 artýrýr.
       }
       i++;                                     //döngünün devam etmesi için bir sonraki karaktere geçer.
    }

    maxlet=slet[0];                           //küçük harf dizisine en çok kullanýlan karakter sayýsý atanýr

     for(i=1;i<26;i++)                       //en çok tekrar eden harfi bulmak için while içinde sayýlan karakterleri karþýlaþtýrýr
     {
         if(slet[i] != 0)                   //harf kullanýlmýþ ise
            {
               if(slet[i]>maxlet)           // dizi kontrolünde gelinen harfin sayýsý maksimumda tutulan harf sayýsýndan büyük ise
               {
                   maxlet=slet[i];          // küçükharfin sayýsý maxlete atanýr.
                   letter=i+'a';            // en çok tekrar eden harfin tekrar sayýsýný ascii tablosundan çekebilmek için a harfi ile tekrar sayýsýný toplarýz
                                            //tekrar eden harfi letter deðiþkenine atarýz
               }
            }
     }
     printf("maksimum letter is %c",letter);


    return 0;
}
