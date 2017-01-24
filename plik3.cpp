#include<iostream>
 
using namespace std;
 
class Programming // komentarz
{
   private:
      int variable;
 
   public:
 
      void input_value()
      {
         cout << "In function input_value, Enter an integer\n";
         cin >> variable;
      }
 
      void output_value()
      {
         cout << "Variable entered is ";
         cout << variable << "\n";
      }
};