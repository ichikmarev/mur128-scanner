/*
    File:    lynx_scaner_keyword_table.cpp
    Created: 09 February 2019 at 15:18 Moscow time
    Author:  Гаврилов Владимир Сергеевич
    E-mails: vladimir.s.gavrilov@gmail.com
             gavrilov.vladimir.s@mail.ru
             gavvs1977@yandex.ru
*/

#include "../include/mur128m_scaner_keyword_table.h"

namespace mur128m_scanner{
    const trans_table::Elem<Lexem_code> keywords_jump_table[] = {
        {const_cast<char32_t*>(U"p"),   Lexem_code::Id,                1}, // 0:   b..
        {const_cast<char32_t*>(U""),    Lexem_code::Id,                0}, // 1:   bp
        
        {const_cast<char32_t*>(U"bdn"),   Lexem_code::Id,              2}, // 2:   a...
        {const_cast<char32_t*>(U"s"),   Lexem_code::Id,                3}, // 2:   ab...
        {const_cast<char32_t*>(U"d"),   Lexem_code::Id,                4}, // 3:   ad...
        {const_cast<char32_t*>(U"d"),   Lexem_code::Id,                5}, // 3:   an...
        {const_cast<char32_t*>(U"f"),   Lexem_code::Id,                6}, // 3:   abs...
        {const_cast<char32_t*>(U"fi"),   Lexem_code::Id,               7}, // 3:   add...
        {const_cast<char32_t*>(U"n"),   Lexem_code::Id,                8}, // 3:   and
        {const_cast<char32_t*>(U""),   Lexem_code::Id,                 0}, // 3:   absf
        {const_cast<char32_t*>(U""),   Lexem_code::Id,                 0}, // 3:   addf
        {const_cast<char32_t*>(U""),   Lexem_code::Id,                 0}, // 3:   addi
        {const_cast<char32_t*>(U""),   Lexem_code::Id,                 0}, // 3:   andn
        
        {const_cast<char32_t*>(U"ahmo"),   Lexem_code::Id,             13}, // 0:  c
        {const_cast<char32_t*>(U"l"),   Lexem_code::Id,                14}, // 0:  ca
        {const_cast<char32_t*>(U"as"),   Lexem_code::Id,               15}, // 0:  ch
        {const_cast<char32_t*>(U"p"),   Lexem_code::Id,                16}, // 0:  cm
        {const_cast<char32_t*>(U"m"),   Lexem_code::Id,                17}, // 0:  co
        {const_cast<char32_t*>(U"l"),   Lexem_code::Id,                18}, // 0:  call
        {const_cast<char32_t*>(U"r"),   Lexem_code::Id,                19}, // 0:  ca
        {const_cast<char32_t*>(U"f"),   Lexem_code::Id,                20}, // 0:  ca
        {const_cast<char32_t*>(U"fi"),   Lexem_code::Id,               21}, // 0:  ca
        {const_cast<char32_t*>(U"p"),   Lexem_code::Id,                22}, // 0:  ca
        {const_cast<char32_t*>(U"glprs"),   Lexem_code::Id,            23}, // 0:  ca
        {const_cast<char32_t*>(U""),   Lexem_code::Id,                  0}, // 0:  ca
        {const_cast<char32_t*>(U""),   Lexem_code::Id,                  0}, // 0:  ca
        {const_cast<char32_t*>(U""),   Lexem_code::Id,                  0}, // 0:  ca
        {const_cast<char32_t*>(U"su"),   Lexem_code::Id,               27}, // 0:  ca
        {const_cast<char32_t*>(U"l"),   Lexem_code::Id,                28}, // 0:  ca
        {const_cast<char32_t*>(U"r"),   Lexem_code::Id,                  29}, // 0:  ca
        {const_cast<char32_t*>(U""),   Lexem_code::Id,                  0}, // 0:  ca
        {const_cast<char32_t*>(U"r"),   Lexem_code::Id,                  31}, // 0:  ca
        {const_cast<char32_t*>(U"e"),   Lexem_code::Id,                  32}, // 0:  ca
        {const_cast<char32_t*>(U"z"),   Lexem_code::Id,                  33}, // 0:  ca
        {const_cast<char32_t*>(U"e"),   Lexem_code::Id,                  34}, // 0:  ca
        {const_cast<char32_t*>(U"r"),   Lexem_code::Id,                  42}, // 0:  ca
        {const_cast<char32_t*>(U"r"),   Lexem_code::Id,                  43}, // 0:  ca
        {const_cast<char32_t*>(U""),   Lexem_code::Id,                  0}, // 0:  ca
        {const_cast<char32_t*>(U"x"),   Lexem_code::Id,                  45}, // 0:  ca
        {const_cast<char32_t*>(U""),   Lexem_code::Id,                    0}, // 0:  ca
        {const_cast<char32_t*>(U""),   Lexem_code::Id,                  0}, // 0:  ca
        {const_cast<char32_t*>(U""),   Lexem_code::Id,                  0}, // 0:  ca
        {const_cast<char32_t*>(U"x"),   Lexem_code::Id,                  48}, // 0:  ca
        {const_cast<char32_t*>(U"1368"),   Lexem_code::Id,               49}, // 0:  ca
        {const_cast<char32_t*>(U"4"),   Lexem_code::Id,               50}, // 0:  ca
        {const_cast<char32_t*>(U"2"),   Lexem_code::Id,               51}, // 0:  ca
        {const_cast<char32_t*>(U"0"),   Lexem_code::Id,               52}, // 0:  ca
        {const_cast<char32_t*>(U"2"),   Lexem_code::Id,               53}, // 0:  ca
        {const_cast<char32_t*>(U"8"),   Lexem_code::Id,               53}, // 0:  ca
        {const_cast<char32_t*>(U""),   Lexem_code::Id,               0}, // 0:  ca
        {const_cast<char32_t*>(U""),   Lexem_code::Id,               0}, // 0:  ca
        {const_cast<char32_t*>(U""),   Lexem_code::Id,               0}, // 0:  ca
        {const_cast<char32_t*>(U""),   Lexem_code::Id,               0}, // 0:  ca
        
        {const_cast<char32_t*>(U"i"),   Lexem_code::Id,            59}, // 0:  d
        {const_cast<char32_t*>(U"v"),   Lexem_code::Id,            60}, // 0:  d
        {const_cast<char32_t*>(U"fim"),   Lexem_code::Id,          61}, // 0:  d
        {const_cast<char32_t*>(U""),   Lexem_code::Id,              0}, // 0:  d
        {const_cast<char32_t*>(U"su"),   Lexem_code::Id,           63}, // 0:  d
        {const_cast<char32_t*>(U"o"),   Lexem_code::Id,           64}, // 0:  d
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  d
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  d
        {const_cast<char32_t*>(U"d"),   Lexem_code::Id,           67}, // 0:  d
        {const_cast<char32_t*>(U"i"),   Lexem_code::Id,           68}, // 0:  d
        {const_cast<char32_t*>(U"su"),   Lexem_code::Id,           69}, // 0:  d
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  d
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  d
        
        {const_cast<char32_t*>(U"lr"),   Lexem_code::Id,           72}, // 0:  f
        {const_cast<char32_t*>(U"do"),   Lexem_code::Id,           73}, // 0:  f
        {const_cast<char32_t*>(U"a"),   Lexem_code::Id,            74}, // 0:  f
        {const_cast<char32_t*>(U"z1"),   Lexem_code::Id,           75}, // 0:  f
        {const_cast<char32_t*>(U"a"),   Lexem_code::Id,           76}, // 0:  f
        {const_cast<char32_t*>(U"c"),   Lexem_code::Id,           77}, // 0:  f
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  f
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  f
        {const_cast<char32_t*>(U"t"),   Lexem_code::Id,           80}, // 0:  f
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  f
        {const_cast<char32_t*>(U"1368"),   Lexem_code::Id,           82}, // 0:  f
        {const_cast<char32_t*>(U"2"),   Lexem_code::Id,           83}, // 0:  f
        {const_cast<char32_t*>(U"2"),   Lexem_code::Id,           84}, // 0:  f
        {const_cast<char32_t*>(U"6"),   Lexem_code::Id,           85}, // 0:  f
        {const_cast<char32_t*>(U"0"),   Lexem_code::Id,           86}, // 0:  f
        {const_cast<char32_t*>(U"8"),   Lexem_code::Id,           87}, // 0:  f
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  f
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  f
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  f
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  f
    
        {const_cast<char32_t*>(U"m"),   Lexem_code::Id,           92}, // 0:  j
        {const_cast<char32_t*>(U"p"),   Lexem_code::Id,           93}, // 0:  j
        {const_cast<char32_t*>(U"glnprsz"),   Lexem_code::Id,     94}, // 0:  j
        {const_cast<char32_t*>(U"r"),   Lexem_code::Id,           95}, // 0:  j
        {const_cast<char32_t*>(U"e"),   Lexem_code::Id,           96}, // 0:  j
        {const_cast<char32_t*>(U"e"),   Lexem_code::Id,           97}, // 0:  j
        {const_cast<char32_t*>(U""),   Lexem_code::Id,             0}, // 0:  j
        {const_cast<char32_t*>(U"z"),   Lexem_code::Id,           99}, // 0:  j
        {const_cast<char32_t*>(U"r"),   Lexem_code::Id,           100}, // 0:  j
        {const_cast<char32_t*>(U"r"),   Lexem_code::Id,           101}, // 0:  j
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  j
        {const_cast<char32_t*>(U"r"),   Lexem_code::Id,           103}, // 0:  j
        {const_cast<char32_t*>(U"r"),   Lexem_code::Id,           104}, // 0:  j
        {const_cast<char32_t*>(U"r"),   Lexem_code::Id,           105}, // 0:  j
        {const_cast<char32_t*>(U""),   Lexem_code::Id,            0}, // 0:  j
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  j
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  j
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  j
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  j
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  j
        
        {const_cast<char32_t*>(U"n"),   Lexem_code::Id,           111}, // 0:  i
        {const_cast<char32_t*>(U"t"),   Lexem_code::Id,           112}, // 0:  i
        {const_cast<char32_t*>(U"1368"),   Lexem_code::Id,        113}, // 0:  i
        {const_cast<char32_t*>(U""),   Lexem_code::Id,              0}, // 0:  i
        {const_cast<char32_t*>(U"26"),   Lexem_code::Id,           115}, // 0:  i
        {const_cast<char32_t*>(U"2"),   Lexem_code::Id,            116}, // 0:  i
        {const_cast<char32_t*>(U"4"),   Lexem_code::Id,            117}, // 0:  i
        {const_cast<char32_t*>(U"2"),   Lexem_code::Id,           118}, // 0:  i
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  i
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  i
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  i
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  i
        
        {const_cast<char32_t*>(U"i"),   Lexem_code::Id,           123}, // 0:  u
        {const_cast<char32_t*>(U"n"),   Lexem_code::Id,           124}, // 0:  u
        {const_cast<char32_t*>(U"t"),   Lexem_code::Id,           125}, // 0:  u
        {const_cast<char32_t*>(U"1368"),   Lexem_code::Id,        126}, // 0:  u
        {const_cast<char32_t*>(U""),   Lexem_code::Id,              0}, // 0:  u
        {const_cast<char32_t*>(U"26"),   Lexem_code::Id,           128}, // 0:  u
        {const_cast<char32_t*>(U"2"),   Lexem_code::Id,            129}, // 0:  u
        {const_cast<char32_t*>(U"4"),   Lexem_code::Id,            130}, // 0:  u
        {const_cast<char32_t*>(U"2"),   Lexem_code::Id,           131}, // 0:  u
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  u
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  u
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  u
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  u
        
        {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 0:  u
    
    };
};
