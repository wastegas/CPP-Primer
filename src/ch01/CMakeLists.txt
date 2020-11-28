
set(SOURCES
  ex1.2
  ex1.3
)

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)
