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
       curr_state=searchWord[0];
     }
    bool parseForHello(char c)
     {
      if(c==currState)
       {
         parseLength++;
         if(parseLength==searchWord.length())
          return true;
         currState=searchWord[parseLength];
       }
      currState=searchWord[0];
      return false;
     }
 };
int main()
 {
  WordParser obj;
  obj.ReadWord();
  char c;
  while(true)
   {
       c=getchar();
       bool helloFound = obj.parseForHello(c); 
       if(helloFound) 
        { 
         break; 
        }
   }
  return 0; 
 }
