type t

external none : unit -> t = "caml_binaryen_type_none"

let none = none ()
