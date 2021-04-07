//
// Created by Александр on 07.05.2020.
//

#include "Exception.h"

Exception::Exception(std::string err, int code){
    this->err=err;
    this->code=code;
}

Exception::~Exception() = default;

int Exception::Code() const {
    return code;
}

std::string Exception::What() const {
    return err;
}
