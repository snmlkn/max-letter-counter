#include <stdio.h>
#include <stdlib.h>

int main()
{

	//exercise KLAVYEDEN K���K HARFLERLE G�R�LEN C�MLEDE EN �OK TEKRAR EDEN HARF� VEREN PROGRAM
    char sentence[150];
    int i=0;
    int maxlet;                                 //en �ok tekrar eden harf
    char letter;
    int slet[26]={0};                           //ingilizcede k���k harfleri tutan dizi ve her birinin de�eri 0
    printf("please enter a sentence with small letter\n");
    gets(sentence);

    while(sentence[i])                         //c�mledeki karakter say�s� kadar d�ner
    {
       if(sentence[i]>='a' && sentence[i]<='z')   //c�mle i�indeki karakterler a ve z aras�nda ise
       {
           slet[sentence[i]-'a']++;              //c�mlenin i'inci karakkterininin ascii kodunu a karakterininkndne ��kar�r
                                                //bu sayede c�mlenin ka��nc� karakterinde ise onu bulur ve 1 art�r�r.
       }
       i++;                                     //d�ng�n�n devam etmesi i�in bir sonraki karaktere ge�er.
    }

    maxlet=slet[0];                           //k���k harf dizisine en �ok kullan�lan karakter say�s� atan�r

     for(i=1;i<26;i++)                       //en �ok tekrar eden harfi bulmak i�in while i�inde say�lan karakterleri kar��la�t�r�r
     {
         if(slet[i] != 0)                   //harf kullan�lm�� ise
            {
               if(slet[i]>maxlet)           // dizi kontrol�nde gelinen harfin say�s� maksimumda tutulan harf say�s�ndan b�y�k ise
               {
                   maxlet=slet[i];          // k���kharfin say�s� maxlete atan�r.
                   letter=i+'a';            // en �ok tekrar eden harfin tekrar say�s�n� ascii tablosundan �ekebilmek i�in a harfi ile tekrar say�s�n� toplar�z
                                            //tekrar eden harfi letter de�i�kenine atar�z
               }
            }
     }
     printf("maksimum letter is %c",letter);


    return 0;
}
