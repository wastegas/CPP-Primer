set (SOURCES
  ex8.1
  ex8.2
  ex8.4
  ex8.5
  ex8.6
  )

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)

