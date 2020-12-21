
set(SOURCES
  ex10.1
  ex10.2
  ex10.3
)

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)
