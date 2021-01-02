
set(SOURCES
  ex11.3
  ex11.4
  ex11.7
  ex11.8
  ex11.11
)

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)
