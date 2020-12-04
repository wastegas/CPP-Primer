set (SOURCES
  ex3.1a
  ex3.1b
  ex3.1c
  ex3.1d
  ex3.1e
  ex3.1f
  ex3.1g
  ex3.2a
  ex3.2b
  )

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)

