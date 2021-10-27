#include <iostream>

using namespace std;

int leap_years(int y,int m){
    if(m<=2){
        y--;
    }
    return y/4 - y/100 + y/400;
}

int main(){
    int y,m,d;
    int md[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    cin >> y >> m >> d;
    int n1 = y*365 + d;
    for (int i = 0; i < m - 1; i++)
        n1 += md[i];
    n1 +=leap_years(y,m);
    switch((n1 - 365)%7){
        case 1:cout<<"Monday";break;
        case 2:cout<<"Tuesday";break;
        case 3:cout<<"Wednesday";break;
        case 4:cout<<"Thursday";break;
        case 5:cout<<"Friday";break;
        case 6:cout<<"Saturday";break;
        case 0:cout<<"Sunday";break;
    }
    cout << endl;
}   