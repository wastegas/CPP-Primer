set (SOURCES
  ex5.1
  ex5.5
  ex5.6
  ex5.9
  ex5.10
  ex5.11
  ex5.12
  ex5.14
  ex5.17
  ex5.19
  ex5.20
  ex5.21
  ex5.23
  ex5.24
  ex5.25
  )

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)

