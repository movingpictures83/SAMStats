#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "SAMStatsPlugin.h"

void SAMStatsPlugin::input(std::string file) {
 inputfile = file;
}

void SAMStatsPlugin::run() {}

void SAMStatsPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "sam-stats";
myCommand += " ";
myCommand += inputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<SAMStatsPlugin> SAMStatsPluginProxy = PluginProxy<SAMStatsPlugin>("SAMStats", PluginManager::getInstance());
