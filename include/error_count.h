/*
    File:    error_count.h
    Created: 13 December 2015 at 09:05 Moscow time
    Author:  Гаврилов Владимир Сергеевич
    E-mails: vladimir.s.gavrilov@gmail.com
             gavrilov.vladimir.s@mail.ru
             gavvs1977@yandex.ru
*/

#ifndef ERROR_COUNT_H
#define ERROR_COUNT_H
#   include <cstddef>
/* A class for calculating the number of errors. */
class Error_count{
public:
    Error_count() : number_of_errors_(0) {};
    void   increment_number_of_errors();
    void   print() const;
    size_t get_number_of_errors() const;
private:
    size_t number_of_errors_;
};
#endif