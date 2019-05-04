/*
    File:    keyword_init_table.cpp
    Author:  Chikmarev Ilya
*/

#include "../include/keyword_init_table.h"
#include "../include/mysize.h"

namespace mur128m_scanner{
    const State_for_char keyword_init_table[] = {
        {0,   U'a'}, {20,  U'b'}, {56,  U'c'},
        {64,  U'd'}, {67,  U'f'}, {71,  U'l'},
        {83,  U'm'}, {100, U'n'}, {112, U'o'},
        {130, U'p'}, {135, U'r'}, {147, U's'},
        {172, U't'}, {178, U'u'}, {198, U'x'}
    };

    const std::size_t    keyword_init_table_size = size(keyword_init_table);
};
