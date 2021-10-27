#include <iostream>

using namespace std;

int main(){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    // if(x1==x2 and y1==y2){
    //     cout << 0;
    // }
    // else if(x1==x2 or y1==y2){
    //     cout << 1;
    // }
    // else{
    //     cout << 2;
    // }
    cout << (x1!=x2)+(y1!=y2) << endl;
    return 0;
}