#pragma once
#ifndef INLINE_H
#define INLINE_H

#include <atomic>

/* inline specifier

cppreference: https://en.cppreference.com/w/cpp/language/inline
*/

// function included in multiple source files must be inline
inline int sum(int a, int b) { return a + b; }

// variable with external linkage included in multiple source files must be inline
inline std::atomic<int> counter(0);

#endif