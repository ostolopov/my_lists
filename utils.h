#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include "my_lists.h"

using namespace std;


int get_int(int *number, int min, int max);

template <typename T>
void universal_case ();

// template<>
// void universal_case<undir_lin_no_head> ();
// template<>
// void universal_case<undir_lin_with_head> ();
// template<>
// void universal_case<sym_lin_no_head> ();
// template<>
// void universal_case<sym_lin_with_head> ();
// template<>
// void universal_case<unidir_cyc_no_head> ();
// template<>
// void universal_case<unidir_cyc_with_head> ();
// template<>
// void universal_case<sym_cyc_no_head> ();
// template<>
// void universal_case<sym_cyc_with_head> ();

#endif
