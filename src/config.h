#ifndef CONFIG_H
#define CONFIG_H

#include ".config-firmware-version-git-revision.h"

#ifndef FIRMWARE_VERSION_GIT_REVISION
#define FIRMWARE_VERSION_GIT_REVISION "unknown"
#endif

#define FIRMWARE_VERSION_STRING "Model01Kipples-" FIRMWARE_VERSION_GIT_REVISION

#endif /* CONFIG_H */
