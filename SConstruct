import os
import shutil
import subprocess

libraries = ['pthread']
library_paths = ''
cppDefines 		= {}
cppFlags 		= ['-Wall', '-g']#, '-Werror']
cxxFlags 		= ['-std=c++11']

env = Environment(CC = 'clang-6.0', CXX = 'clang++-6.0')
env.Append(CPPDEFINES=['DEBUG'])
env.Append(LIBS 			= libraries)
env.Append(LIBPATH 		= library_paths)
env.Append(CPPDEFINES 	= cppDefines)
env.Append(CPPFLAGS 		= cppFlags)
env.Append(CXXFLAGS 		= cxxFlags)

source_files = Glob('src/*.cpp', 'src/*.h')

env.Program("build/main", source_files)
