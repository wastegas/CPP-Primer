set (SOURCES
  ex8.1
  ex8.2
  ex8.4
  ex8.5
  ex8.6
  ex8.7
  ex8.8
  ex8.9
  ex8.10
  ex8.11
  ex8.13
  )

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)

