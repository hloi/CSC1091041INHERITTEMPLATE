#include <iostream>
#include <string>
#include <vector>
#include "Business.h"
#include "Restuarant.h"
using namespace std;

int main() {
    unsigned int i;
    vector< Business<string>* > businessList;
    Business<string>* businessPtr;
    Restaurant<string,int>* restaurantPtr;

    businessPtr = new Business<string>();
    businessPtr->SetName("ACME");
    businessPtr->SetAddress("4 Main St");

    restaurantPtr = new Restaurant<string,int>();
    restaurantPtr->SetName("Friends Cafe");
    restaurantPtr->SetAddress("500 2nd Ave");
    restaurantPtr->SetRating(5);

    businessList.push_back(businessPtr);
    businessList.push_back(restaurantPtr);

    for (i = 0; i < businessList.size(); ++i) {
        cout << businessList.at(i)->GetDescription() << endl;
    }

    return 0;
}