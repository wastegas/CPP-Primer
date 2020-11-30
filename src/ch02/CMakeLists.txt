set (SOURCES
  ex2.4
  ex2.8
  ex2.8b
  ex2.18
  ex2.34
  ex2.35
  ex2.39
  ex2.40
  ex2.41a
  )

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)
