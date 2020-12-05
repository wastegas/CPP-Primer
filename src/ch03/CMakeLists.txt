set (SOURCES
  ex3.1a
  ex3.1b
  ex3.1c
  ex3.1d
  ex3.1e
  ex3.1f
  ex3.1g
  ex3.2a
  ex3.2b
  ex3.4a
  ex3.4b
  ex3.5a
  ex3.5b
  ex3.6
  ex3.7
  ex3.8
  ex3.10
  ex3.14
  ex3.15
  ex3.16
  ex3.17
  ex3.20
  ex3.21
  ex3.22
  ex3.23
  ex3.24
  ex3.25
  ex3.30
  ex3.31
  ex3.36
  ex3.39
  ex3.40
  ex3.41
  ex3.42
  ex3.43
  ex3.44
  )

foreach(SOURCE ${SOURCES})
  add_executable(${SOURCE} ${SOURCE}.cpp)
endforeach(SOURCE)

