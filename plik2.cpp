#include<iostream>
#include<cstdlib>

using namespace std;
 
void selection(int tab[],int n) //n - iloœæ elementów do posortowania
{
int mn_index; //zmienna pomocnicza przechowuj¹ca indeks komórki 
        //z minimaln¹ wartoœci¹
  for(int i=0;i<n-1;i++)
  {
    mn_index = i;
    for(int j=i+1;j<n;j++) //pêtla wyszukuje najmniejszy element w podzbiorze nieposortowanym
    if(tab[j]<tab[mn_index])
      mn_index = j;
 
    //zamiana elementu najmniejszego w podzbiorze z pierwsz¹ pozycj¹ nieposortowan¹
  swap(tab[i], tab[mn_index]);
  }
}