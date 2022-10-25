# Changelog

### [109.0.1](https://github.com/grain-lang/libbinaryen/compare/v109.0.0...v109.0.1) (2022-10-25)


### Bug Fixes

* Disable the maybe-uninitialized error in newer gcc ([#69](https://github.com/grain-lang/libbinaryen/issues/69)) ([2b6834a](https://github.com/grain-lang/libbinaryen/commit/2b6834ad6d5fb19618b4a234ae133ddd6918e275))

## [109.0.0](https://github.com/grain-lang/libbinaryen/compare/v108.0.0...v109.0.0) (2022-10-20)


### ⚠ BREAKING CHANGES

* Update binaryen to version_109 (#65)

### Features

* Update binaryen to version_109 ([#65](https://github.com/grain-lang/libbinaryen/issues/65)) ([f79c848](https://github.com/grain-lang/libbinaryen/commit/f79c84871122d40c4dacbb2f9db8c40657b85677))

## [108.0.0](https://github.com/grain-lang/libbinaryen/compare/v107.0.1...v108.0.0) (2022-06-25)


### ⚠ BREAKING CHANGES

* Change js_of_ocaml binding to Binaryen
* Avoid building tools
* Update binaryen to version_108 (#62)

### Features

* Update binaryen to version_108 ([#62](https://github.com/grain-lang/libbinaryen/issues/62)) ([1e69a07](https://github.com/grain-lang/libbinaryen/commit/1e69a071c6cb905dd8d8e1b86957222f29243ed0))


### Miscellaneous Chores

* Avoid building tools ([1e69a07](https://github.com/grain-lang/libbinaryen/commit/1e69a071c6cb905dd8d8e1b86957222f29243ed0))
* Change js_of_ocaml binding to Binaryen ([1e69a07](https://github.com/grain-lang/libbinaryen/commit/1e69a071c6cb905dd8d8e1b86957222f29243ed0))

### [107.0.1](https://github.com/grain-lang/libbinaryen/compare/v107.0.0...v107.0.1) (2022-05-24)


### Bug Fixes

* Remove upper bounds on dependencies ([#60](https://github.com/grain-lang/libbinaryen/issues/60)) ([3a75c23](https://github.com/grain-lang/libbinaryen/commit/3a75c23941e1387d07a686dfa06266f517100c8f))

## [107.0.0](https://github.com/grain-lang/libbinaryen/compare/v106.0.0...v107.0.0) (2022-05-06)


### ⚠ BREAKING CHANGES

* Update binaryen to version_107 ([#57](https://github.com/grain-lang/libbinaryen/issues/57))

### Features

* Update binaryen to version_107 ([#57](https://github.com/grain-lang/libbinaryen/issues/57)) ([48090d5](https://github.com/grain-lang/libbinaryen/commit/48090d541df71df4a13766543beca7a5b559c10f))

## [106.0.0](https://github.com/grain-lang/libbinaryen/compare/v105.1.0...v106.0.0) (2022-05-04)


### ⚠ BREAKING CHANGES

* Update binaryen to version_106 (#55)

### Features

* Update binaryen to version_106 ([#55](https://github.com/grain-lang/libbinaryen/issues/55)) ([5fd7257](https://github.com/grain-lang/libbinaryen/commit/5fd725751594e42d7beb62f054a6d7d969bca96e))

## [105.1.0](https://github.com/grain-lang/libbinaryen/compare/v105.0.0...v105.1.0) (2022-03-09)


### Features

* Provide binaryen.js with library ([#48](https://github.com/grain-lang/libbinaryen/issues/48)) ([f389527](https://github.com/grain-lang/libbinaryen/commit/f389527a95ff845996e2ecaa5118c4bbe30a1ab9))

## [105.0.0](https://github.com/grain-lang/libbinaryen/compare/v104.0.0...v105.0.0) (2022-03-04)


### ⚠ BREAKING CHANGES

* Upgrade binaryen to version_105 (#46)

### Features

* Remove unnecessary conf-python-3 dependency ([e1d386e](https://github.com/grain-lang/libbinaryen/commit/e1d386e3c8f219ecf8f3c50064302b818e5bd951))
* Upgrade binaryen to version_105 ([#46](https://github.com/grain-lang/libbinaryen/issues/46)) ([e1d386e](https://github.com/grain-lang/libbinaryen/commit/e1d386e3c8f219ecf8f3c50064302b818e5bd951))

## [104.0.0](https://github.com/grain-lang/libbinaryen/compare/v103.0.1...v104.0.0) (2022-02-07)


### ⚠ BREAKING CHANGES

* Update binaryen to version_104

### Features

* Update binaryen to version_104 ([#42](https://github.com/grain-lang/libbinaryen/issues/42)) ([2000604](https://github.com/grain-lang/libbinaryen/commit/20006049db29f5256c69524821af2424484e0448))

### [103.0.1](https://www.github.com/grain-lang/libbinaryen/compare/v103.0.0...v103.0.1) (2022-01-20)


### Bug Fixes

* Copy wasm-delegations.def into the correct location ([#28](https://www.github.com/grain-lang/libbinaryen/issues/28)) ([#31](https://www.github.com/grain-lang/libbinaryen/issues/31)) ([bc0c7ee](https://www.github.com/grain-lang/libbinaryen/commit/bc0c7ee35de32c90b52cd73a28e5e5eccfd28a3f))
* Ensure project can build with Opam on Windows ([#33](https://www.github.com/grain-lang/libbinaryen/issues/33)) ([#35](https://www.github.com/grain-lang/libbinaryen/issues/35)) ([cf3a72e](https://www.github.com/grain-lang/libbinaryen/commit/cf3a72e931dc5323eb901955f4121a9266bdf7a5))
* Remove library_flags & only specify c_library_flags where needed ([#41](https://www.github.com/grain-lang/libbinaryen/issues/41)) ([a89fad6](https://www.github.com/grain-lang/libbinaryen/commit/a89fad610435b327df333cb0ef687087be0fd536))
* Run cmake build with -j4 for faster builds ([a89fad6](https://www.github.com/grain-lang/libbinaryen/commit/a89fad610435b327df333cb0ef687087be0fd536))
* Use double dash before -j4 to always pass through ([#39](https://www.github.com/grain-lang/libbinaryen/issues/39)) ([a89fad6](https://www.github.com/grain-lang/libbinaryen/commit/a89fad610435b327df333cb0ef687087be0fd536))

## [103.0.0](https://www.github.com/grain-lang/libbinaryen/compare/v102.0.0...v103.0.0) (2022-01-11)


### ⚠ BREAKING CHANGES

* Bump binaryen to version_103 (#24)

### Features

* Bump binaryen to version_103 ([#24](https://www.github.com/grain-lang/libbinaryen/issues/24)) ([aa8a42d](https://www.github.com/grain-lang/libbinaryen/commit/aa8a42dd4c55065d5f7b27b813573d137c1dde08))

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
