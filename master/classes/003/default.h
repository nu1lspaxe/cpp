#pragma once

#ifndef DEFAULT_H
#define DEFAULT_H

#include <iostream>

const int age{0};
enum class Gender : char {
    Male = 1,
    Female,
    Other
};

std::string_view GetText(Gender g);

#endif