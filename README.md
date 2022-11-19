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
  (flags :standard -O2 -Wall -Wextra)))
```

## MacOS C++ Compiler

When including this library in your `dune` MacOS executables, you'll need to specify `-cc clang++` in your `(flags)` stanza. This is required because Binaryen will throw errors for itself to catch and using `clang++` is the only way to handle them correctly. You can find more info on this [ocaml issue](https://github.com/ocaml/ocaml/issues/10423).

Your stanza could look something like this:

```diff
 (executable
  (name example)
  (public_name example)
  (package example)
+ (flags -cc clang++)
  (modules example)
  (libraries binaryen))
```

These flags likely won't work on other operating systems, so you'll probably need to use `dune-configurator` to vary the flags per platform. You can see an example of this in our [tests/](./tests/dune).

## Static Linking

If you are planning to create portable binaries for Windows, it will try to find Cygwin/MinGW locations in your `PATH`. To avoid this, you probably want to add this to your `(executable)` stanzas:

```diff
 (executable
  (name example)
  (public_name example)
  (package example)
+ (flags (:standard -ccopt -- -ccopt -static))
  (modules example)
  (libraries binaryen))
```

These flags might not work on other operating systems (like MacOS), so you'll probably need to use `dune-configurator` to vary the flags per platform. You can see an example of this in our [tests/](./tests/dune).

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
