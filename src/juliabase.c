#include <juliaapi.h>
#include "juliabase.h"

SEXP juliabase_eval_string(SEXP s) {
    return juliaapi_eval_string(s);
}

static const R_CallMethodDef CallEntries[] = {
    // init
    {"juliabase_eval_string", (DL_FUNC) &juliabase_eval_string, 1},
    {"juliabase_init", (DL_FUNC) &juliabase_init, 0},
    {NULL, NULL, 0}
};

void R_init_juliabase(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
