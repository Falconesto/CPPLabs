//
// Created by Александр on 07.05.2020.
//

#ifndef INC_5_EXCEPTION_H
#define INC_5_EXCEPTION_H
#pragma once
#include <string>


class Exception {
public:
    Exception(std::string err, int code);
    ~Exception();
    int Code() const;
    std::string What() const;
private:
    std::string err;
    int code;
};


#endif //INC_5_EXCEPTION_H
