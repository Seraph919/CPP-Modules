#include "Whatever.hpp"


Whatever::Whatever(){}
Whatever::Whatever(const &Whatever cp){}
Whatever &Whatever::operator=(const &Whatever cp){}
Whatever::~Whatever(){}

void Whatever::swap(T &a, T &b){
    T temp = a;
    a = b;
    b = T;
}
T Whatever::min(T &a, T &b){
    return a > b? b : a;
}
T Whatever::max(T &a, T &b){
    return a > b? a : b;
}
