
set(SOURCES
  ex1.2
  ex1.3
  ex1.4
  ex1.5
  ex1.9
  ex1.10
  ex1.11
  ex1.13
  ex1.16
  ex1.18
  ex1.19
  ex1.20
  ex1.21
  ex1.22
  ex1.23
  ex1.25
)

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)
