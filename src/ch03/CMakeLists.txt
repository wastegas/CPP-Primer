set (SOURCES
  ex3.1a
  ex3.1b
  ex3.1c
  ex3.1d
  )

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)
