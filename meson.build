project('castle', 'cpp')

cmake = import('cmake')

sdl_subproj = cmake.subproject('SDL')
sdl_dep = sdl_subproj.dependency('SDL2')

glm_subproj = cmake.subproject('glm')
glm_dep = glm_subproj.dependency('glm')

sources = [
  'src/main.cc',
  'src/sdl.cc',
  'src/gamemath.cc',
  ]

executable('castle', sources,
  dependencies : [sdl_dep, glm_dep]
  )
