# Install files

## Project
install(
	TARGETS ${PROJECT_NAME} 
	DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

## Header files
install(
	FILES 
		${PROJECT_BINARY_DIR}/${PROJECT_NAME}Config.h 
		${HEADER}/cpw_parseargs.h
		${HEADER}/argument.h
		${HEADER}/comparator.h
		${HEADER}/key.h
		${HEADER}/parser.h
		${HEADER}/result.h
		${HEADER}/separator.h
		${HEADER}/value.h
	DESTINATION 
		${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}
)

## Libraries
install(
	TARGETS 
		argument
		comparator
		key
		parser
		result
		separator
		value
	DESTINATION 
		${CMAKE_INSTALL_LIBDIR}
)

## Docs files
install(
	FILES 
		${PROJECT_SOURCE_DIR}/README.md
		${PROJECT_SOURCE_DIR}/CODE_OF_CONDUCT.md
		${PROJECT_SOURCE_DIR}/LICENSE
		${PROJECT_SOURCE_DIR}/PULL_REQUEST_TEMPLATE.md
	DESTINATION
		${CMAKE_INSTALL_DOCDIR}
)

## Share files
install(
	FILES ${PROJECT_BINARY_DIR}/share/${PROJECT_NAME}.pc
	DESTINATION ${CMAKE_INSTALL_LIBDIR}/pkgconfig
)