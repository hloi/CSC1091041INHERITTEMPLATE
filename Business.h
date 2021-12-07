//
// Created by hloi on 12/7/2021.
//

#ifndef CSC1091041INHERITTEMPLATE_BUSINESS_H
#define CSC1091041INHERITTEMPLATE_BUSINESS_H


template<typename T1>
class Business {
public:
    void SetName(T1 busName) {
        name = busName;
    }

    void SetAddress(T1 busAddress) {
        address = busAddress;
    }

    virtual T1 GetDescription() const {
        return name + " -- " + address;
    }

protected:
    T1 name;
    T1 address;
};






#endif //CSC1091041INHERITTEMPLATE_BUSINESS_H
