#include <stdio.h>
#include <caml/mlvalues.h>

CAMLprim value get_an_int(value v)
{
    int i;
    i = Int_val(v);
    printf("%d\n", i);
    return Val_unit;
}


CAMLprim value get_a_float(value v)
{
    float f;
    f = Double_val(v);
    printf("%f\n", v);
    return Val_unit;
}

CAMLprim value get_a_string(value v)
{
    char* s;
    s = String_val(v);
    printf("%s\n", s);
    return Val_unit;
}
