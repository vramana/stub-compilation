#include <stdio.h>

#DEFINE CAML_NAME_SPACE
#include <caml/mlvalues.h>
#include <caml/alloc.h>
#include <caml/memory.h>

/*

Simple Version

CAMLprim value send_a_float(value unit)
{
    double pi = 3.14;
    return caml_copy_double(pi);
}

CAMLprim value send_a_string(value unit)
{
    char* s = "Cheng Lou";
    return caml_copy_string(s);
}

*/



CAMLprim value send_a_float(value unit)
{
    CAMLparam1(unit);
    CAMLlocal1(ml_pi);
    double pi = 3.14;
    ml_pi = caml_copy_double(pi);
    CAMLreturn(ml_pi);
}

CAMLprim value send_a_string(value unit)
{
    CAMLparam1(unit);
    CAMLlocal1(ml_s);
    char* s = "Cheng Lou";
    ml_s = caml_copy_string(s);
    CAMLreturn(ml_s);
}
