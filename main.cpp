#include <iostream>
#include<string>  


using namespace std;
int count=1;
int integerValue;

int conv=0;
string userString="";
int itterationCount = 0;
int itterationCount2 = 0;
char tempS;
string newString="";


string IntegerToReverseBinary(int integerValue) 
{
  again:

  while (integerValue>0) 
  {

  
  if (integerValue%2==1) {
    userString =  userString +'1';
    integerValue=integerValue-1;
    itterationCount = itterationCount+1;
    goto again;


  


  }

  else if (integerValue%2==0) {
    if (itterationCount2 == itterationCount) {

      userString =   userString +'0' ;
    }

    integerValue=integerValue/2;
    itterationCount2 = itterationCount;
    goto again;

  }
  else{
    userString='0';
    }
    
  }
  return userString;

}


string ReverseString(string userString) {
  for (int i=userString.size()-1;i>=0;i--) {
    newString=newString+userString[i];
    




  }
  return newString;
}





int main() 
{
  cin >> integerValue;


  IntegerToReverseBinary(integerValue) ;
  ReverseString(userString) ;


  cout <<newString<<endl;





   return 0;
}
