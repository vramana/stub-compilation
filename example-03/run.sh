ocamlc -c type_stub.c
ocamlopt -c return_type.ml
ocamlopt type_stub.o return_type.cmx -o myapp
./myapp
