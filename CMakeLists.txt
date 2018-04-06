file(GLOB HEADERS "include/*.hpp")
PROJECT( Security )
CMAKE_MINIMUM_REQUIRED( VERSION 2.8.12 )
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -std=c++0x")
add_library( Security security.cpp CharacterFile.cpp ${HEADERS})
target_link_libraries( Security )
target_include_directories( Security PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" )
if(MSVC)
  set_source_files_properties( security.cpp CharacterFile.cpp PROPERTIES COMPILE_FLAGS "/bigobj" )
endif(MSVC)

install( TARGETS
   Security

   RUNTIME DESTINATION bin
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib
)
install( FILES ${HEADERS} DESTINATION “headers” )
