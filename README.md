# Sometimes React Native needs C++ Module

This repository is an upgraded version of [react-native-c-plus-plus](https://github.com/ryardley/react-native-c-plus-plus) using [React Native version 0.63](https://reactnative.dev/docs/getting-started) after reading these the medium series:

* [Why React Native needs C++](https://medium.com/p/fb30b46c2468)
* [Talking like a React Native](https://medium.com/p/f245e5d919dd) 
* [Mobile to C++ with Djinni](https://medium.com/p/1c993757b68f) 
* [Connect React Native to C++](https://medium.com/p/a2809b92095) 

# This repository requires Djinni

Djinni is a tool for generating cross-language type declarations and interface bindings. It's
designed to connect C++ with either Java or Objective-C. Python support is available in an
experimental version on the `python` branch.

Djinni can be used to interface cross-platform C++ library code with platform-specific Java and
Objective-C on Android and iOS.  We announced Djinni at CppCon 2014. You can see the
[slides](https://bit.ly/djinnitalk) and [video](https://bit.ly/djinnivideo).  For more info about
Djinni and how others are using it, check out the community links at the end of this document.

## Features of Djinni
- Generates parallel C++, Java and Objective-C type definitions from a single interface
  description file.
- Supports the intersection of the three core languages' primitive types, and user-defined
  enums, records, and interfaces.
- Generates interface code allowing bidirectional calls between C++ and Java (with JNI) or
  Objective-C (with Objective-C++).
- Autogenerate comparator functions (equality, ordering) on data types.

## Author
- Naandalist
