# libbinaryen

Libbinaryen packaged for OCaml.

This is just the low-level C library. If you are looking for OCaml _bindings_ to Binaryen, check out [Binaryen.ml](https://github.com/grain-lang/binaryen.ml)!

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

## Dependencies

This project requires `CMake` and `python` (v3.5 or greater).

When installing with opam, both of these dependencies will be checked using `conf-cmake` and `conf-python-3`.

When installing with esy, CMake will be built from source, and, on Mac or Linux, Python must be globally installed within a location that esy knows about (those being `/usr/local/bin`, `/usr/bin`, `/bin`, `/usr/sbin`, or `/sbin`). On Windows, a suitable python is already available from esy-bash.

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
