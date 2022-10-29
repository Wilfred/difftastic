cmake_minimum_required(VERSION 3.20)
project(vendor)

function(get_lib_name dir out)
  cmake_path(GET dir FILENAME src_dir)
  string(LENGTH ${src_dir} src_name_length)
  MATH(EXPR name_length "${src_name_length} - 4")
  string(SUBSTRING ${src_dir} 0 ${name_length} out)
  set(lib_name ${out} PARENT_SCOPE)
endfunction()


function(for_library dir lib_name)
  file(GLOB sources CONFIGURE_DEPENDS ${dir}/parser.c ${dir}/scanner.cc ${dir}/scanner.c)

  add_library("${lib_name}" SHARED ${sources})
  target_include_directories("${lib_name}" PRIVATE "${dir}")
endfunction()

file(GLOB helloworld_SRC CONFIGURE_DEPENDS "*-src")

foreach(dir IN LISTS helloworld_SRC)
  file(GLOB sources CONFIGURE_DEPENDS ${dir}/*.c ${dir}/*.cc)
  list(LENGTH sources sources_length)

  if(NOT ${sources_length} GREATER 0)
    if(${dir} MATCHES .*ocaml-src)
      for_library("${dir}/ocaml/src" "tree-sitter-ocaml")
      for_library("${dir}/interface/src" "tree-sitter-ocaml-interface")

    elseif(${dir} MATCHES .*typescript-src)
      for_library("${dir}/typescript/src" "tree-sitter-typescript")
      for_library("${dir}/tsx/src" "tree-sitter-tsx")
    endif()

    continue()
  endif()

  get_lib_name(${dir} "${lib_name}")
  for_library("${dir}" ${lib_name})
endforeach()
