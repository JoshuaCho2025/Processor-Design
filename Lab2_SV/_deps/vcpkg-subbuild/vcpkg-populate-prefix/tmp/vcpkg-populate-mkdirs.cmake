# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/root/Processor Design/Lab2_SV/_deps/vcpkg-src"
  "/root/Processor Design/Lab2_SV/_deps/vcpkg-build"
  "/root/Processor Design/Lab2_SV/_deps/vcpkg-subbuild/vcpkg-populate-prefix"
  "/root/Processor Design/Lab2_SV/_deps/vcpkg-subbuild/vcpkg-populate-prefix/tmp"
  "/root/Processor Design/Lab2_SV/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp"
  "/root/Processor Design/Lab2_SV/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src"
  "/root/Processor Design/Lab2_SV/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/root/Processor Design/Lab2_SV/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/root/Processor Design/Lab2_SV/_deps/vcpkg-subbuild/vcpkg-populate-prefix/src/vcpkg-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
