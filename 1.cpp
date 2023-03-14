#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Card{
    private:
        string s;
        string f;
    public:
        string suit;
        string face;

        Card(string);
        bool operator>(const Card &);
};

bool Card::operator>(const Card &a){
    if(a.suit > s){
        return true;
    }else{
        return false;
    }
}

Card::Card(string a){
    for(unsigned int i = 0;i<a.size();i++){
        a[i] = toupper(a[i]);
    }
    unsigned int x = a.find(" ");
    for(unsigned int i = 0;i<x;i++){
        suit += a[i];
    }
    for(unsigned int i = x+1 ;i<a.size();i++){
        face += a[i];
    }
}