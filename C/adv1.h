/* adv1.h: Skeleton Adventure - copyright Mike Arnautov 2018. Licensed under
 * GPL (version 3 or later) or the Modified BSD Licence, whichever
 * is asserted by the supplied LICENCE file.*/

#ifndef ADV1_H
#define ADV1_H
#define GAME_NAME "Skeleton Adventure"
#define GAME_VERSION "3.0"
#define GAME_ID "Skeleton Adventure version 3.0, 2009-Jul-23"
#define STYLE 12
#ifndef ADV01
#define GAME_DATE "2009-Jul-23"
#define ACDC_VERSION "12.38, 12 Oct 2018"
#if defined(MSDOS) || defined(_WIN32)
#  define PERSISTENT_DATA "_skeleton.adp"
#  define CGINAME "_skeleton"
#else
#  define PERSISTENT_DATA ".skeleton.adp"
#  define CGINAME ".skeleton"
#endif
#define DBNAME "skeleton.dat"
#define OBJSIZE 2
#define LOCSIZE 1
#define VARSIZE 1
#define FOBJ 3
#define LOBJ 7
#define FLOC 8
#define LLOC 12
#define FVERB 13
#define LVERB 73
#define FVAR 74
#define LVAR 97
#define FTEXT 97
#define LTEXT 227
#define NOISE 19
#define KNOT 119
#define VOCAB_SIZE 178
#define INHAND 12
#define HERE 92
#define THERE 93
#define STATUS 78
#define ARG1 94
#define ARG2 95
#define ARG3 96
#define SCHIZOID 6
#define JUGGLED 7
#define MOVED 0
#define PLSCLARIFY 6
#define AGAIN 14
#define ALL 3
#define IT 5
#define FSPECIAL 13
#define LSPECIAL 20
#define SAY 19
#define BADWORD -2
#define AMBIGWORD -3
#define AMBIGTYPO -4
#define SCENEWORD -5
#define BADSYNTAX -6
#define NO_MATCH 98
#define NO_AMATCH 99
#define OBJ 0
#define LOC 1
#define VERB 2
#define FULL 4
#define BEENHERE 4
#define TERSE 3
#define BRIEF 2
#define PLAIN 0
#define DBSTATUS 0
#define LPROC 74
#define KEY(X) (value[94]==X || value[95]==X)
#define INIT_PROC p1
#define REPEAT_PROC p2
#endif
#define TEXT_BYTES 19540
#endif
