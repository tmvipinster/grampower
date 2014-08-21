#include<iostream>
#include<stdlib.h>
using namespace std;
class wordParser
 {
   private :
    string searchWord;
    char currState;
    int parseLength;
   public:
    wordParser()
     {
      parseLength=0;
     }
    void ReadWord()
     {
       cin>>searchWord;
       currState=searchWord[0];
     }
    bool parseForHello(char c)
     {
      if(c==currState)
       {
         parseLength++;
         if(parseLength==searchWord.length())
          return true;
         currState=searchWord[parseLength];
         return false;
       }
      currState=searchWord[0];
      return false;
     }
 };
int main()
 {
  wordParser obj;
  obj.ReadWord();
  char c;
  while(true)
   {
       cin>>c;
       bool helloFound = obj.parseForHello(c); 
       if(helloFound) 
        { 
         break; 
        }
   }
  return 0; 
 }
