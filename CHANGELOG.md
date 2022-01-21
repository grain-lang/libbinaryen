# Changelog

### [102.0.4](https://www.github.com/grain-lang/libbinaryen/compare/v102.0.3...v102.0.4) (2022-01-20)


### Bug Fixes

* Use double dash before -j4 to always pass through ([#39](https://www.github.com/grain-lang/libbinaryen/issues/39)) ([002eb47](https://www.github.com/grain-lang/libbinaryen/commit/002eb470eb3a7c751ca7071b8840df73433ab430))

### [102.0.3](https://www.github.com/grain-lang/libbinaryen/compare/v102.0.2...v102.0.3) (2022-01-20)


### Bug Fixes

* Remove library_flags & only specify c_library_flags where needed ([#37](https://www.github.com/grain-lang/libbinaryen/issues/37)) ([cd8c41a](https://www.github.com/grain-lang/libbinaryen/commit/cd8c41a9ffae5949063f0ace49d0ecdcc74b4c31))
* Run cmake build with -j4 for faster builds ([cd8c41a](https://www.github.com/grain-lang/libbinaryen/commit/cd8c41a9ffae5949063f0ace49d0ecdcc74b4c31))

### [102.0.2](https://www.github.com/grain-lang/libbinaryen/compare/v102.0.1...v102.0.2) (2022-01-18)


### Bug Fixes

* Ensure project can build with Opam on Windows ([#33](https://www.github.com/grain-lang/libbinaryen/issues/33)) ([e6070de](https://www.github.com/grain-lang/libbinaryen/commit/e6070de21672242df02247f84c11f156d435787e))

### [102.0.1](https://www.github.com/grain-lang/libbinaryen/compare/v102.0.0...v102.0.1) (2022-01-14)


### Bug Fixes

* Copy wasm-delegations.def into the correct location ([#28](https://www.github.com/grain-lang/libbinaryen/issues/28)) ([c79bcc3](https://www.github.com/grain-lang/libbinaryen/commit/c79bcc39aa76d23d96086cd191a53b249bfedb6b))

## [102.0.0](https://www.github.com/grain-lang/libbinaryen/compare/v101.0.2...v102.0.0) (2022-01-06)


### ⚠ BREAKING CHANGES

* Bump binaryen to version_102 (#20)

### Features

* Bump binaryen to version_102 ([#20](https://www.github.com/grain-lang/libbinaryen/issues/20)) ([5e147d7](https://www.github.com/grain-lang/libbinaryen/commit/5e147d7ff767b21cacdacd786eb1e6860394925c))

### [101.0.2](https://www.github.com/grain-lang/libbinaryen/compare/v101.0.1...v101.0.2) (2022-01-06)


### Bug Fixes

* Always have a target non-Windows/non-MacOS ([#17](https://www.github.com/grain-lang/libbinaryen/issues/17)) ([fac9d36](https://www.github.com/grain-lang/libbinaryen/commit/fac9d36e5ddbfa7aaa7cc86344e53d716ae98c60))

### [101.0.1](https://www.github.com/grain-lang/libbinaryen/compare/v101.0.0...v101.0.1) (2021-11-10)


### Bug Fixes

* Build binaryen in source & avoid cmake --install ([4f67d9a](https://www.github.com/grain-lang/libbinaryen/commit/4f67d9a849b172874a52dcfddf691efc274cb044))
* **opam:** Add conf-python-3 & ocaml ([4f67d9a](https://www.github.com/grain-lang/libbinaryen/commit/4f67d9a849b172874a52dcfddf691efc274cb044))

## 101.0.0 (2021-11-07)


### Features

* Initial implementation ([#1](https://www.github.com/grain-lang/libbinaryen/issues/1)) ([9da8c77](https://www.github.com/grain-lang/libbinaryen/commit/9da8c770c7ead5b74bab70efbd94c8e763716ec3))


### Miscellaneous Chores

* **ci:** Fix release branch name ([#2](https://www.github.com/grain-lang/libbinaryen/issues/2)) ([a543459](https://www.github.com/grain-lang/libbinaryen/commit/a543459cc7f2313318e0b5ec7f48bb901f67dbfb))
