set (SOURCES
  ex7.1
  ex7.3
  ex7.7
  ex7.13
  )

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)

