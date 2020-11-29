set (SOURCES
  ex2.4
  ex2.8
  ex2.8b
  ex2.18
  ex2.34
  )

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)
