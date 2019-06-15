/*
    File:    mur128m_lexeme.h
    Author:  Chikmarev Ilya
*/
#ifndef mur128m_LEXEME_H
#define mur128m_LEXEME_H
#include <cstddef>
#include <quadmath.h>

namespace mur128m_scanner{
    enum class Lexem_code : uint16_t{
        Nothing,                     UnknownLexem,
        KwSection,                   KwReadable,
        KwWritable,                  KwExecutable,
        Id,                          Integer,
        KwFloat32,                   KwFloat64,
        KwFloat80,                   KwFloat128,
	KwInt32,                     KwInt64,
        KwInt128,		     KwInt8,
	KwInt16,		     KwUInt32,
        KwUInt64,		     KwUInt128,
	KwUInt8,		     KwUInt16,
	Float32,                     Float64,
        Float80,                     Float128,
	KwComplex32,                 KwComplex64,
        KwComplex80,                 KwComplex128,
        Complex32,                   Complex64,
        Complex80,                   Complex128,
        String,                      Char,
        Sq_br_opened,                Round_br_opened,
        Sq_br_closed,                Round_br_closed,
        Less_than,                   Left_shift,
        Minus,                       Logical_not,
        Bitwise_not,                 Point,
        Semicolon,                   Plus,
        Mul,                         Div,
        Remainder,                   Bitwise_or,
        Bitwise_and,                 Greater_than,
        Right_shift,                 Curly_brace_opened,
        Curly_brace_closed,          Comma,
	Register,		     KwChar,
	KwFormat,		     KwString,
	RegisterBp, KwAnd, KwAbsf, KwAddi,KwAndn,KwCall,KwChar,KwChfs,KwCmpf,KwCalls,KwCallr,KwCallz,KwCalln,KwCallp, KwCallsr,KwCallzr,KwCallge,  KwCallpr, KwCallger,KwCallnzr,KwCalller,KwDivf,KwDivis,KwDiviu,KwDivmodis,
KwDivmodiu,KwFld1,KwFldz,KwFrac,KwJmp,KwJmpr,KwJmpge,KwJmple,KwJmpnz,KwJmppr,KwJmpsr, KwJmpzr,KwJmpger,KwJmpler, KwJmpnzr,KwOr,KwOrn,KwXor,KwXorn,KwLshift,KwLshifts,KwNot,KwTrap,KwRetz,
KwReti,KwRetl,KwRetn,KwRetp,KwRetge,KwRetnz,KwRetag,KwRetai,KwRetap,KwRetal,KwRetaz,KwRetan,KwRets,KwRege,
KwRetale,KwRetanz,KwRoundg,KwRoundn,KwRoundl,KwRoundt,KwRshift,KwRshifts,KwReadable,KwPop,KwPush
    };

    struct Lexeme_info{
        Lexem_code code_;
        union{
            unsigned __int128 int_val_;
            __float128        float_val_;
            __complex128      complex_val_;
            char32_t          char_val_;
            std::size_t       str_index_;
            std::size_t       id_index_;
        };
    };
};
#endif
