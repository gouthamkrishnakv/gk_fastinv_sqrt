project('gk_fastinv_sqrt', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

# These arguments are only used to build the shared library
# not the executables that use the library.
lib_args = ['-DBUILDING_GK_FASTINV_SQRT']

shlib = shared_library('gk_fastinv_sqrt', 'gk_fastinv_sqrt.c',
  install : true,
  c_args : lib_args,
  gnu_symbol_visibility : 'hidden',
)

test_exe = executable('gk_fastinv_sqrt_test', 'gk_fastinv_sqrt_test.c',
  link_with : shlib)
test('gk_fastinv_sqrt', test_exe)

# Make this library usable as a Meson subproject.
gk_fastinv_sqrt_dep = declare_dependency(
  include_directories: include_directories('.'),
  link_with : shlib)

# Make this library usable from the system's
# package manager.
install_headers('gk_fastinv_sqrt.h', subdir : 'gk_fastinv_sqrt')

pkg_mod = import('pkgconfig')
pkg_mod.generate(
  name : 'gk_fastinv_sqrt',
  filebase : 'gk_fastinv_sqrt',
  description : 'Meson sample project.',
  subdirs : 'gk_fastinv_sqrt',
  libraries : shlib,
  version : '0.1',
)
