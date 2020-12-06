set (SOURCES
  ex6.1
  ex6.4
  ex6.5
  ex6.7
  )

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)

