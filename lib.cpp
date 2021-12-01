#include "lib.h"
void primo (int a, int i, int &conta){
  int div=0;
  i++;
  if (a>1 and a>i){
    div=a%i;
    if (div==0){
      conta++;
      
  } else {
      primo (a, i, conta);
  }
 }
}  
