
set(SOURCES
  ex10.1
  ex10.2
  ex10.3
  ex10.6
  ex10.9
)

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)
