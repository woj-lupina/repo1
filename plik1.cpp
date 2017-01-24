#include<iostream>
using namespace std;
 
void sortowanie_przez_wstawianie(int n, int *tab)
{
     int pom, j;
     for(int i=1; i<n; i++)
     {
             //wstawienie elementu w odpowiednie miejsce
             pom = tab[i]; //ten element bêdzie wstawiony w odpowiednie miejsce
             j = i-1;
 
             //przesuwanie elementów wiêkszych od pom
             while(j>=0 && tab[j]>pom) 
             {
                        tab[j+1] = tab[j]; //przesuwanie elementów
                        --j;
             }
             tab[j+1] = pom; //wstawienie pom w odpowiednie miejsce
     }     
}