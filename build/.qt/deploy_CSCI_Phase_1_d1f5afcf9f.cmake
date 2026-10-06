include("/home/mehdito/Desktop/CSCI/build/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/CSCI_Phase_1-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "/home/mehdito/Desktop/CSCI/build/CSCI_Phase_1"
    GENERATE_QT_CONF
)
