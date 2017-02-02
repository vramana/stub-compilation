external get_a_float: unit -> float = "send_a_float"
external get_a_string: unit -> string = "send_a_string"

let () =
  let s = get_a_string () in
  print_endline (String.concat " " ["Hello";s]);
  let f = get_a_float () in
  print_endline @@ string_of_float f
