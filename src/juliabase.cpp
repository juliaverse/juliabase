#define JULIAAPI_LOADING
#include <juliaapi.h>
#include <Rcpp.h>
using namespace Rcpp;
using namespace julia;

//' @export
// [[Rcpp::export]]
void juliabase_init() {
    libjulia::load_symbols();
    libjulia::load_constants();
}

//' @export
// [[Rcpp::export]]
void foo() {
    jl_eval_string("println(\"hello\")");
}
