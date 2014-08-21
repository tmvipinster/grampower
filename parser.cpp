#include<iostream>
#include<stdlib.h>
using namespace std;
class wordParser
 {
   private :
    string searchWord; //The word to be searched in a stream of characters
    char currState; //Holds the next expected character 
    int parseLength; //Length of successfull search so far
   public:
    wordParser()
     {
      parseLength=0;
     }
   /**
        @This method read the required search word
   */
    void ReadWord()
     {
       cin>>searchWord;
       currState=searchWord[0];
     }
   /**
      @This method is used to parse the string 
   */
    bool parseForHello(char c)
     {
      if(c==currState)
       {
         parseLength++;
         if(parseLength==searchWord.length())
          return true;  //We found the required string in our character stream
         currState=searchWord[parseLength]; //We found a match so far.Now look for the next character in stream
         return false;
       }
      currState=searchWord[0]; //Mismatching character.Reset the state to initial
      parseLength=0;     
      return false;
     }
 };
int main()
 {
  wordParser obj;  //Creates a object of wordparser class
  obj.ReadWord();  //Reads the search string . eg hello
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
