set (SOURCES
  ex6.1
  ex6.4
  ex6.5
  )

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)

