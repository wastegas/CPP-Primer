set (SOURCES
  ex5.1
  ex5.5
  ex5.6
  )

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)

