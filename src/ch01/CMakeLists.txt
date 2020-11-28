
set(SOURCES
  ex1.2
  ex1.3
  ex1.4
  ex1.5
  ex1.9
  ex1.10
)

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)
