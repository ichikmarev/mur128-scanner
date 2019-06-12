/*
    File:    mur128m_scaner_keyword_table.cpp
    Author:  Chikmarev Ilya
*/

#include "../include/mur128m_scaner_keyword_table.h"

namespace mur128m_scanner{
  const trans_table::Elem<Lexem_code> keywords_jump_table[] = {
    {const_cast<char32_t*>(U"p"),     Lexem_code::Id,            1}, // 0: b
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 1: bp

    {const_cast<char32_t*>(U"bdn"),   Lexem_code::Id,            3}, // 2: a...
    {const_cast<char32_t*>(U"s"),     Lexem_code::Id,            6}, // 3: ab...
    {const_cast<char32_t*>(U"d"),     Lexem_code::Id,            7}, // 4: ad...
    {const_cast<char32_t*>(U"d"),     Lexem_code::Id,            8}, // 5: an...
    {const_cast<char32_t*>(U"f"),     Lexem_code::Id,            9}, // 6: abs...
    {const_cast<char32_t*>(U"fi"),    Lexem_code::Id,           11}, // 7: add...
    {const_cast<char32_t*>(U"n"),     Lexem_code::Register,     12}, // 8: and
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 9: absf
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 10: addf
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 11: addi
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 12: andn

    {const_cast<char32_t*>(U"ahmo"),  Lexem_code::Id,           14}, // 13: c...
    {const_cast<char32_t*>(U"l"),     Lexem_code::Id,           18}, // 14: ca...
    {const_cast<char32_t*>(U"as"),    Lexem_code::Id,           19}, // 15: ch...
    {const_cast<char32_t*>(U"p"),     Lexem_code::Id,           21}, // 16: cm...
    {const_cast<char32_t*>(U"m"),     Lexem_code::Id,           22}, // 17: co...
    {const_cast<char32_t*>(U"l"),     Lexem_code::Id,           23}, // 18: cal...
    {const_cast<char32_t*>(U"r"),     Lexem_code::Id,          	24}, // 19: cha...
    {const_cast<char32_t*>(U"f"),     Lexem_code::Id,           25}, // 20: chs...
    {const_cast<char32_t*>(U"fi"),    Lexem_code::Id,           26}, // 21: cmp...
    {const_cast<char32_t*>(U"p"),     Lexem_code::Id,           28}, // 22: com...
    {const_cast<char32_t*>(U"srzgnlp"),Lexem_code::Register,    29}, // 23: call...
    {const_cast<char32_t*>(U""),      Lexem_code::KwChar,        0}, // 24: char
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 25: chfs
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 26: cmpf
    {const_cast<char32_t*>(U"su"),    Lexem_code::Id,           36}, // 27: cmpi...
    {const_cast<char32_t*>(U"l"),     Lexem_code::Id,           38}, // 28: comp...
    {const_cast<char32_t*>(U"r"),     Lexem_code::Register,     39}, // 29: calls...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 30: callr
    {const_cast<char32_t*>(U"r"),     Lexem_code::Register,     40}, // 31: callz...
    {const_cast<char32_t*>(U"e"),     Lexem_code::Id,           41}, // 32: callg...
    {const_cast<char32_t*>(U"z"),     Lexem_code::Id,           42}, // 33: calln...
    {const_cast<char32_t*>(U"e"),     Lexem_code::Register,     43}, // 34: calll...
    {const_cast<char32_t*>(U"r"),     Lexem_code::Register,     44}, // 35: callp...
    {const_cast<char32_t*>(U""),      Lexem_code::Id,            0}, // 36: cmpiu
    {const_cast<char32_t*>(U""),      Lexem_code::Id,            0}, // 37: cmpis
    {const_cast<char32_t*>(U"e"),     Lexem_code::Id,           45}, // 38: compl...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 39: callsr
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 40: callzr
    {const_cast<char32_t*>(U"r"),     Lexem_code::Register,     46}, // 41: callge...
    {const_cast<char32_t*>(U"r"),     Lexem_code::Id,           47}, // 42: callnz...
    {const_cast<char32_t*>(U"r"),     Lexem_code::Id,           48}, // 43: callle...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 44: callpr
    {const_cast<char32_t*>(U"x"),     Lexem_code::Id,           49}, // 45: comple...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 46: callger
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 47: callnzr
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 48: calller
    {const_cast<char32_t*>(U"1368"),  Lexem_code::Id,           50}, // 49: complex...
    {const_cast<char32_t*>(U"2"),     Lexem_code::Id,           54}, // 50: complex1...
    {const_cast<char32_t*>(U"2"),     Lexem_code::Id,           55}, // 51: complex3...
    {const_cast<char32_t*>(U"4"),     Lexem_code::Id,           56}, // 52: complex6...
    {const_cast<char32_t*>(U"0"),     Lexem_code::Id,           57}, // 53: complex8...
    {const_cast<char32_t*>(U"8"),     Lexem_code::Id,           58}, // 54: complex12..
    {const_cast<char32_t*>(U""),      Lexem_code::KwComplex32,   0}, // 55: complex32
    {const_cast<char32_t*>(U""),      Lexem_code::KwComplex64,   0}, // 56: complex64
    {const_cast<char32_t*>(U""),      Lexem_code::KwComplex80,   0}, // 57: complex80
    {const_cast<char32_t*>(U""),      Lexem_code::KwComplex128,  0}, // 58: complex128


    {const_cast<char32_t*>(U"i"),     Lexem_code::Id,           60}, // 59: d...
    {const_cast<char32_t*>(U"v"),     Lexem_code::Id,           61}, // 60: di...
    {const_cast<char32_t*>(U"fim"),   Lexem_code::Id,           62}, // 61: div...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 62: divf
    {const_cast<char32_t*>(U"su"),    Lexem_code::Id,           65}, // 63: divi...
    {const_cast<char32_t*>(U"o"),     Lexem_code::Id,           67}, // 64: divm...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 65: divis
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 66: diviu
    {const_cast<char32_t*>(U"d"),     Lexem_code::Id,           68}, // 67: divmo...
    {const_cast<char32_t*>(U"i"),     Lexem_code::Id,           69}, // 68: divmod...
    {const_cast<char32_t*>(U"su"),    Lexem_code::Id,           70}, // 69: divmodi...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 70: divmodis
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 71: divmodiu

    {const_cast<char32_t*>(U"lor"),   Lexem_code::Id,           73}, // 72: f...
    {const_cast<char32_t*>(U"do"),    Lexem_code::Id,           76}, // 73: fl...
    {const_cast<char32_t*>(U"r"),     Lexem_code::Id,           78}, // 74: fo...
    {const_cast<char32_t*>(U"a"),     Lexem_code::Id,           79}, // 75: fr...
    {const_cast<char32_t*>(U"z1"),    Lexem_code::Id,           80}, // 76: fld...
    {const_cast<char32_t*>(U"a"),     Lexem_code::Id,           82}, // 77: flo...
    {const_cast<char32_t*>(U"m"),     Lexem_code::Id,           83}, // 78: for...
    {const_cast<char32_t*>(U"c"),     Lexem_code::Id,            0}, // 79: fra...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 80: fld1
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 81: fldz
    {const_cast<char32_t*>(U"t"),     Lexem_code::Id,           85}, // 82: floa...
    {const_cast<char32_t*>(U"a"),     Lexem_code::Id,           86}, // 83: form...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 84: frac
    {const_cast<char32_t*>(U"1368"),  Lexem_code::Id,           87}, // 85: float...
    {const_cast<char32_t*>(U"t"),     Lexem_code::Id,           91}, // 86: forma...
    {const_cast<char32_t*>(U"2"),     Lexem_code::Id,           92}, // 87: float1...
    {const_cast<char32_t*>(U"2"),     Lexem_code::Id,           93}, // 88: float3...
    {const_cast<char32_t*>(U"4"),     Lexem_code::Id,    	94}, // 89: float6...
    {const_cast<char32_t*>(U"0"),     Lexem_code::Id,   	95}, // 90: float8...
    {const_cast<char32_t*>(U""),      Lexem_code::KwFormat,      0}, // 91: format
    {const_cast<char32_t*>(U"8"),     Lexem_code::Id,           96}, // 92: float12...
    {const_cast<char32_t*>(U""),      Lexem_code::KwFloat32,     0}, // 93: float32
    {const_cast<char32_t*>(U""),      Lexem_code::KwFloat64,     0}, // 94: float64
    {const_cast<char32_t*>(U""),      Lexem_code::KwFloat80,     0}, // 95: float80
    {const_cast<char32_t*>(U""),      Lexem_code::KwFloat128,    0}, // 96: float128

    {const_cast<char32_t*>(U"m"),     Lexem_code::Id,           98}, // 97: j...
    {const_cast<char32_t*>(U"p"),     Lexem_code::Id,           99}, // 98: jm...
    {const_cast<char32_t*>(U"glnprsz"),Lexem_code::Register,   100}, // 99: jmp...
    {const_cast<char32_t*>(U"e"),     Lexem_code::Id,          107}, // 100: jmpg...
    {const_cast<char32_t*>(U"e"),     Lexem_code::Id,          108}, // 101: jmpl...
    {const_cast<char32_t*>(U"z"),     Lexem_code::Id,          109}, // 102: jmpn...
    {const_cast<char32_t*>(U"r"),     Lexem_code::Id,          110}, // 103: jmpp...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 104: jmpr
    {const_cast<char32_t*>(U"r"),     Lexem_code::Id,          111}, // 105: jmps...
    {const_cast<char32_t*>(U"r"),     Lexem_code::Id,          112}, // 106: jmpz...
    {const_cast<char32_t*>(U"r"),     Lexem_code::Register,    113}, // 107: jmpge...
    {const_cast<char32_t*>(U"r"),     Lexem_code::Register,    114}, // 108: jmple...
    {const_cast<char32_t*>(U"r"),     Lexem_code::Register,    115}, // 109: jmpnz...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 110: jmppr
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 111: jmpsr
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 112: jmpzr
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 113: jmpger
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 114: jmpler
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 115: jmpnzr

    {const_cast<char32_t*>(U"n"),     Lexem_code::Id,          117}, // 116: i...
    {const_cast<char32_t*>(U"t"),     Lexem_code::Id,          118}, // 117: in...
    {const_cast<char32_t*>(U"8136"),  Lexem_code::Id,          119}, // 118: int...
    {const_cast<char32_t*>(U""),      Lexem_code::KwInt8,        0}, // 119: int8
    {const_cast<char32_t*>(U"26"),    Lexem_code::Id,          123}, // 120: int1...
    {const_cast<char32_t*>(U"2"),     Lexem_code::Id,          125}, // 121: int3...
    {const_cast<char32_t*>(U"4"),     Lexem_code::Id,          126}, // 122: int6...
    {const_cast<char32_t*>(U"8"),     Lexem_code::Id,          127}, // 123: int12...
    {const_cast<char32_t*>(U""),      Lexem_code::KwInt16,       0}, // 124: int16
    {const_cast<char32_t*>(U""),      Lexem_code::KwInt32,       0}, // 125: int32
    {const_cast<char32_t*>(U""),      Lexem_code::KwInt64,       0}, // 126: int64
    {const_cast<char32_t*>(U""),      Lexem_code::KwInt128,      0}, // 127: int128

    {const_cast<char32_t*>(U"i"),     Lexem_code::Id,          129}, // 128: u...
    {const_cast<char32_t*>(U"n"),     Lexem_code::Id,          130}, // 129: ui...
    {const_cast<char32_t*>(U"t"),     Lexem_code::Id,          131}, // 130: uin...
    {const_cast<char32_t*>(U"8136"),  Lexem_code::Id,          132}, // 131: uint...
    {const_cast<char32_t*>(U""),      Lexem_code::KwUInt8,       0}, // 132: uint8
    {const_cast<char32_t*>(U"26"),    Lexem_code::Id,          136}, // 133: uint1...
    {const_cast<char32_t*>(U"2"),     Lexem_code::Id,          138}, // 134: uint3...
    {const_cast<char32_t*>(U"4"),     Lexem_code::Id,          139}, // 135: uint6...
    {const_cast<char32_t*>(U"8"),     Lexem_code::Id,          140}, // 136: uint12...
    {const_cast<char32_t*>(U""),      Lexem_code::KwUInt16,      0}, // 137: uint16
    {const_cast<char32_t*>(U""),      Lexem_code::KwUInt32,      0}, // 138: uint32
    {const_cast<char32_t*>(U""),      Lexem_code::KwUInt64,      0}, // 139: uint64
    {const_cast<char32_t*>(U""),      Lexem_code::KwUInt128,     0}, // 140: uint128
 
    {const_cast<char32_t*>(U"r"),     Lexem_code::Id,          142}, // 141: o...
    {const_cast<char32_t*>(U"n"),     Lexem_code::Register,    143}, // 142: or...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 143: orn...

    {const_cast<char32_t*>(U"o"),     Lexem_code::Id,          145}, // 144: x...
    {const_cast<char32_t*>(U"r"),     Lexem_code::Id,          146}, // 145: xo...
    {const_cast<char32_t*>(U"n"),     Lexem_code::Register,    147}, // 146: xor...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 147: xorn...

    {const_cast<char32_t*>(U"s"),     Lexem_code::Id,          149}, // 148: l...
    {const_cast<char32_t*>(U"h"),     Lexem_code::Id,          150}, // 149: ls...
    {const_cast<char32_t*>(U"i"),     Lexem_code::Id,          151}, // 150: lsh...
    {const_cast<char32_t*>(U"f"),     Lexem_code::Id,          152}, // 151: lshi...
    {const_cast<char32_t*>(U"t"),     Lexem_code::Id,          153}, // 152: lshif...
    {const_cast<char32_t*>(U"s"),     Lexem_code::Register,    154}, // 153: lshift...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 154: lshifts

    {const_cast<char32_t*>(U"o"),     Lexem_code::Id,          156}, // 155: n...
    {const_cast<char32_t*>(U"t"),     Lexem_code::Id,          157}, // 156: no...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 157: not...

    {const_cast<char32_t*>(U"r"),     Lexem_code::Id,          159}, // 158: t...
    {const_cast<char32_t*>(U"a"),     Lexem_code::Id,          160}, // 159: tr...
    {const_cast<char32_t*>(U"p"),     Lexem_code::Id,          161}, // 160: tra...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 161: trap
 
    {const_cast<char32_t*>(U"eos"),   Lexem_code::Id,          163}, // 162: r...
    {const_cast<char32_t*>(U"ta"),    Lexem_code::Id,          166}, // 163: re...
    {const_cast<char32_t*>(U"u"),     Lexem_code::Id,          168}, // 164: ro...
    {const_cast<char32_t*>(U"h"),     Lexem_code::Id,          169}, // 165: rs...
    {const_cast<char32_t*>(U"zgilnspa"),Lexem_code::Id,        170}, // 166: ret...
    {const_cast<char32_t*>(U"d"),     Lexem_code::Id,          177}, // 167: rea...
    {const_cast<char32_t*>(U"n"),     Lexem_code::Id,          178}, // 168: rou...
    {const_cast<char32_t*>(U"i"),     Lexem_code::Id,          179}, // 169: rsh...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 170: retz
    {const_cast<char32_t*>(U"e"),     Lexem_code::Id,          180}, // 171: retg...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 172: reti
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 173: retl
    {const_cast<char32_t*>(U"z"),     Lexem_code::Register,    181}, // 174: retn...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 175: retp
    {const_cast<char32_t*>(U"gipln"), Lexem_code::Id,          182}, // 176: reta...
    {const_cast<char32_t*>(U"a"),     Lexem_code::Id,          188}, // 177: read...
    {const_cast<char32_t*>(U"d"),     Lexem_code::Id,          189}, // 178: roun...
    {const_cast<char32_t*>(U"f"),     Lexem_code::Id,          190}, // 179: rshi...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 180: retge
    {const_cast<char32_t*>(U""),      Lexem_code::Register,    175}, // 181: retnz...
    {const_cast<char32_t*>(U"e"),     Lexem_code::Register,    192}, // 182: retag..
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 183: retai
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 184: retap
    {const_cast<char32_t*>(U"e"),     Lexem_code::Register,    193}, // 185: retal...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 186: retaz
    {const_cast<char32_t*>(U"z"),     Lexem_code::Register,    194}, // 187: retan...
    {const_cast<char32_t*>(U"b"),     Lexem_code::Id,          195}, // 188: reada...
    {const_cast<char32_t*>(U"glnt"),  Lexem_code::Id,          196}, // 189: round...
    {const_cast<char32_t*>(U"t"),     Lexem_code::Id,            0}, // 190: rshif...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 191: rets
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 192: retge
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 193: retale
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 194: retanz
    {const_cast<char32_t*>(U"l"),     Lexem_code::Id,          201}, // 195: readab..
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 196: roundg
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 197: roundn
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 198: roundl
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 199: roundt
    {const_cast<char32_t*>(U"s"),     Lexem_code::Register,    202}, // 200: rshift
    {const_cast<char32_t*>(U"e"),     Lexem_code::Id,          203}, // 201: readable
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 202: rshifts
    {const_cast<char32_t*>(U""),      Lexem_code::KwReadable,    0}, // 203: readable

    {const_cast<char32_t*>(U"et"),    Lexem_code::Id,          205}, // 204: s...
    {const_cast<char32_t*>(U"c"),     Lexem_code::Id,          207}, // 205: se...
    {const_cast<char32_t*>(U"r"),     Lexem_code::Id,          208}, // 206: st...
    {const_cast<char32_t*>(U"t"),     Lexem_code::Id,          209}, // 207: sec...
    {const_cast<char32_t*>(U"i"),     Lexem_code::Id,          210}, // 208: str...
    {const_cast<char32_t*>(U"i"),     Lexem_code::Id,          211}, // 209: sect...
    {const_cast<char32_t*>(U"n"),     Lexem_code::Id,          212}, // 210: stri...
    {const_cast<char32_t*>(U"o"),     Lexem_code::Id,          213}, // 211: secti...
    {const_cast<char32_t*>(U"g"),     Lexem_code::Id,          214}, // 212: strin...
    {const_cast<char32_t*>(U"n"),     Lexem_code::Id,          215}, // 213: sectio...
    {const_cast<char32_t*>(U""),      Lexem_code::KwString,      0}, // 214: string
    {const_cast<char32_t*>(U""),      Lexem_code::KwSection,     0}, // 215: section

    {const_cast<char32_t*>(U"uo"),    Lexem_code::Id,          217}, // 216: p...
    {const_cast<char32_t*>(U"s"),     Lexem_code::Id,          219}, // 217: pu...
    {const_cast<char32_t*>(U"p"),     Lexem_code::Id,          220}, // 218: po...
    {const_cast<char32_t*>(U"h"),     Lexem_code::Id,          221}, // 219: pus...
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 220: pop
    {const_cast<char32_t*>(U""),      Lexem_code::Register,      0}, // 221: push

    {const_cast<char32_t*>(U"x"),     Lexem_code::Id,          223}, // 222: e...
    {const_cast<char32_t*>(U"e"),     Lexem_code::Id,          224}, // 223: ex...
    {const_cast<char32_t*>(U"c"),     Lexem_code::Id,          225}, // 224: exe...
    {const_cast<char32_t*>(U"u"),     Lexem_code::Id,          226}, // 225: exec...
    {const_cast<char32_t*>(U"t"),     Lexem_code::Id,          227}, // 226: execu...
    {const_cast<char32_t*>(U"a"),     Lexem_code::Id,          228}, // 227: execut...
    {const_cast<char32_t*>(U"b"),     Lexem_code::Id,          229}, // 228: executa...
    {const_cast<char32_t*>(U"l"),     Lexem_code::Id,          230}, // 229: executab...
    {const_cast<char32_t*>(U"e"),     Lexem_code::Id, 	       231}, // 230: executabl...
    {const_cast<char32_t*>(U""),      Lexem_code::KwExecutable,  0}, // 231: executable

    {const_cast<char32_t*>(U"r"),     Lexem_code::Id,          233}, // 232: w...
    {const_cast<char32_t*>(U"i"),     Lexem_code::Id,          234}, // 233: wr...
    {const_cast<char32_t*>(U"t"),     Lexem_code::Id,          235}, // 234: wri...
    {const_cast<char32_t*>(U"a"),     Lexem_code::Id,          236}, // 235: writ...
    {const_cast<char32_t*>(U"b"),     Lexem_code::Id,          237}, // 236: writa...
    {const_cast<char32_t*>(U"l"),     Lexem_code::Id,          238}, // 237: writab...
    {const_cast<char32_t*>(U"e"),     Lexem_code::Id,          239}, // 238: writabl...
    {const_cast<char32_t*>(U""),      Lexem_code::KwWritable,    0}, // 239: writable

    /*{const_cast<char32_t*>(U"ou"),   Lexem_code::Id,           201}, // 196: m
    {const_cast<char32_t*>(U"v"),   Lexem_code::Id,           202}, // 197: m
    {const_cast<char32_t*>(U"l"),   Lexem_code::Id,           203}, // 198: m
    {const_cast<char32_t*>(U"1368us"),   Lexem_code::Id,           204}, // 199: m
    {const_cast<char32_t*>(U"2i"),   Lexem_code::Id,           205}, // 200: m
    {const_cast<char32_t*>(U"6"),   Lexem_code::Id,           206}, // 201: m
    {const_cast<char32_t*>(U"2"),   Lexem_code::Id,           207}, // 202: m
    {const_cast<char32_t*>(U"4"),   Lexem_code::Id,           208}, // 203: m
    {const_cast<char32_t*>(U"0us"),   Lexem_code::Id,           209}, // 204: m
    {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 205: m
    {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 206: m
    {const_cast<char32_t*>(U"f"),   Lexem_code::Id,           212}, // 207: m
    {const_cast<char32_t*>(U"us"),   Lexem_code::Id,           213}, // 208: m
    {const_cast<char32_t*>(U"us"),   Lexem_code::Id,           214}, // 209: m
    {const_cast<char32_t*>(U"fus"),   Lexem_code::Id,           215}, // 210: m
    {const_cast<char32_t*>(U"fus"),   Lexem_code::Id,           216}, // 211: m
    {const_cast<char32_t*>(U"f"),   Lexem_code::Id,           217}, // 212: m
    {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 213: m
    {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 214: m
    {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 215: m
    {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 216: m
    {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 217: m
    {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 218: m
    {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 219: m
    {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 220: m
    {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 221: m
    {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 222: m
    {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 223: m
    {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 224: m
    {const_cast<char32_t*>(U""),   Lexem_code::Id,           0}, // 225: m
    {const_cast<char32_t*>(U""),   Lexem_code::Id,            0}, // 226: m*/

  };
};
