/*
:comment "Compiled at 9:29:40 am on Wednesday, June 22, 1994"
:comment "Compiler Configuration: DEFAULT"
:comment "Machine Configuration: SparcStation (gcc)"
:comment "cc command: gcc -w  -g -O -DSYSV "
:version 0
:package (IN-PACKAGE "XP" :USE (QUOTE ("LISP"))) 
:end-package-info 0
:sym WRITE
:sym PRINT
:sym PRIN1
:sym PRINC
:sym PPRINT
:sym FORMAT
:sym WRITE-TO-STRING
:sym PRINC-TO-STRING
:sym PRIN1-TO-STRING
:sym WRITE-LINE
:sym WRITE-STRING
:sym WRITE-CHAR
:sym TERPRI
:sym FRESH-LINE
:sym DEFSTRUCT
:sym FINISH-OUTPUT
:sym FORCE-OUTPUT
:sym CLEAR-OUTPUT
:sym NIL
:sym SHADOW
:sym FORMATTER
:sym COPY-PPRINT-DISPATCH
:sym PPRINT-DISPATCH
:sym SET-PPRINT-DISPATCH
:sym PPRINT-FILL
:sym PPRINT-LINEAR
:sym PPRINT-TABULAR
:sym PPRINT-LOGICAL-BLOCK
:sym PPRINT-POP
:sym PPRINT-EXIT-IF-LIST-EXHAUSTED
:sym PPRINT-NEWLINE
:sym PPRINT-INDENT
:sym PPRINT-TAB
:sym *PRINT-PPRINT-DISPATCH*
:sym *PRINT-RIGHT-MARGIN*
:sym *DEFAULT-RIGHT-MARGIN*
:sym *PRINT-MISER-WIDTH*
:sym *PRINT-LINES*
:sym *LAST-ABBREVIATED-PRINTING*
:sym *PRINT-SHARED*
:sym EXPORT
:sf PACKAGE-SETUP_INIT3 "p_xp_PACKAGE_2DSETUP_5FINIT3"
:init PACKAGE-SETUP_INIT3
:pinfo XP::PACKAGE-SETUP_INIT3 NIL NIL NIL NIL NIL NIL NIL T
:end
*/

#include "lisp.h"

extern LP p_xp_PACKAGE_2DSETUP_5FINIT3();
extern SYMBOL s_lsp_WRITE; 
extern SYMBOL s_lsp_PRINT; 
extern SYMBOL s_lsp_PRIN1; 
extern SYMBOL s_lsp_PRINC; 
extern SYMBOL s_lsp_PPRINT; 
extern SYMBOL s_lsp_FORMAT; 
extern SYMBOL s_lsp_WRITE_2DTO_2DSTRING; 
extern SYMBOL s_lsp_PRINC_2DTO_2DSTRING; 
extern SYMBOL s_lsp_PRIN1_2DTO_2DSTRING; 
extern SYMBOL s_lsp_WRITE_2DLINE; 
extern SYMBOL s_lsp_WRITE_2DSTRING; 
extern SYMBOL s_lsp_WRITE_2DCHAR; 
extern SYMBOL s_lsp_TERPRI; 
extern SYMBOL s_lsp_FRESH_2DLINE; 
extern SYMBOL s_lsp_DEFSTRUCT; 
extern SYMBOL s_lsp_FINISH_2DOUTPUT; 
extern SYMBOL s_lsp_FORCE_2DOUTPUT; 
extern SYMBOL s_lsp_CLEAR_2DOUTPUT; 
extern SYMBOL s_lsp_NIL; 
MAKE_CONS(k17,LREF(s_lsp_CLEAR_2DOUTPUT),LREF(s_lsp_NIL));
MAKE_CONS(k16,LREF(s_lsp_FORCE_2DOUTPUT),LREF(k17));
MAKE_CONS(k15,LREF(s_lsp_FINISH_2DOUTPUT),LREF(k16));
MAKE_CONS(k14,LREF(s_lsp_DEFSTRUCT),LREF(k15));
MAKE_CONS(k13,LREF(s_lsp_FRESH_2DLINE),LREF(k14));
MAKE_CONS(k12,LREF(s_lsp_TERPRI),LREF(k13));
MAKE_CONS(k11,LREF(s_lsp_WRITE_2DCHAR),LREF(k12));
MAKE_CONS(k10,LREF(s_lsp_WRITE_2DSTRING),LREF(k11));
MAKE_CONS(k9,LREF(s_lsp_WRITE_2DLINE),LREF(k10));
MAKE_CONS(k8,LREF(s_lsp_PRIN1_2DTO_2DSTRING),LREF(k9));
MAKE_CONS(k7,LREF(s_lsp_PRINC_2DTO_2DSTRING),LREF(k8));
MAKE_CONS(k6,LREF(s_lsp_WRITE_2DTO_2DSTRING),LREF(k7));
MAKE_CONS(k5,LREF(s_lsp_FORMAT),LREF(k6));
MAKE_CONS(k4,LREF(s_lsp_PPRINT),LREF(k5));
MAKE_CONS(k3,LREF(s_lsp_PRINC),LREF(k4));
MAKE_CONS(k2,LREF(s_lsp_PRIN1),LREF(k3));
MAKE_CONS(k1,LREF(s_lsp_PRINT),LREF(k2));
MAKE_CONS(k0,LREF(s_lsp_WRITE),LREF(k1));
extern SYMBOL s_lsp_SHADOW; 
extern SYMBOL s_xp_FORMATTER; 
extern SYMBOL s_xp_COPY_2DPPRINT_2DDISPATCH; 
extern SYMBOL s_xp_PPRINT_2DDISPATCH; 
extern SYMBOL s_xp_SET_2DPPRINT_2DDISPATCH; 
extern SYMBOL s_xp_PPRINT_2DFILL; 
extern SYMBOL s_xp_PPRINT_2DLINEAR; 
extern SYMBOL s_xp_PPRINT_2DTABULAR; 
extern SYMBOL s_xp_PPRINT_2DLOGICAL_2DBLOCK; 
extern SYMBOL s_xp_PPRINT_2DPOP; 
extern SYMBOL s_xp_PPRINT_2DEXIT_2DIF_2DLIST_2DEXHAUSTED; 
extern SYMBOL s_xp_PPRINT_2DNEWLINE; 
extern SYMBOL s_xp_PPRINT_2DINDENT; 
extern SYMBOL s_xp_PPRINT_2DTAB; 
extern SYMBOL s_xp__2APRINT_2DPPRINT_2DDISPATCH_2A; 
extern SYMBOL s_xp__2APRINT_2DRIGHT_2DMARGIN_2A; 
extern SYMBOL s_xp__2ADEFAULT_2DRIGHT_2DMARGIN_2A; 
extern SYMBOL s_xp__2APRINT_2DMISER_2DWIDTH_2A; 
extern SYMBOL s_xp__2APRINT_2DLINES_2A; 
extern SYMBOL s_xp__2ALAST_2DABBREVIATED_2DPRINTING_2A; 
extern SYMBOL s_xp__2APRINT_2DSHARED_2A; 
MAKE_CONS(k37,LREF(s_xp__2APRINT_2DSHARED_2A),LREF(s_lsp_NIL));
MAKE_CONS(k36,LREF(s_xp__2ALAST_2DABBREVIATED_2DPRINTING_2A),LREF(k37));
MAKE_CONS(k35,LREF(s_xp__2APRINT_2DLINES_2A),LREF(k36));
MAKE_CONS(k34,LREF(s_xp__2APRINT_2DMISER_2DWIDTH_2A),LREF(k35));
MAKE_CONS(k33,LREF(s_xp__2ADEFAULT_2DRIGHT_2DMARGIN_2A),LREF(k34));
MAKE_CONS(k32,LREF(s_xp__2APRINT_2DRIGHT_2DMARGIN_2A),LREF(k33));
MAKE_CONS(k31,LREF(s_xp__2APRINT_2DPPRINT_2DDISPATCH_2A),LREF(k32));
MAKE_CONS(k30,LREF(s_xp_PPRINT_2DTAB),LREF(k31));
MAKE_CONS(k29,LREF(s_xp_PPRINT_2DINDENT),LREF(k30));
MAKE_CONS(k28,LREF(s_xp_PPRINT_2DNEWLINE),LREF(k29));
MAKE_CONS(k27,LREF(s_xp_PPRINT_2DEXIT_2DIF_2DLIST_2DEXHAUSTED),LREF(k28));
MAKE_CONS(k26,LREF(s_xp_PPRINT_2DPOP),LREF(k27));
MAKE_CONS(k25,LREF(s_xp_PPRINT_2DLOGICAL_2DBLOCK),LREF(k26));
MAKE_CONS(k24,LREF(s_xp_PPRINT_2DTABULAR),LREF(k25));
MAKE_CONS(k23,LREF(s_xp_PPRINT_2DLINEAR),LREF(k24));
MAKE_CONS(k22,LREF(s_xp_PPRINT_2DFILL),LREF(k23));
MAKE_CONS(k21,LREF(s_xp_SET_2DPPRINT_2DDISPATCH),LREF(k22));
MAKE_CONS(k20,LREF(s_xp_PPRINT_2DDISPATCH),LREF(k21));
MAKE_CONS(k19,LREF(s_xp_COPY_2DPPRINT_2DDISPATCH),LREF(k20));
MAKE_CONS(k18,LREF(s_xp_FORMATTER),LREF(k19));
extern SYMBOL s_lsp_EXPORT; 




LP p_xp_PACKAGE_2DSETUP_5FINIT3(argc)
      ARGC argc; 
{

LP t0; LP t1; LP t2; 
if (argc != 0) wna(argc,0);
ICALL(s_lsp_SHADOW) (1, LREF(k0));
t0 = ICALL(s_lsp_EXPORT) (MV_CALL(argc,1), LREF(k18));
return(t0);
}
