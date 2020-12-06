set (SOURCES
  ex4.4
  ex4.6
  ex4.21
  )

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)

