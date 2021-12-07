//
// Created by hloi on 12/7/2021.
//

#ifndef CSC1091041INHERITTEMPLATE_RESTUARANT_H
#define CSC1091041INHERITTEMPLATE_RESTUARANT_H

#include <string>
#include "Business.h"

using std::string;

template<typename T1, typename T2>
class Restaurant : public Business<T1> {
public:

    Restaurant() : Business<T1>(){
    }

    void SetRating(T2 userRating) {
        rating = userRating;
    }

    int GetRating() const {
        return rating;
    }

//    T1 GetDescription() const override {
//        return this->name + " -- " + this->address +
//               "\n  Rating: " + to_string(rating);
//    }

private:
    T2 rating;
};


#endif //CSC1091041INHERITTEMPLATE_RESTUARANT_H
