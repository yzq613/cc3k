#include "Merchant.h"

using namespace std;

Merchant::Merchant: Enemy{30,70,5},state{false}{}

bool Merchant::getState(){
    return state;
}

Merchant::~Merchant(){}

void Merchant::print() {
    cout << "M" << endl;
}