#include <juliaapi_init.h>

SEXP juliabase_init() {
    juliaapi_init();
    return R_NilValue;
}
