external send_an_int: int -> unit = "get_an_int"
external send_a_float: float -> unit = "get_a_float"
external send_a_string: string -> unit = "get_a_string"

let () =
  send_an_int 2017;
  send_a_string "Reason";
  send_a_float 1.7
