cmake_minimum_required(VERSION 2.8) # Проверка версии CMake.
									# Если версия установленой программы
									# старее указаной, произайдёт аварийный выход.

project(studyhard)			# Название проекта

set(SOURCE_EXE main.cpp)		# Установка переменной со списком исходников для исполняемого файла

set(SOURCE_LIB MyMath.cpp)			# Тоже самое, но для библиотеки

add_library(MyMath STATIC ${SOURCE_LIB})	# Создание статической библиотеки с именем MyMath

add_executable(studyhard ${SOURCE_EXE})	# Создает исполняемый файл с именем studyhard

target_link_libraries(studyhard MyMath)		# Линковка программы с библиотекой
