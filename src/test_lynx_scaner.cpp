/*
    File:    test_lynx_scaner.cpp
    Created: 12 March 2019 at 09:13 Moscow time
    Author:  Гаврилов Владимир Сергеевич
    E-mails: vladimir.s.gavrilov@gmail.com
             gavrilov.vladimir.s@mail.ru
             gavvs1977@yandex.ru
*/

#include <cstdio>
#include "../include/test_lynx_scaner.h"
#include "../include/lynx_lexeme.h"

void test_lynx_scaner(const std::shared_ptr<lynx_scanner::Scanner>& lynxsc)
{
    lynx_scanner::Lynx_token lti;
    lynx_scanner::Lexem_code llc;
    do{
        lti    = lynxsc->current_lexeme();
        llc   = lti.lexeme_.code_;
        auto s = lynxsc->token_to_string(lti);
        puts(s.c_str());
    }while(llc != lynx_scanner::Lexem_code::Nothing);
}