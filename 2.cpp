#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void sort3ints(int *a,int *b,int *c){
    int data[] = {*a,*b,*c};
    sort(data,data+3);
    *a = data[2];
    *b = data[1];
    *c = data[0];
}

int main(){
    int a =5, b = 2, c = 3;
    sort3ints(&a,&b,&c);
    printf("%d %d %d",a,b,c);
}