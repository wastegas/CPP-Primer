
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
  ex10.17
  ex10.18
  ex10.19
  ex10.20
  ex10.21
  ex10.22
  ex10.24
  ex10.25
  ex10.27
  ex10.28
  ex10.29
)

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)
