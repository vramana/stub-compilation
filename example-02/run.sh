ocamlc -c type_stub.c
ocamlopt -c send_type.ml
ocamlopt type_stub.o send_type.cmx -o myapp
./myapp
