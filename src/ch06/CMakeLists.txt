set (SOURCES
  ex6.1
  ex6.4
  ex6.5
  ex6.7
  ex6.10
  )

add_executable(ex6.9 ex6.9.cpp fact.cpp)

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)

