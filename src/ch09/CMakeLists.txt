set (SOURCES
  ex9.4
  ex9.5
  ex9.14
  )

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)

