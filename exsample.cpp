#include <bits/stdc++.h>
using namespace std;
 
// this is code internetdan uxlatildi
 
   
bool isDigit(char d)
{
    if(d>='0' and '9'>=d){
        return true;
    }else{
        return false;
    }
}
 
int main(){
    char a,b,c;
    scanf("%c %c %c",&a,&b,&c);
    printf("%d\n",isDigit(a)+isDigit(b)+isDigit(c));
}