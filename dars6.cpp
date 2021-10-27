#include <cstdio>
#include <cmath>
#include <algorithm>
int * h;
void add(int h[],int l,int r,int x){
    for(int j=l;j<=r;j++){
         h[j]+=x;
    }
}

void update(int h[],int l,int r,int x){
    for(int j=l;j<=r;j++){
         h[j]=x;
    }
}

int rsq(int n[],int l,int r){
    return *std::max_element(n+l,n+r);
}
int rmq(int n[],int l,int r){
    return *std::min_element(n+l,n+r);
}
int main(){
    int n;
    scanf("%d",&n);
    int h[n];
    for(auto &j:h){
        scanf("%d",&j);
    }
    
}
