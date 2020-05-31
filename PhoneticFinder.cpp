#include "PhoneticFinder.hpp"
#include <string>
#include <string.h>
#include <exception>
#include <iostream>


std::string ToLower (std::string a){
     std::string temp="";
     for (int i=0;i<=a.length();i++){
          temp+=tolower(a[i]);
     }
return temp;
}

int DifferentChar (char c1, char c2){

     if (c1==c2) return 1;
     if (c1=='v' && c2=='w') return 1; 
     if (c1=='w' && c2=='v') return 1;
     if (c1=='b' && c2=='f') return 1; 
     if (c1=='b' && c2=='p') return 1;
     if (c1=='f' && c2=='p') return 1; 
     if (c1=='f' && c2=='b') return 1;
     if (c1=='p' && c2=='f') return 1; 
     if (c1=='p' && c2=='b') return 1;
     if (c1=='g' && c2=='j') return 1; 
     if (c1=='j' && c2=='g') return 1;
     if (c1=='c' && c2=='k') return 1; 
     if (c1=='c' && c2=='q') return 1;
     if (c1=='k' && c2=='c') return 1; 
     if (c1=='k' && c2=='q') return 1;
     if (c1=='q' && c2=='c') return 1; 
     if (c1=='q' && c2=='k') return 1;
     if (c1=='s' && c2=='z') return 1; 
     if (c1=='z' && c2=='s') return 1;
     if (c1=='d' && c2=='t') return 1; 
     if (c1=='t' && c2=='d') return 1;
     if (c1=='o' && c2=='u') return 1; 
     if (c1=='u' && c2=='o') return 1;
     if (c1=='i' && c2=='y') return 1; 
     if (c1=='y' && c2=='i') return 1;
return 0;
}

std::string DifferentWord (std::string word1,std::string word2){
if (word1.length()!=word2.length()) return "null";
for(int i=0;i<=word1.length(); i++){
     if (!DifferentChar(word1[i],word2[i])) return "null";
}
return word1;
}
 
namespace phonetic{

std::string find (std::string text, std::string word){
     if ((text.length()==0) || (word.length()==0))
        (throw std::invalid_argument("eror"));
     std::string lowtext=ToLower(text);
     std::string lowword=ToLower(word);
     std::string ans="";
     int i=0;
     while (i<lowtext.length()){
     if (DifferentChar(lowtext[i], lowword[0])){
     std::string wordtemplow="";
     std::string anstemp="";
     while ((text[i])!=' ') {
     if (text[i]=='\0') break;
     wordtemplow+=lowtext[i];
     anstemp+=text[i];
     i++;
     }

      
     std::string s=DifferentWord(wordtemplow,lowword);
     if (s!="null") ans=anstemp;


     }
     if (text[i]=='\0') break;
     i++;
}
if (ans=="") (throw std::invalid_argument("eror"));



return ans;

}
}










