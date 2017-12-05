#include <juliaapi_init.h>
#include <juliaapi.h>
#include <Rcpp.h>
using namespace Rcpp;

//' @export
// [[Rcpp::export]]
void juliabase_init() {
    juliaapi_init();
}

//' @export
// [[Rcpp::export]]
jl_value_t* foo() {
    return jl_eval_string("1 + 1");
}
