set (SOURCES
  ex9.4
  ex9.5
  ex9.14
  ex9.15
  ex9.18
  ex9.19
  ex9.20
  ex9.24
  ex9.26
  ex9.27
  ex9.28
  ex9.31
  ex9.38
  ex9.41
  ex9.42
  ex9.43
  ex9.44
  ex9.45
  ex9.46
  ex9.47
  ex9.49
  ex9.50
  ex9.51
  ex9.52
  )

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)
