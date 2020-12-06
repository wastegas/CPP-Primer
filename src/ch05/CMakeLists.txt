set (SOURCES
  ex5.1
  ex5.5
  ex5.6
  ex5.9
  ex5.10
  ex5.11
  ex5.12
  )

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)

