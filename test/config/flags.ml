module C = Configurator.V1

let () =
  C.main ~name:"flags" (fun c ->
      let default = [] in

      let flags =
        match C.ocaml_config_var c "system" with
        | Some "macosx" ->
            (* These flags preserve the original C++ error behavior. Ref https://github.com/ocaml/ocaml/issues/10423 *)
            [ "-cc"; "clang++" ]
        | Some _ -> default
        | None -> default
      in

      C.Flags.write_sexp "flags.sexp" flags)
