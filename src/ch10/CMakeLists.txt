
set(SOURCES
  ex10.1
  ex10.2
  ex10.3
  ex10.6
  ex10.9
  ex10.11
  ex10.12
  ex10.13
  ex10.14
  ex10.15
  ex10.16
)

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)
