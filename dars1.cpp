#include <iostream>

using namespace std;

int main(){
    int x,y,z;
    cin >> x >> y >> z;
    if((x<y and y<z) || (x>y and y>z)){
        cout << -1*x << -1*y << -1*z;
    }
    else{
        cout << 2*x << 2*y << 2*z;
    }
}