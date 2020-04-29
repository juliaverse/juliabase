#' @name juliabase
#' @title Julia Base
#' @docType package
#' @useDynLib juliabase, .registration = TRUE, .fixes = "C_"
NULL


#' @export
jl_base_init <- function() {
    invisible(.Call(C_juliabase_init))
}

#' @export
jl_base_eval_string <- function(s) {
    .Call(C_juliabase_eval_string, s)
}
