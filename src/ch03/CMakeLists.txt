set (SOURCES
  ex3.1a
  ex3.1b
  ex3.1c
  )

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)
