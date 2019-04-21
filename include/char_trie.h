/*
    File:    char_trie.h
    Created: 06 November 2016 at 12:20 Moscow time
    Author:  Гаврилов Владимир Сергеевич
    E-mails: vladimir.s.gavrilov@gmail.com
             gavrilov.vladimir.s@mail.ru
             gavvs1977@yandex.ru
*/
#ifndef CHAR_TRIE_H
#define CHAR_TRIE_H
#   include "../include/trie.h"
class Char_trie : public Trie<char32_t>{
public:
    virtual ~Char_trie() { };

    Char_trie(){};

    Char_trie(const Char_trie& orig) = default;

    /* Using index idx, this function builds a string of the type u32string
     * corresponding to the index idx. */
    std::u32string get_string(size_t idx);

    /* This function outputs the string corresponding to the index idx. */
    void print(size_t idx);

    /* The following function returns the length of the string
     * corresponding to the index idx. */
    size_t get_length(size_t idx);
};
#endif