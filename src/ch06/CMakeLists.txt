set (SOURCES
  ex6.1
  ex6.4
  ex6.5
  ex6.7
  ex6.10
  ex6.11
  ex6.12
  ex6.17
  ex6.21
  ex6.22
  ex6.23
  ex6.25
  ex6.26
  ex6.27
  ex6.33
  ex6.36
  ex6.37
  ex6.38
  ex6.42
  ex6.44
  ex6.47
  ex6.51
  ex6.54
  ex6.55
  )

add_executable(ex6.9 ex6.9.cpp fact.cpp)

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)

