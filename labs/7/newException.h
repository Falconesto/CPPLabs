//
// Created by Александр on 22.05.2020.
//

#ifndef INC_7_NEWEXCEPTION_H
#define INC_7_NEWEXCEPTION_H

#pragma once

#include <exception>

class buffer_underflow_exception : public std::exception {
    const char* what() const noexcept override {
            return "Buffer underflow";
    }
};

class index_out_of_bounds_exception : public std::exception {
    const char* what() const noexcept override {
            return "Index out of bounds";
    }
};

#endif //INC_7_NEWEXCEPTION_H
