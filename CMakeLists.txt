cmake_minimum_required(VERSION 3.26)
project(com_122)

set(CMAKE_CXX_STANDARD 17)
find_package(raylib CONFIG REQUIRED)
#lab01
add_executable(lab01-p01 "${PROJECT_SOURCE_DIR}/lab01/p01.cpp")
add_executable(lab01-p02 "${PROJECT_SOURCE_DIR}/lab01/p02.cpp")
add_executable(lab01-p03 "${PROJECT_SOURCE_DIR}/lab01/p03.cpp")
add_executable(lab01-p04 "${PROJECT_SOURCE_DIR}/lab01/p04.cpp")
add_executable(lab01-p05 "${PROJECT_SOURCE_DIR}/lab01/p05.cpp")
add_executable(lab01-p06 "${PROJECT_SOURCE_DIR}/lab01/p06.cpp")
add_executable(lab01-p07 "${PROJECT_SOURCE_DIR}/lab01/p07.cpp")
add_executable(lab01-p08 "${PROJECT_SOURCE_DIR}/lab01/p08.cpp")
add_executable(lab01-p09 "${PROJECT_SOURCE_DIR}/lab01/p09.cpp")
add_executable(lab01-p10 "${PROJECT_SOURCE_DIR}/lab01/p10.cpp")
#lab02
add_executable(lab02-p01 "${PROJECT_SOURCE_DIR}/lab02/p01.cpp")
add_executable(lab02-p02 "${PROJECT_SOURCE_DIR}/lab02/p02.cpp")
add_executable(lab02-p03 "${PROJECT_SOURCE_DIR}/lab02/p03.cpp")
add_executable(lab02-p04 "${PROJECT_SOURCE_DIR}/lab02/p04.cpp")
add_executable(lab02-p05 "${PROJECT_SOURCE_DIR}/lab02/p05.cpp")
add_executable(lab02-p06 "${PROJECT_SOURCE_DIR}/lab02/p06.cpp")
add_executable(lab02-p07 "${PROJECT_SOURCE_DIR}/lab02/p07.cpp")
add_executable(lab02-p08 "${PROJECT_SOURCE_DIR}/lab02/p08.cpp")
add_executable(lab02-p09 "${PROJECT_SOURCE_DIR}/lab02/p09.cpp")
add_executable(lab02-p10 "${PROJECT_SOURCE_DIR}/lab02/p10.cpp")
#lab03
add_executable(lab03-p01 "${PROJECT_SOURCE_DIR}/lab03/p01.cpp")
add_executable(lab03-p02 "${PROJECT_SOURCE_DIR}/lab03/p02.cpp")
add_executable(lab03-p03 "${PROJECT_SOURCE_DIR}/lab03/p03.cpp")
add_executable(lab03-p04 "${PROJECT_SOURCE_DIR}/lab03/p04.cpp")
add_executable(lab03-p05 "${PROJECT_SOURCE_DIR}/lab03/p05.cpp")
add_executable(lab03-p06 "${PROJECT_SOURCE_DIR}/lab03/p06.cpp")
add_executable(lab03-p07 "${PROJECT_SOURCE_DIR}/lab03/p07.cpp")
add_executable(lab03-p08 "${PROJECT_SOURCE_DIR}/lab03/p08.cpp")
add_executable(lab03-p09 "${PROJECT_SOURCE_DIR}/lab03/p09.cpp")
add_executable(lab03-p10 "${PROJECT_SOURCE_DIR}/lab03/p10.cpp")
#lab04
add_executable(lab04-p01 "${PROJECT_SOURCE_DIR}/lab04/p01.cpp")
add_executable(lab04-p02 "${PROJECT_SOURCE_DIR}/lab04/p02.cpp")
add_executable(lab04-p03 "${PROJECT_SOURCE_DIR}/lab04/p03.cpp")
add_executable(lab04-p04 "${PROJECT_SOURCE_DIR}/lab04/p04.cpp")
add_executable(lab04-p05 "${PROJECT_SOURCE_DIR}/lab04/p05.cpp")
add_executable(lab04-p06 "${PROJECT_SOURCE_DIR}/lab04/p06.cpp")
add_executable(lab04-p07 "${PROJECT_SOURCE_DIR}/lab04/p07.cpp")
add_executable(lab04-p08 "${PROJECT_SOURCE_DIR}/lab04/p08.cpp")
add_executable(lab04-p09 "${PROJECT_SOURCE_DIR}/lab04/p09.cpp")
add_executable(lab04-p10 "${PROJECT_SOURCE_DIR}/lab04/p10.cpp")
#lab05
# ... (previous code)

#lab05
add_executable(lab05-p01 "${PROJECT_SOURCE_DIR}/lab05/p01.cpp")
add_executable(lab05-p02 "${PROJECT_SOURCE_DIR}/lab05/p02.cpp")
add_executable(lab05-p03 "${PROJECT_SOURCE_DIR}/lab05/p03.cpp")
add_executable(lab05-p04 "${PROJECT_SOURCE_DIR}/lab05/p04.cpp")
target_link_libraries(lab05-p04 PRIVATE raylib)
add_executable(lab05-p05 "${PROJECT_SOURCE_DIR}/lab05/p05.cpp")
target_link_libraries(lab05-p05 PRIVATE raylib)

#lab06
add_executable(lab06-p01 "${PROJECT_SOURCE_DIR}/lab06/p01.cpp")
add_executable(lab06-p02 "${PROJECT_SOURCE_DIR}/lab06/p02.cpp")
add_executable(lab06-p03 "${PROJECT_SOURCE_DIR}/lab06/p03.cpp")
target_link_libraries(lab06-p03 PRIVATE raylib)
add_executable(lab06-p04 "${PROJECT_SOURCE_DIR}/lab06/p04.cpp")
add_executable(lab06-p05 "${PROJECT_SOURCE_DIR}/lab06/p05.cpp")
add_executable(lab06-p06 "${PROJECT_SOURCE_DIR}/lab06/p06.cpp")
add_executable(lab06-p07 "${PROJECT_SOURCE_DIR}/lab06/p07.cpp")
add_executable(lab06-p08 "${PROJECT_SOURCE_DIR}/lab06/p08.cpp")
add_executable(lab06-p09 "${PROJECT_SOURCE_DIR}/lab06/p09.cpp")
add_executable(lab06-p10 "${PROJECT_SOURCE_DIR}/lab06/p10.cpp")

#lab07
add_executable(lab07-p01 "${PROJECT_SOURCE_DIR}/lab07/p01.cpp")
add_executable(lab07-p02 "${PROJECT_SOURCE_DIR}/lab07/p02.cpp")
add_executable(lab07-p03 "${PROJECT_SOURCE_DIR}/lab07/p03.cpp")
add_executable(lab07-p04 "${PROJECT_SOURCE_DIR}/lab07/p04.cpp")
add_executable(lab07-p05 "${PROJECT_SOURCE_DIR}/lab07/p05.cpp")
target_link_libraries(lab07-p05 PRIVATE raylib)
add_executable(lab07-p06 "${PROJECT_SOURCE_DIR}/lab07/p06.cpp")
add_executable(lab07-p07 "${PROJECT_SOURCE_DIR}/lab07/p07.cpp")
add_executable(lab07-p08 "${PROJECT_SOURCE_DIR}/lab07/p08.cpp")
add_executable(lab07-p09 "${PROJECT_SOURCE_DIR}/lab07/p09.cpp")
add_executable(lab07-p10 "${PROJECT_SOURCE_DIR}/lab07/p10.cpp")

#lab08
add_executable(lab08-p01 "${PROJECT_SOURCE_DIR}/lab08/p01.cpp")
add_executable(lab08-p02 "${PROJECT_SOURCE_DIR}/lab08/p02.cpp")
add_executable(lab08-p03 "${PROJECT_SOURCE_DIR}/lab08/p03.cpp")
add_executable(lab08-p04 "${PROJECT_SOURCE_DIR}/lab08/p04.cpp")
add_executable(lab08-p05 "${PROJECT_SOURCE_DIR}/lab08/p05.cpp")


#ojmid
add_executable(p1000 "${PROJECT_SOURCE_DIR}/ojmid/p1000.cpp")
add_executable(p1001 "${PROJECT_SOURCE_DIR}/ojmid/p1001.cpp")
add_executable(p1002 "${PROJECT_SOURCE_DIR}/ojmid/p1002.cpp")
add_executable(p1003 "${PROJECT_SOURCE_DIR}/ojmid/p1003.cpp")
add_executable(p1004 "${PROJECT_SOURCE_DIR}/ojmid/p1004.cpp")
add_executable(p1005 "${PROJECT_SOURCE_DIR}/ojmid/p1005.cpp")
add_executable(p1006 "${PROJECT_SOURCE_DIR}/ojmid/p1006.cpp")
add_executable(p1007 "${PROJECT_SOURCE_DIR}/ojmid/p1007.cpp")
add_executable(p1008 "${PROJECT_SOURCE_DIR}/ojmid/p1008.cpp")
add_executable(p1009 "${PROJECT_SOURCE_DIR}/ojmid/p1009.cpp")
add_executable(p1010 "${PROJECT_SOURCE_DIR}/ojmid/p1010.cpp")
add_executable(p1011 "${PROJECT_SOURCE_DIR}/ojmid/p1011.cpp")
add_executable(p1012 "${PROJECT_SOURCE_DIR}/ojmid/p1012.cpp")
add_executable(p1013 "${PROJECT_SOURCE_DIR}/ojmid/p1013.cpp")
add_executable(p1014 "${PROJECT_SOURCE_DIR}/ojmid/p1014.cpp")
add_executable(p1015 "${PROJECT_SOURCE_DIR}/ojmid/p1015.cpp")
add_executable(p1016 "${PROJECT_SOURCE_DIR}/ojmid/p1016.cpp")
add_executable(p1017 "${PROJECT_SOURCE_DIR}/ojmid/p1017.cpp")
add_executable(p1018 "${PROJECT_SOURCE_DIR}/ojmid/p1018.cpp")
add_executable(p1019 "${PROJECT_SOURCE_DIR}/ojmid/p1019.cpp")
add_executable(p1020 "${PROJECT_SOURCE_DIR}/ojmid/p1020.cpp")
add_executable(p1021 "${PROJECT_SOURCE_DIR}/ojmid/p1021.cpp")
add_executable(p1035 "${PROJECT_SOURCE_DIR}/ojmid/p1035.cpp")
add_executable(p1036 "${PROJECT_SOURCE_DIR}/ojmid/p1036.cpp")
add_executable(p1037 "${PROJECT_SOURCE_DIR}/ojmid/p1037.cpp")
add_executable(p1038 "${PROJECT_SOURCE_DIR}/ojmid/p1038.cpp")
add_executable(p1040 "${PROJECT_SOURCE_DIR}/ojmid/p1040.cpp")
add_executable(p1041 "${PROJECT_SOURCE_DIR}/ojmid/p1041.cpp")
add_executable(p1042 "${PROJECT_SOURCE_DIR}/ojmid/p1042.cpp")
add_executable(p1043 "${PROJECT_SOURCE_DIR}/ojmid/p1043.cpp")
add_executable(p1044 "${PROJECT_SOURCE_DIR}/ojmid/p1044.cpp")
add_executable(p1045 "${PROJECT_SOURCE_DIR}/ojmid/p1045.cpp")
add_executable(p1046 "${PROJECT_SOURCE_DIR}/ojmid/p1046.cpp")
add_executable(p1047 "${PROJECT_SOURCE_DIR}/ojmid/p1047.cpp")
add_executable(p1048 "${PROJECT_SOURCE_DIR}/ojmid/p1048.cpp")
add_executable(p1049 "${PROJECT_SOURCE_DIR}/ojmid/p1049.cpp")
add_executable(p1050 "${PROJECT_SOURCE_DIR}/ojmid/p1050.cpp")
add_executable(p1051 "${PROJECT_SOURCE_DIR}/ojmid/p1051.cpp")
add_executable(p1052 "${PROJECT_SOURCE_DIR}/ojmid/p1052.cpp")
add_executable(p1061 "${PROJECT_SOURCE_DIR}/ojmid/p1061.cpp")
add_executable(p1059 "${PROJECT_SOURCE_DIR}/ojmid/p1059.cpp")
add_executable(p1060 "${PROJECT_SOURCE_DIR}/ojmid/p1060.cpp")
add_executable(p1064 "${PROJECT_SOURCE_DIR}/ojmid/p1064.cpp")
add_executable(p1065 "${PROJECT_SOURCE_DIR}/ojmid/p1065.cpp")
add_executable(p1066 "${PROJECT_SOURCE_DIR}/ojmid/p1066.cpp")
add_executable(p1067 "${PROJECT_SOURCE_DIR}/ojmid/p1067.cpp")
add_executable(p1070 "${PROJECT_SOURCE_DIR}/ojmid/p1070.cpp")
add_executable(p1071 "${PROJECT_SOURCE_DIR}/ojmid/p1071.cpp")
add_executable(p1072 "${PROJECT_SOURCE_DIR}/ojmid/p1072.cpp")
add_executable(p1172 "${PROJECT_SOURCE_DIR}/ojmid/p1172.cpp")
add_executable(p1173 "${PROJECT_SOURCE_DIR}/ojmid/p1173.cpp")
add_executable(p1174 "${PROJECT_SOURCE_DIR}/ojmid/p1174.cpp")
add_executable(p1175 "${PROJECT_SOURCE_DIR}/ojmid/p1175.cpp")
add_executable(p1176 "${PROJECT_SOURCE_DIR}/ojmid/p1176.cpp")
add_executable(p1177 "${PROJECT_SOURCE_DIR}/ojmid/p1177.cpp")
add_executable(p1178 "${PROJECT_SOURCE_DIR}/ojmid/p1178.cpp")
add_executable(p1179 "${PROJECT_SOURCE_DIR}/ojmid/p1179.cpp")
add_executable(p1180 "${PROJECT_SOURCE_DIR}/ojmid/p1180.cpp")
add_executable(p1181 "${PROJECT_SOURCE_DIR}/ojmid/p1181.cpp")
add_executable(p1182 "${PROJECT_SOURCE_DIR}/ojmid/p1182.cpp")
add_executable(p1183 "${PROJECT_SOURCE_DIR}/ojmid/p1183.cpp")
add_executable(p1184 "${PROJECT_SOURCE_DIR}/ojmid/p1184.cpp")
add_executable(p1185 "${PROJECT_SOURCE_DIR}/ojmid/p1185.cpp")
add_executable(p1186 "${PROJECT_SOURCE_DIR}/ojmid/p1186.cpp")
add_executable(p1187 "${PROJECT_SOURCE_DIR}/ojmid/p1187.cpp")
add_executable(p1188 "${PROJECT_SOURCE_DIR}/ojmid/p1188.cpp")
add_executable(p1189 "${PROJECT_SOURCE_DIR}/ojmid/p1189.cpp")
add_executable(p1190 "${PROJECT_SOURCE_DIR}/ojmid/p1190.cpp")
add_executable(p1435 "${PROJECT_SOURCE_DIR}/ojmid/p1435.cpp")
add_executable(p1478 "${PROJECT_SOURCE_DIR}/ojmid/p1478.cpp")

#projects
add_executable(
        projects-dungeon
        "${PROJECT_SOURCE_DIR}/projects/dungeon.cpp"
        "${PROJECT_SOURCE_DIR}/projects/globals.h"
        "${PROJECT_SOURCE_DIR}/projects/graphics.h"
        "${PROJECT_SOURCE_DIR}/projects/images.h"
        "${PROJECT_SOURCE_DIR}/projects/utilities.h"
        "${PROJECT_SOURCE_DIR}/projects/levels.h"
        "${PROJECT_SOURCE_DIR}/projects/sound.h"
        "${PROJECT_SOURCE_DIR}/projects/music.h"
        "${PROJECT_SOURCE_DIR}/projects/enemy.h"
        "${PROJECT_SOURCE_DIR}/projects/README.h"



)
target_link_libraries(projects-dungeon PRIVATE raylib)




