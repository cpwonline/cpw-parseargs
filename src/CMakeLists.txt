# Targets

## Objects libraries

### argument
add_library(argument OBJECT "argument.cc")
target_include_directories(argument PUBLIC ${HEADER})
set_target_properties(argument PROPERTIES POSITION_INDEPENDENT_CODE 1)

### comparator
add_library(comparator OBJECT "comparator.cc")
target_include_directories(comparator PUBLIC ${HEADER})
set_target_properties(comparator PROPERTIES POSITION_INDEPENDENT_CODE 1)

### key
add_library(key OBJECT "key.cc")
target_include_directories(key PUBLIC ${HEADER})
set_target_properties(key PROPERTIES POSITION_INDEPENDENT_CODE 1)

### parser
add_library(parser OBJECT "parser.cc")
target_include_directories(parser PUBLIC ${HEADER})
set_target_properties(parser PROPERTIES POSITION_INDEPENDENT_CODE 1)

### result
add_library(result OBJECT "result.cc")
target_include_directories(result PUBLIC ${HEADER})
set_target_properties(result PROPERTIES POSITION_INDEPENDENT_CODE 1)

### separator
add_library(separator OBJECT "separator.cc")
target_include_directories(separator PUBLIC ${HEADER})
set_target_properties(separator PROPERTIES POSITION_INDEPENDENT_CODE 1)

### value
add_library(value OBJECT "value.cc")
target_include_directories(value PUBLIC ${HEADER})
set_target_properties(value PROPERTIES POSITION_INDEPENDENT_CODE 1)

## Shared and statics libraries

### cpw-parseargs
add_library(${PROJECT_NAME} SHARED "cpw_parseargs.cc")
target_include_directories(${PROJECT_NAME} PUBLIC ${HEADER} ${DEPENDENCY1_INCLUDE_DIRS} ${PROJECT_BINARY_DIR})
target_link_libraries(
	${PROJECT_NAME} 
	PUBLIC
	argument
	comparator
	key
	parser
	result
	separator
	value
)
