# libbinaryen

Libbinaryen packaged for OCaml.

This is just the low-level C library. If you are looking for OCaml *bindings* to Binaryen, check out [Binaryen.ml](https://github.com/grain-lang/binaryen.ml)!

## Usage

Inside your dune file, you can depend on `libbinaryen` as such:

```
(library
 (name binaryen)
 (public_name binaryen)
 (libraries libbinaryen.c)
 (foreign_stubs
  (language c)
  (names binaryen_stubs)
  (flags :standard -O2 -Wall -Wextra))
 (c_library_flags :standard -lstdc++ -lpthread))
```

## Library flags

This package attempts to smooth over configuration frustrations by providing specific `library_flags` when built.

### MacOS

In order to support Mac M1, this package assumes you are using `clang++` on MacOS and applies the flags `-cc clang++` to the built library.

### Windows

On Windows, this package assumes libbinaryen is built under MinGW and applies the flags `-ccopt -- -ccopt -static` to the built library.

## Contributing

You'll need Node.js and [`esy`](https://esy.sh/docs/en/getting-started.html#install-esy) to build this project.
You should be able to use Opam if you are more comfortable with it, but the core team does all development using esy.

`dune` will take care of compiling Binaryen, so to build the project you'll only need to run:

```bash
esy
```

This will take a while. Once it's done, you can run the tests:

```bash
esy test
```
