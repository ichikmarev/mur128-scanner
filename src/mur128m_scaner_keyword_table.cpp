#include "../include/mur128m_scaner_keyword_table.h"

namespace mur128m_scanner{
    const trans_table::Elem<Lexem_code> keywords_jump_table[] = {
        {const_cast<char32_t*>(U"p"),      Lexem_code::Id,                 1   }, // 0:   b..
        {const_cast<char32_t*>(U""),       Lexem_code::Id,                 0   }, // 1:   bp

        {const_cast<char32_t*>(U"bdn"),    Lexem_code::Id,              	2  }, // 2:   a...
        {const_cast<char32_t*>(U"s"),      Lexem_code::Id,              	3  }, // 2:   ab...
        {const_cast<char32_t*>(U"d"),      Lexem_code::Id,              	4  }, // 3:   ad...
        {const_cast<char32_t*>(U"d"),      Lexem_code::Id,              	5  }, // 3:   an...
        {const_cast<char32_t*>(U"f"),      Lexem_code::Id,             	 	6  }, // 3:   abs...
        {const_cast<char32_t*>(U"fi"),     Lexem_code::Id,               	7  }, // 3:   add...
        {const_cast<char32_t*>(U"n"),      Lexem_code::Id,               	8  }, // 3:   and
        {const_cast<char32_t*>(U""),       Lexem_code::Id,                 	0  }, // 3:   absf
        {const_cast<char32_t*>(U""),       Lexem_code::Id,                 	0  }, // 3:   addf
        {const_cast<char32_t*>(U""),       Lexem_code::Id,                 	0  }, // 3:   addi
        {const_cast<char32_t*>(U""),       Lexem_code::Id,                 	0  }, // 3:   andn

        {const_cast<char32_t*>(U"ahmo"),   Lexem_code::Id,             	   13  }, // 0:  c...
        {const_cast<char32_t*>(U"l"),      Lexem_code::Id,                14   }, // 0:  ca...
        {const_cast<char32_t*>(U"as"),     Lexem_code::Id,               15    }, // 0:  ch...
        {const_cast<char32_t*>(U"p"),      Lexem_code::Id,                16   }, // 0:  cm...
        {const_cast<char32_t*>(U"m"),      Lexem_code::Id,                17   }, // 0:  co...
        {const_cast<char32_t*>(U"l"),      Lexem_code::Id,                18   }, // 0:  cal...
        {const_cast<char32_t*>(U"r"),      Lexem_code::Id,                19   }, // 0:  cha...
        {const_cast<char32_t*>(U"f"),      Lexem_code::Id,                20   }, // 0:  chs...
        {const_cast<char32_t*>(U"fi"),     Lexem_code::Id,               21    }, // 0:  cmp...
        {const_cast<char32_t*>(U"p"),      Lexem_code::Id,                22   }, // 0:  com...
        {const_cast<char32_t*>(U"glprs"),  Lexem_code::Id,            		23 }, // 0:  call...
        {const_cast<char32_t*>(U""),       Lexem_code::Id,                  0  }, // 0:  char
        {const_cast<char32_t*>(U""),       Lexem_code::Id,                  0  }, // 0:  chsf
        {const_cast<char32_t*>(U""),       Lexem_code::Id,                  0  }, // 0:  cmpf
        {const_cast<char32_t*>(U"su"),     Lexem_code::Id,               27    }, // 0:  cmpi...
        {const_cast<char32_t*>(U"l"),      Lexem_code::Id,                28   }, // 0:  comp...
        {const_cast<char32_t*>(U"r"),      Lexem_code::Id,                  29 }, // 0:  calls
        {const_cast<char32_t*>(U""),       Lexem_code::Id,                  0  }, // 0:  callr
        {const_cast<char32_t*>(U"r"),      Lexem_code::Id,                  31 }, // 0:  callz
        {const_cast<char32_t*>(U"e"),      Lexem_code::Id,                  32 }, // 0:  callg...
        {const_cast<char32_t*>(U"z"),      Lexem_code::Id,                  33 }, // 0:  calln...
        {const_cast<char32_t*>(U"e"),      Lexem_code::Id,                  34 }, // 0:  calll...
        {const_cast<char32_t*>(U"r"),      Lexem_code::Id,                  42 }, // 0:  callnz..
        {const_cast<char32_t*>(U"r"),      Lexem_code::Id,                  43 }, // 0:  callle..
        {const_cast<char32_t*>(U""),       Lexem_code::Id,                  0  }, // 0:  callpr
        {const_cast<char32_t*>(U"x"),      Lexem_code::Id,                  45 }, // 0:  compl...
        {const_cast<char32_t*>(U""),       Lexem_code::Id,                    0}, // 0:  callger...
        {const_cast<char32_t*>(U""),       Lexem_code::Id,                  0  }, // 0:  ca
        {const_cast<char32_t*>(U""),       Lexem_code::Id,                  0  }, // 0:  ca
        {const_cast<char32_t*>(U"x"),      Lexem_code::Id,                  48 }, // 0:  ca
        {const_cast<char32_t*>(U"1368"),   Lexem_code::Id,               49    }, // 0:  ca
        {const_cast<char32_t*>(U"4"),      Lexem_code::Id,               50    }, // 0:  ca
        {const_cast<char32_t*>(U"2"),      Lexem_code::Id,               51    }, // 0:  ca
        {const_cast<char32_t*>(U"0"),      Lexem_code::Id,               52    }, // 0:  ca
        {const_cast<char32_t*>(U"2"),      Lexem_code::Id,               53    }, // 0:  ca
        {const_cast<char32_t*>(U"8"),      Lexem_code::Id,               53    }, // 0:  ca
        {const_cast<char32_t*>(U""),       Lexem_code::Id,               0     }, // 0:  ca
        {const_cast<char32_t*>(U""),       Lexem_code::Id,               0     }, // 0:  ca
        {const_cast<char32_t*>(U""),       Lexem_code::Id,               0     }, // 0:  ca
        {const_cast<char32_t*>(U""),       Lexem_code::Id,               0     }, // 0:  ca

        {const_cast<char32_t*>(U"i"),      Lexem_code::Id,           59        }, // 0:  d
        {const_cast<char32_t*>(U"v"),      Lexem_code::Id,           60        }, // 0:  d
        {const_cast<char32_t*>(U"fim"),    Lexem_code::Id,         61          }, // 0:  d
        {const_cast<char32_t*>(U""),       Lexem_code::Id,             0       }, // 0:  d
        {const_cast<char32_t*>(U"su"),     Lexem_code::Id,          63         }, // 0:  d
        {const_cast<char32_t*>(U"o"),      Lexem_code::Id,          64         }, // 0:  d
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  d
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  d
        {const_cast<char32_t*>(U"d"),      Lexem_code::Id,           67        }, // 0:  d
        {const_cast<char32_t*>(U"i"),      Lexem_code::Id,           68        }, // 0:  d
        {const_cast<char32_t*>(U"su"),     Lexem_code::Id,           69        }, // 0:  d
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  d
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  d

        {const_cast<char32_t*>(U"lr"),     Lexem_code::Id,           72        }, // 0:  f
        {const_cast<char32_t*>(U"do"),     Lexem_code::Id,           73        }, // 0:  f
        {const_cast<char32_t*>(U"a"),      Lexem_code::Id,            74       }, // 0:  f
        {const_cast<char32_t*>(U"z1"),     Lexem_code::Id,           75        }, // 0:  f
        {const_cast<char32_t*>(U"a"),      Lexem_code::Id,           76        }, // 0:  f
        {const_cast<char32_t*>(U"c"),      Lexem_code::Id,           77        }, // 0:  f
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  f
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  f
        {const_cast<char32_t*>(U"t"),      Lexem_code::Id,           80        }, // 0:  f
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  f
        {const_cast<char32_t*>(U"1368"),   Lexem_code::Id,           82        }, // 0:  f
        {const_cast<char32_t*>(U"2"),      Lexem_code::Id,           83        }, // 0:  f
        {const_cast<char32_t*>(U"2"),      Lexem_code::Id,           84        }, // 0:  f
        {const_cast<char32_t*>(U"6"),      Lexem_code::Id,           85        }, // 0:  f
        {const_cast<char32_t*>(U"0"),      Lexem_code::Id,           86        }, // 0:  f
        {const_cast<char32_t*>(U"8"),      Lexem_code::Id,           87        }, // 0:  f
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  f
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  f
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  f
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  f

        {const_cast<char32_t*>(U"m"),      Lexem_code::Id,           92        }, // 0:  j
        {const_cast<char32_t*>(U"p"),      Lexem_code::Id,           93        }, // 0:  j
        {const_cast<char32_t*>(U"glnprsz"),Lexem_code::Id,     94              }, // 0:  j
        {const_cast<char32_t*>(U"r"),      Lexem_code::Id,           95        }, // 0:  j
        {const_cast<char32_t*>(U"e"),      Lexem_code::Id,           96        }, // 0:  j
        {const_cast<char32_t*>(U"e"),      Lexem_code::Id,           97        }, // 0:  j
        {const_cast<char32_t*>(U""),       Lexem_code::Id,             0       }, // 0:  j
        {const_cast<char32_t*>(U"z"),      Lexem_code::Id,           99        }, // 0:  j
        {const_cast<char32_t*>(U"r"),      Lexem_code::Id,           100       }, // 0:  j
        {const_cast<char32_t*>(U"r"),      Lexem_code::Id,           101       }, // 0:  j
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  j
        {const_cast<char32_t*>(U"r"),      Lexem_code::Id,           103       }, // 0:  j
        {const_cast<char32_t*>(U"r"),      Lexem_code::Id,           104       }, // 0:  j
        {const_cast<char32_t*>(U"r"),      Lexem_code::Id,           105       }, // 0:  j
        {const_cast<char32_t*>(U""),       Lexem_code::Id,            0        }, // 0:  j
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  j
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  j
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  j
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  j
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  j

        {const_cast<char32_t*>(U"n"),      Lexem_code::Id,           111       }, // 0:  i
        {const_cast<char32_t*>(U"t"),      Lexem_code::Id,           112       }, // 0:  i
        {const_cast<char32_t*>(U"1368"),   Lexem_code::Id,        113          }, // 0:  i
        {const_cast<char32_t*>(U""),       Lexem_code::Id,                     }, // 0:  i
        {const_cast<char32_t*>(U"26"),     Lexem_code::Id,           115       }, // 0:  i
        {const_cast<char32_t*>(U"2"),      Lexem_code::Id,            11       }, // 0:  i
        {const_cast<char32_t*>(U"4"),      Lexem_code::Id,            11       }, // 0:  i
        {const_cast<char32_t*>(U"2"),      Lexem_code::Id,           118       }, // 0:  i
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  i
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  i
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  i
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  i

        {const_cast<char32_t*>(U"i"),      Lexem_code::Id,           123       }, // 0:  u
        {const_cast<char32_t*>(U"n"),      Lexem_code::Id,           124       }, // 0:  u
        {const_cast<char32_t*>(U"t"),      Lexem_code::Id,           125       }, // 0:  u
        {const_cast<char32_t*>(U"1368"),   Lexem_code::Id,        126          }, // 0:  u
        {const_cast<char32_t*>(U""),       Lexem_code::Id,                     }, // 0:  u
        {const_cast<char32_t*>(U"26"),     Lexem_code::Id,           128       }, // 0:  u
        {const_cast<char32_t*>(U"2"),      Lexem_code::Id,            12       }, // 0:  u
        {const_cast<char32_t*>(U"4"),      Lexem_code::Id,            13       }, // 0:  u
        {const_cast<char32_t*>(U"2"),      Lexem_code::Id,           131       }, // 0:  u
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  u
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  u
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  u
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  u

        {const_cast<char32_t*>(U"r"),      Lexem_code::Id,           136       }, // 0:  o
        {const_cast<char32_t*>(U"n"),      Lexem_code::Id,           137       }, // 0:  o
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  o

        {const_cast<char32_t*>(U"o"),      Lexem_code::Id,           139       }, // 0:  x
        {const_cast<char32_t*>(U"r"),      Lexem_code::Id,           140       }, // 0:  x
        {const_cast<char32_t*>(U"n"),      Lexem_code::Id,           141       }, // 0:  x
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  x

        {const_cast<char32_t*>(U"s"),      Lexem_code::Id,           143       }, // 0:  l
        {const_cast<char32_t*>(U"h"),      Lexem_code::Id,           144       }, // 0:  l
        {const_cast<char32_t*>(U"i"),      Lexem_code::Id,           145       }, // 0:  l
        {const_cast<char32_t*>(U"f"),      Lexem_code::Id,           146       }, // 0:  l
        {const_cast<char32_t*>(U"t"),      Lexem_code::Id,           147       }, // 0:  l
        {const_cast<char32_t*>(U"s"),      Lexem_code::Id,           148       }, // 0:  l
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  l

        {const_cast<char32_t*>(U"o"),      Lexem_code::Id,           150       }, // 0:  n
        {const_cast<char32_t*>(U"t"),      Lexem_code::Id,           151       }, // 0:  n
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  n

        {const_cast<char32_t*>(U"r"),      Lexem_code::Id,           153       }, // 0:  t
        {const_cast<char32_t*>(U"a"),      Lexem_code::Id,           154       }, // 0:  t
        {const_cast<char32_t*>(U"p"),      Lexem_code::Id,           155       }, // 0:  t
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  t

        {const_cast<char32_t*>(U"eos"),    Lexem_code::Id,           157       }, // 0:  r
		{const_cast<char32_t*>(U"u"),      Lexem_code::Id,           158       }, // 0: r
		{const_cast<char32_t*>(U"t"),      Lexem_code::Id,           159       }, // 0:  r
		{const_cast<char32_t*>(U"h"),      Lexem_code::Id,           160       }, // 0:  r
		{const_cast<char32_t*>(U"n"),      Lexem_code::Id,           161       }, // 0:  r
		{const_cast<char32_t*>(U"agilnps"),Lexem_code::Id,           162       }, // 0:  r
		{const_cast<char32_t*>(U"i"),      Lexem_code::Id,           163       }, // 0:  r
		{const_cast<char32_t*>(U"d"),      Lexem_code::Id,           164       }, // 0:  r
		{const_cast<char32_t*>(U"glnps"),  Lexem_code::Id,           164       }, // 0:  r
		{const_cast<char32_t*>(U"z"),      Lexem_code::Id,           165       }, // 0:  r
		{const_cast<char32_t*>(U"e"),      Lexem_code::Id,           166       }, // 0:  r
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  r
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  r
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  r
		{const_cast<char32_t*>(U"e"),      Lexem_code::Id,           171       }, // 0:  r
		{const_cast<char32_t*>(U"f"),      Lexem_code::Id,           172       }, // 0:  r
		{const_cast<char32_t*>(U"ghlt"),   Lexem_code::Id,           173       }, // 0:  r
		{const_cast<char32_t*>(U"f"),      Lexem_code::Id,           172       }, // 0:  r
		{const_cast<char32_t*>(U"e"),      Lexem_code::Id,           174       }, // 0:  r
		{const_cast<char32_t*>(U"e"),      Lexem_code::Id,           175       }, // 0:  r
		{const_cast<char32_t*>(U"z"),      Lexem_code::Id,           176       }, // 0:  r
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  r
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  r
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  r
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  r
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  r
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  r
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  r
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  r
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  r
		{const_cast<char32_t*>(U"s"),      Lexem_code::Id,           187       }, // 0:  r
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  r

        {const_cast<char32_t*>(U"t"),      Lexem_code::Id,           189       }, // 0:  s
        {const_cast<char32_t*>(U"r"),      Lexem_code::Id,           190       }, // 0:  s
        {const_cast<char32_t*>(U"i"),      Lexem_code::Id,           191       }, // 0:  s
        {const_cast<char32_t*>(U"n"),      Lexem_code::Id,           192       }, // 0:  s
        {const_cast<char32_t*>(U"g"),      Lexem_code::Id,           193       }, // 0:  s
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  s

        {const_cast<char32_t*>(U"ou"),     Lexem_code::Id,           195       }, // 0:  p
        {const_cast<char32_t*>(U"s"),      Lexem_code::Id,           196       }, // 0:  p
        {const_cast<char32_t*>(U"p"),      Lexem_code::Id,           197       }, // 0:  p
        {const_cast<char32_t*>(U"h"),      Lexem_code::Id,           198       }, // 0:  p
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  p
        {const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  p

        {const_cast<char32_t*>(U"ou"),     Lexem_code::Id,           201       }, // 0:  m
		{const_cast<char32_t*>(U"v"),      Lexem_code::Id,           202       }, // 0:  m
		{const_cast<char32_t*>(U"l"),      Lexem_code::Id,           203       }, // 0:  m
		{const_cast<char32_t*>(U"1368us"), Lexem_code::Id,           204       }, // 0:  m
		{const_cast<char32_t*>(U"2i"),     Lexem_code::Id,           205       }, // 0:  m
		{const_cast<char32_t*>(U"6"),      Lexem_code::Id,           206       }, // 0:  m
		{const_cast<char32_t*>(U"2"),      Lexem_code::Id,           207       }, // 0:  m
		{const_cast<char32_t*>(U"4"),      Lexem_code::Id,           208       }, // 0:  m
		{const_cast<char32_t*>(U"0us"),    Lexem_code::Id,           209       }, // 0:  m
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  m
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  m
		{const_cast<char32_t*>(U"f"),      Lexem_code::Id,           212       }, // 0:  m
		{const_cast<char32_t*>(U"us"),     Lexem_code::Id,           213       }, // 0:  m
		{const_cast<char32_t*>(U"us"),     Lexem_code::Id,           214       }, // 0:  m
		{const_cast<char32_t*>(U"fus"),    Lexem_code::Id,           215       }, // 0:  m
		{const_cast<char32_t*>(U"fus"),    Lexem_code::Id,           216       }, // 0:  m
		{const_cast<char32_t*>(U"f"),      Lexem_code::Id,           217       }, // 0:  m
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  m
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  m
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  m
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  m
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  m
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  m
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  m
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  m
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  m
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  m
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  m
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  m
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  m
		{const_cast<char32_t*>(U""),       Lexem_code::Id,           0         }, // 0:  m

    };
};
